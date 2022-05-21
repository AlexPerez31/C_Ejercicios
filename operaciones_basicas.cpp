#include <iostream>
#include <stdio.h>
using namespace std;
class programa {
	int a,b,c,menu;
	
	public:
		void entrada(void);
		void proceso(void);
		void salida(void);
		programa();
		~programa();
};

programa::programa(){ //Constructor
a=b=c=menu=0;
}

programa::~programa(){  //Destructor
		void entrada(void);
		void proceso(void);
		void salida(void);
}

void programa::entrada(){
	cout<<"Difgite el primer numero"<<endl;
	cin>>a;
	cout<<"Digite el segundo numero"<<endl;
	cin>>b;
}

void programa::proceso(){
	cout<<"-Seleccione  Su  Operacion- \n";
	cout<<" ---------------------------\n";
	cout<<"|1. Sumar                   |\n";
	cout<<" ---------------------------\n";
	cout<<"|2. Restar                  |\n";
	cout<<" ---------------------------\n";
	cout<<"|3. Multiplicar             |\n";
	cout<<" ---------------------------\n";
	cout<<"|4. Dividir                 |\n";
	cout<<" ---------------------------\n";
	cin>>menu;
	switch (menu)
	{
		case 1:
			{
				c=a+b;
				break;
			}
		case 2:
			{
				c=a-b;
				break;
			}
		case 3:
			{
				c=a*b;
				break;
		    }
		case 4:
			{
				if (b==0 or a==0)
				{
					cout<<"Inderteminacion";
					c=0;
				}
				else 
				{
					c=a/b;
				}
				break;
			}
	}
}

void programa::salida(){
	cout<<"El resultado es "<<c;
}


main(){
	programa exe;
	exe.entrada();
	exe.proceso();
	exe.salida();
}
