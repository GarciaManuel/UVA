#/*-------------------------------------------------------
 #*
 #* Actividad de programación: Problema 102 de UVA
 #* Fecha: 2-Mayo-2018
 #* Autor: A01701414 Manuel García Huerta
 #*
 #*------------------------------------------------------*/

def toLocalities(string):
	result = list()
	for letter in string:
		if letter == 'b':
			result.append(0)
		elif letter == 'g':
			result.append(1)
		elif letter == 'c':
			result.append(2)

	return result

import sys
lines = sys.stdin.readlines()

for line in lines:
	cans_full = line
	cans_full = list(map(int, cans_full.split()))
	total = cans_full[0]+cans_full[1]+cans_full[2]+cans_full[3]+cans_full[4]+cans_full[5]+cans_full[6]+cans_full[7]+cans_full[8]
	combinations = ["bcg","bgc","cbg","cbg","cgb","gbc","gcb"];
	aux_min = 100000000000000
	aux_order='bbb'

	for combination in combinations:
		not_visit = toLocalities(combination)
		movements = total - (cans_full[not_visit[0]]+cans_full[not_visit[1]+3]+cans_full[not_visit[2]+6])
		if movements < aux_min : 
			aux_min = movements
			aux_order = combination.upper()

	answer  ='{} {}'.format(aux_order, aux_min)
	print(answer)
	