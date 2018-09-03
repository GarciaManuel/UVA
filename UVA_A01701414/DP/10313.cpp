/*-------------------------------------------------------
 *
 * Actividad de programación: Problema 10313 de UVA
 * Fecha: 2-Mayo-2018
 * Autor: A01701414 Manuel García Huerta
 *
 *------------------------------------------------------*/

#include <iostream>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <cstdio>
#include <sstream>
#include <cmath>
using namespace std;

long long int pay[310][310][310];
int W[3];

void createPosibilities(){

	for (int j=0; j<310; j++)
          for (int k=0; k<=300; k++)
             pay[0][j][k] = 1;

	for(int i=1;i<=300;i++)
        for(int j=1;j<=300;j++){
        	 for (int k=1; k<=300; k++)
        	    if (j<=i) pay[i][j][k] = pay[i-j][j][k-1]+pay[i][j-1][k];
                else pay[i][j][k] = pay[i][j-1][k];
           } 

}

int main(){
	int amount;
	
	createPosibilities();
	 string line;
	while(!cin.eof()){
		int n=0,l1=-1,l2=-1;
		 getline(cin,line);
		 if (line=="")
		 	break;
	        istringstream istream(line);
	        int index=0;
	        int total=0;
	        while(istream>>W[index]){
	        	if(index==0)
	        		n = W[index];
	        	else if(index==1)
	        		l1 = W[index];
	        	else
	        		l2 = W[index];
	            index++;
	        }
	    if (l1>300) 
	    	l1 = 300;
		if (l2>300) 
			l2 = 300;
	    if (l1!=-1 && l2!=-1) 
	    	cout << pay[n][n][l2] - pay[n][n][l1-1] << endl;
	    else if (l1!=-1) 
	    	cout << pay[n][n][l1] << endl;
	    else 
	    	cout << pay[n][n][n] << endl;
	}
}