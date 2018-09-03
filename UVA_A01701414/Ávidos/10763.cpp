/*-------------------------------------------------------
 *
 * Actividad de programación: Problema 10763 de UVA
 * Fecha: 2-Mayo-2018
 * Autor: A01701414 Manuel García Huerta
 *
 *------------------------------------------------------*/

#include <cstdio>
#include <vector>
#include <algorithm> 

int main(){

bool flag;
int times;
while(true){
	scanf("%i",&times);
	if(times == 0)
		break;
	else{
		std::vector<int> arr(times), arr2(times);
		for (int i = 0; i < times; ++i)
		{
			scanf("%i",&arr[i]);
			scanf("%i",&arr2[i]);
		}
		std::sort(arr.begin(),arr.end());
		std::sort(arr2.begin(),arr2.end());
		if(arr != arr2){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
	}
}
}