/*-------------------------------------------------------
 *
 * Actividad de programación: Problema 10041 de UVA
 * Fecha: 2-Mayo-2018
 * Autor: A01701414 Manuel García Huerta
 *
 *------------------------------------------------------*/

#include <iostream>
#include <cstdlib>

using namespace std;

int address[3000];

int total_dif(int i, const int r)
{
    int total = 0;

    for (int j = 0; j < r; ++j)
        total += abs(address[j] - address[i]);

    return total;
}

int main()
{
    int test_cases,r,aux,basic_total;
    cin >> test_cases;

    while (test_cases>0)
    {
        int r;
        cin >> r;
        for (int i = 0; i < r; ++i)
            cin >> address[i];
        basic_total = total_dif(0,r);

        for (int i = 1; i < r; ++i){
            aux = total_dif(i,r);

            if(aux<basic_total)
                basic_total=aux;
        }
        cout << basic_total << '\n';
        test_cases--;

    }
}

