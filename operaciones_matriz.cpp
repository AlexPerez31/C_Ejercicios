#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;

class matriz {
		int m[100][100];
		int a=0,b;
		int j, i;
		int s = 0, f[100], c[100], sp=0, ss=0;
		
	public:
	    void leer(void);
		void suma(void);
		void sumafil(void);
		void sumacol(void);
		void sumaprin(void);
		void sumasecu(void);
		void imprimir(void);
};

void matriz::leer(){
	cout<<"De que tamaño desea que sea la matriz CUADRADA?"<<endl;
	cin>>b;
	cout<<"Por favor digite los numeros de la matriz por filas "<<endl;
	for (int i=0;i<b;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<<"["<<i<<"]["<<j<<"]= ";
            cin>>m[i][j];
        }
    }
}

void matriz::suma(){
    for (int i=0;i<b;i++)
    {
        for(int j=0;j<b;j++)
        {
            s = s+m[i][j];
        }
    } 
}

void matriz::sumafil(){
	for (int i=0;i<b;i++)
    {
    	a=0;
        for(int j=0;j<b;j++)
        {
          a=a+m[i][j];
        }
    f[i]=a;
    } 
}

void matriz::sumacol(){
	for (int j=0;j<b;j++)
    {
    	a=0;
        for(int i=0;i<b;i++)
        {
          a=a+m[i][j];
        }
    c[j]=a;
    } 
}

void matriz::sumaprin(){
	for(int i=0; i<b; i++){
		for (int j=0; j<b; j++){
			if (i==j){
				sp=sp+m[i][j];
			}
		}
	}
}

void matriz::sumasecu(){
	for(int i=0; i<b; i++){
		for (int j=0; j<b; j++){
			if (i+j==b-1){
				ss=ss+m[i][j];
			}
		}
	}
}

void matriz::imprimir(){
	cout<<"La suma de toda la matriz es: "<<endl<<s<<endl;
	cout<<"La suma de las filas son: "<<endl;
	for (int i=0; i<b; i++){
		cout<<"F"<<i+1<<": "<<f[i]<<endl;
	}
	cout<<"La suma de las columnas son: "<<endl;
	for (int j=0; j<b; j++){
		cout<<"C"<<j+1<<": "<<c[j]<<endl;
	}
	cout<<"La suma de la diagonal principal es: "<<endl<<sp<<endl;
	cout<<"La suma de la diagonal secundaria es: "<<endl<<ss<<endl;
}

main(){
	matriz cuadrada;
	cuadrada.leer();
	cuadrada.suma();
	cuadrada.sumafil();
	cuadrada.sumacol();
	cuadrada.sumaprin();
	cuadrada.sumasecu();
	cuadrada.imprimir();
}
