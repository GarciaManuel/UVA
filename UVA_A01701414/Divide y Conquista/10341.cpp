/*-------------------------------------------------------
 *
 * Actividad de programación: Problema 10341 de UVA
 * Fecha: 2-Mayo-2018
 * Autor: A01701414 Manuel García Huerta
 *
 *------------------------------------------------------*/


#include <cstdio>
#include <cmath>

using namespace std;
int p,q,r,s,t,u;
 

double evaluation(double value){
    return p*exp(-value)+q*sin(value)+r*cos(value)+s*tan(value)+t*(value)*(value)+u;
}
double biseccion(){
    double point_x,point_y,mid_point,eval_point;
    point_x=0.0; 
    point_y=1.0;
        
        for(int i=0;i<50;i++){
            mid_point=(point_x+point_y)/2;
            
            eval_point=evaluation(mid_point);
            
            if(fabs(eval_point)<1e-9)
                return point_x;

            if(eval_point>0) 
                point_x=mid_point;
            else 
                point_y=mid_point;
        }
    return -1;
}
int main(){
double answer;
    while(scanf("%d %d %d %d %d %d",&p,&q,&r,&s,&t,&u)==6){
        answer = biseccion();
        if(answer==-1){
            printf("No solution\n");
        }else{
            printf("%.4f\n",answer);
        }
        
    }
    
    return 0;
}