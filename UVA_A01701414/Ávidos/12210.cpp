/*-------------------------------------------------------
 *
 * Actividad de programación: Problema 12210 de UVA
 * Fecha: 2-Mayo-2018
 * Autor: A01701414 Manuel García Huerta
 *
 *------------------------------------------------------*/

#include <cstdio>
#include <vector>
#include <algorithm> 

int main(){

bool flag;
int sizeArr,sizeArr2, cases=0;
while(true){
	scanf("%i",&sizeArr);
	scanf("%i",&sizeArr2);
	if(sizeArr == 0 && sizeArr2 == 0)
		break;
	else{
		std::vector<int> arr(sizeArr), arr2(sizeArr2);
		int minAge=100;
		for (int i = 0; i < sizeArr; ++i)
		{
			scanf("%i",&arr[i]);
			if(arr[i]<minAge)
				minAge = arr[i];
		}
		for (int i = 0; i < sizeArr2; ++i)
		{
			scanf("%i",&arr2[i]);
		}
		if(sizeArr>sizeArr2){
			printf("Case %i: %i %i\n",++cases,sizeArr-sizeArr2,minAge);
		}else{
			printf("Case %i: 0\n",++cases);
		}
	}
}
}