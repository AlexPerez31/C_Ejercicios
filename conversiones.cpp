#include <iostream>
#include <stdio.h>
using namespace std;
class programa {
	int n,bin,j,k,n_tem,n_temp,n_temp1;
	
	public:
		void entrada(void);
		void binario(void);
		void octal(void);
		void hexadecimal(void);
		programa();
		~programa();
};

programa::programa(){ //Constructor
	n=bin=j=k=n_tem=n_temp=n_temp1=0;
}

programa::~programa(){  //Destructor
		void entrada(void);
		void binario(void);
		void octal(void);
		void hexadecimal(void);
}

void programa::entrada(){
	cout<<"Digite el numero que desea convertir"<<endl;
	cin>>n;
}

void programa::binario(){
	cout<<"Binario = ";
	for(bin=1;bin<=n;bin*=2)
		j=bin;
	for(j=bin;j>=1;j=(bin/=2)){
		for(j=bin;j>=1;j=(bin/=2))
		{
			n_tem=n;
			k=n_temp;
			n_temp=n_tem%j;
			if(n_tem>=j){
			n_temp1=k/j;
			cout<<n_temp1;
			}
		}
	}
}

void programa::octal(){
	cout<<endl<<"Octal = ";
	for(bin=1;bin<=n;bin*=8)
		j=bin;
	for(j=bin;j>=1;j=(bin/=8)){
 
 
		for(j=bin;j>=1;j=(bin/=8))
		{
			n_tem=n;
			k=n_temp;
			n_temp=n_tem%j;
			if(n_tem>=j){
			n_temp1=k/j;
			cout<<n_temp1;
			}
		}		
	}
}

void programa::hexadecimal(){
	cout<<endl<<"Hexadecimal = ";
		for(bin=1;bin<=n;bin*=16)
		j=bin;
	for(j=bin;j>=1;j=(bin/=16))
	{ 
		for(j=bin;j>=1;j=(bin/=16))
		{
			n_tem=n;
			k=n_temp;
			n_temp=n_tem%j;
			if(n_tem>=j)
			{
				n_temp1=k/j;
				if(n_temp1==10)
				{
					n_temp1='A';
					printf("%c",n_temp1);
				}
 				if(n_temp1==11)
				{
					n_temp1='B';
					printf("%c",n_temp1);
				}
				if(n_temp1==12){
					n_temp1='C';
					printf("%c",n_temp1);
				}
				if(n_temp1==13){
					n_temp1='D';
					printf("%c",n_temp1);
				}
				if(n_temp1==14){
					n_temp1='E';
					printf("%c",n_temp1);
				}
				if(n_temp1==15){
					n_temp1='F';
					printf("%c",n_temp1);
				}
				else if(n_temp1>=0 && n_temp1<=9){
 					printf("%d",n_temp1);
					}
			}
 		}
 	}
}
 
main(){
	programa exe;
	exe.entrada();
	exe.binario();
	exe.octal();
	exe.hexadecimal();
}
