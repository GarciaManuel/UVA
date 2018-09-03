#/*-------------------------------------------------------
 #*
 #* Actividad de programación: Problema 679 de UVA
 #* Fecha: 2-Mayo-2018
 #* Autor: A01701414 Manuel García Huerta
 #*
 #*------------------------------------------------------*/

def droppingBalls(total_nodes,actual_node,balls_left):
	node_left = actual_node*2
	node_right = actual_node*2+1

	while (node_right<=total_nodes and node_left<=total_nodes):
		if(balls_left%2 == 0):
			actual_node = node_right;
			node_left = actual_node*2
			node_right = actual_node*2+1
			balls_left= int(balls_left/2)

		else:
			actual_node = node_left;
			node_left = actual_node*2
			node_right = actual_node*2+1
			balls_left= int(balls_left/2) +1
			
	return actual_node



test_cases = int(input())
while(test_cases):
	depth , balls = (int(val) for val in input().split())
	total_nodes = (2**depth)-1
	print(droppingBalls(total_nodes,1,balls))
	test_cases-=1
input()

