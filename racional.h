void sumafraccion{
	int a,b,c,d=0;
	int suma=0;
	suma=(((a*d)+(b*c))/(b*d));
}

void restafraccion{
	int e,f,g,h=0;
	int resta=0;
	suma=(((e*h)-(f*g))/(f*h));
}

void multifraccion{
	int w,x,y,z=0;
	int multi=0;
	multi=((w*y)/(x*z));
}

void divifraccion{
int r,s,t,u=0;
int multi=0;
multi=((r*u)/(s*t));
}

void elevafraccion{
	int m,n=0;
	int elevar=0;
	elevar=((m*m)/(n*n));
}


};

#include<iostream>
#include<stdio.h>
#include "RacionalTarea.h"
using namespace std;
int main(){
	int 1,2,3,4,o;
	racional tarea(2,3,4,5);
		do{
		cout<<"escriba el numero de opcion de la operacion que desea efectuar"<<endl;
		cout<<""<<endl;
		
		cout<<"1. suma"<<endl;
		cout<<"2. resta"<<endl;
		cout<<"3. multiplicacion"<<endl;
		cout<<"4. division"<<endl;
		cout<<"5. elevar"<<endl;
		cin>>o;
		
		switch(o){
		case 1:cout<<"suma"<<endl;
		tarea.sumafraccion()<<endl;
		break;
		
		case 2:cout<<"resta"<<endl;
		tarea.restafraccion()<<endl;
		break;
		
		case 3:cout<<"multiplicacion"<<endl;
		tarea.multifaccion()<<endl;
		break;
		
		case 4:cout<<"division"<<endl;
		tarea.divifraccion()<<endl;
		break;
		}
		
		case 5:cout<<"elevar"<<endl;
		tarea.elevafraccion()<<endl;
		break;
		
	}while(a!=5)
}
	
			   UML
 __________________________________
|            racional              |
|__________________________________|
|-int numerador;                   |
|-int denominador;                 |
|	                               |
|__________________________________|
|+racional()                       |
|+racional(int,int)	               |
|+void setNum(int)                 |
|+void setDen(int)                 |
|+int getNum()                     |
|+int getDen()                     |
|+int MCD()                        |
|+int simplificar()                |
|+int sumafraccion(racional obj)   |
|+int restafraccion(racional obj)  |
|+int multifraccion(racional obj)  |
|+int divifraccion(racional obj)   |
|+int elevafraccion(racional obj)  |
|+string equivalente(racional obj) |
|bool verificacion(racional obj)   |
|                                  |
|__________________________________|
