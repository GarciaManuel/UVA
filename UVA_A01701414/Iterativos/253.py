#/*-------------------------------------------------------
 #*
 #* Actividad de programación: Problema 253 de UVA
 #* Fecha: 2-Mayo-2018
 #* Autor: A01701414 Manuel García Huerta
 #*
 #*------------------------------------------------------*/

def rotate_90_left(cube):
	aux = cube[1]
	cube[1]=cube[2]
	cube[2]=cube[4]
	cube[4]=cube[3]
	cube[3]=aux
	
def rotate_90_up(cube):
	aux_first= cube[0]
	cube[0]=cube[1]
	cube[1]=cube[5]
	cube[5]=cube[4]
	cube[4]=aux_first

def rotate_90_z(cube):
	aux_first= cube[0]
	cube[0]=cube[3]
	cube[3]=cube[5]
	cube[5]=cube[2]
	cube[2]=aux_first
	

import sys
lines = sys.stdin.readlines()

for line in lines:
	cube1 = list(line[0:6])
	cube2 = list(line[6:12])
	flag=False
	for i in range(4):
		for i in range (4):
			for i in range (4):
				rotate_90_z(cube1)
				if cube1==cube2:
					flag = True
					break
			rotate_90_left(cube1)
			if cube1==cube2:
				flag = True
				break
		rotate_90_up(cube1)
		if cube1==cube2:
			flag=True
			break

	if flag==True:
	 	print('TRUE')
	else:
	 	print('FALSE') 