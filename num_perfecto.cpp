#include <iostream>
#include <stdio.h>
using namespace std;
class perfecto {
		int num,div,r,i,*f,c;
	public:
		void entrada(void);
		void proceso(void);
		void salida(void);
		perfecto();
		~perfecto();
};

perfecto::perfecto(){ //Constructor
f = new int[1000];
num=r=c=0;
div=i=1;
}

perfecto::~perfecto(){  //Destructor
		delete f;
		void entrada(void);
		void proceso(void);
		void salida(void);
}

void perfecto::entrada(){
	cout<<"Digite el numero por favor"<<endl;
	cin>>num;
}

void perfecto::proceso(){
	while (div<num)
	{
		if(num%div==0)
		{
			r+=div;
			f[i]=div;
			c=i;
			i++;
		}
		div++;
	}
}

void perfecto::salida(){
	if(num==r && num!=0 )
	{
		cout<<"Es un numero perfecto"<<endl;
	}
	else 
	{
		cout<<"No es un numero perfecto"<<endl;
	}
	cout<<"Sus divisores son:"<<endl;
	for (i=1; i<c+1; i++)
	{
		cout<<f[i]<<endl;
	}
}

main(){
	perfecto num;
	num.entrada();
	num.proceso();
	num.salida();
}

