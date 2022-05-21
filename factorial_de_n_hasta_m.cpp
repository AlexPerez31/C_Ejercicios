#include <iostream>
#include <stdio.h>
using namespace std;
class programa {
	int *f,a,b,p,c,i,j;
	public:
		void entrada(void);
		void proceso(void);
		void salida(void);
		programa();
		~programa();
};

programa::programa(){ //Constructor
//f = new int[1000];
a=b=c=p=i=j=0;
}

programa::~programa(){  //Destructor
		delete f;
		void entrada(void);
		void proceso(void);
		void salida(void);
}

void programa::entrada(){
	cout<<"Difgite el primer numero"<<endl;
	cin>>a;
	cout<<"Digite el segundo numero"<<endl;
	cin>>c;
	int aux;
	if (a>c)
	{
		aux=a;
		a=c;
		c=aux;
	}
	p=c-a+1;
	f=new int [p];
	if (f==NULL)
	{
		cout<<"error";
	}
}

void programa::proceso(){
	for (i=a; i<=c; i++)
	{
		f[i]=1;
		for(b=1; b<=i; b++) {
			f[i]=b*f[i];
		}
	}
}

void programa::salida(){
	for (i=a; i<=c; i++)
	{
		j=j+1;
		cout<<"El factorial de "<<i<<" es "<<f[i]<<endl;
	}
}


main(){
	programa exe;
	exe.entrada();
	exe.proceso();
	exe.salida();
}
