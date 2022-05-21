#include<iostream>  #include<stdio.h>  #include<conio.h>  
using namespace std;    int m,n,i,a,b,c,d;
int suma(int m, int n){
	for (i=m; i<=n; i++)
	{  a=a+i;  }
	cout<<"\nLa suma de todos los numeros es "<< a;
	}
int cuantospares(int m, int n){
	for (i=m; i<=n; i++){
		if (i%2==0){
			b=b+1;
		}}
	cout<<"\nLa cantidad de numeros pares es "<< b;
}
int cuantosimpares(int m, int n){
	for (i=m; i<=n; i++){
		if (i%2==0){	}
		else{
			c=c+1;
		}}
	cout<<"\nLa cantidad de numeros impares es "<< c;
	i=0;
}
int cualespares(int m, int n){
	cout<<"\nLos numeros pares son: ";
	for (i=m; i<=n; i++){
		if (i%2==0){
			cout<<"  "<<i;
		}}
		}
int cualesimpares(int m, int n){
	cout<<"\nLos numeros impares son: ";
	for (i=m; i<=n; i++){
		if (i%2==0)	{}
		else{
				cout<<"  "<<i;
		}	}
}
void imprimir(){
	suma(m,n);
	cuantospares(m, n);
	cuantosimpares(m, n);
	cualespares( m, n);
	cualesimpares(m, n);
}
int main(){
	cout<<"POR FAVOR PRIMERO DIGITE EL NUMERO MENOR \nDigite el primer numero "; cin>>m;
	cout<<"Digite el segundo numero "; cin>>n;
	imprimir(); return 0;
}
