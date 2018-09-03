/*-------------------------------------------------------
 *
 * Actividad de programación: Problema 10664 de UVA
 * Fecha: 2-Mayo-2018
 * Autor: A01701414 Manuel García Huerta
 *
 *------------------------------------------------------*/

#include <iostream>
#include <cstring>
#include <sstream>
#include <algorithm>
using namespace std;

int M[21][201];
int W[21];


int knap(int C, int wt[], int val[], int n)
{
   int i, j;

   for (i = 0; i <= n; i++)
   {
       for (j = 0; j <= C; j++)
       {
           if (i==0 || j==0)
               M[i][j] = 0;
           else if (wt[i-1] <= j)
                 M[i][j] = max(val[i-1] + M[i-1][j-wt[i-1]],  M[i-1][j]);
           else
                 M[i][j] = M[i-1][j];
       }
   }
 
   return M[n][C];
}

int main(){
	int test,n;
    cin >> test;
    string line;
    getline(cin,line);
    while(test--){
        getline(cin,line);
        istringstream istream(line);
        int index=0;
        int total=0;
        while(istream>>W[index]){
            total += W[index];
            index++;
        }
        n=index;

        if(total%2==0){
        	int mid = total/2;
        
        	int res = knap(mid,W,W,n);
        
        	if (mid==res){
        		cout << "YES" << endl;
        	}else{
        		cout << "NO" << endl;
        	}
        }else{
        	cout << "NO" << endl;
        }
    }
}