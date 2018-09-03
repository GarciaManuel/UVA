/*-------------------------------------------------------
 *
 * Actividad de programación: Problema 11137 de UVA
 * Fecha: 2-Mayo-2018
 * Autor: A01701414 Manuel García Huerta
 *
 *------------------------------------------------------*/

#include <iostream>
using namespace std;
long long int pay[10000];

void createPosibilities(){
	int coins[21];
	for (int i = 1; i <= 21; ++i)
	{
		coins[i-1]=i*i*i;
	}
	pay[0]=1;
	for(int i=0;i<21;i++)
        for(int j=coins[i];j<10000;j++)
            pay[j]+=pay[j-coins[i]];

}

int main(){
	int amount;
	createPosibilities();
	while(scanf("%d", &amount) == 1)
	printf("%llu\n", pay[amount]);
}