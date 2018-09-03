/*-------------------------------------------------------
 *
 * Actividad de programación: Problema 10474 de UVA
 * Fecha: 2-Mayo-2018
 * Autor: A01701414 Manuel García Huerta
 *
 *------------------------------------------------------*/

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
int col_marbles[10005];

int findMarble(int query,int low, int high){
    int mid;
    if(low<=high){
        mid = (low+high)/2;
        if(col_marbles[mid]==query && col_marbles[mid-1]!=col_marbles[mid])
            return mid;
        else{
            if(col_marbles[mid]>=query)
                return findMarble(query,low,mid-1);
            else
                return findMarble(query,mid+1,high);
        }
    }
    else{
    	return -1;
    }
}
int main() {
    int length_marb = 0, marbles, queries, res, query = 0,itr=1;
    while (true) {
        scanf("%d%*c %d%*c", &marbles, &queries);
        if (marbles == 0 && queries == 0)
            break;
        else {
            for (int i = 0; i < marbles; i++) {
                scanf("%d%*c", &col_marbles[i]);
            }
            length_marb = marbles;
            sort(col_marbles, col_marbles + length_marb);
            printf("CASE# %d:\n", itr);
            for (int i = 1; i <= queries; i++) {
                scanf("%d%*c", &query);
                res = findMarble(query, 0, length_marb);
                if (res != -1)
                    printf("%d found at %d\n", query, res+1);
                else
                    printf("%d not found\n", query);
            }
        }
        itr++;
    }
}