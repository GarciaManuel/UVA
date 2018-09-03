#/*-------------------------------------------------------
 #*
 #* Actividad de programación: Problema 10340 de UVA
 #* Fecha: 2-Mayo-2018
 #* Autor: A01701414 Manuel García Huerta
 #*
 #*------------------------------------------------------*/

import fileinput
for line in fileinput.input():
	index=0
	flag=False
	word_to_find, word_encoded = (val for val in line.split())
	for letter in word_encoded:
		if letter == word_to_find[index]:
			index+=1
		if index == len(word_to_find):
			print('Yes')
			flag=True
			break

	if(not flag):
		print('No')
