#include <iostream>
#include <stdio.h>
using namespace std;
class programa {
	int *n,x,a,i,s,d;
	
	public:
		void entrada(void);
		void proceso(void);
		void salida(void);
		programa();
		~programa();
};

programa::programa(){ //Constructor
n = new int[1000];
x=a=i=s=d=0;
}

programa::~programa(){  //Destructor
		delete n;
		void entrada(void);
		void proceso(void);
		void salida(void);
}

void programa::entrada(){
	cout<<"Cuantos numeros desea digitar?"<<endl;
	cin>>a;
	cout<<"Digite los numeros por favor"<<endl;
	for (i=1; i<=a; i++)
	{
		cin>>n[i];
	}
	cout<<"Digite el numero que desea buscar"<<endl;
	cin>>x;
}

void programa::proceso(){
	for (i=1; i<=a; i++)
	{
		s=s+1;
		if (x==n[i])
		{
			cout<<"El numero SI esta y esta en la posicion "<<d<<endl;
	}
		/*else
		{
		cout<<"El numero no se encuentra en la cadena";
	}*/
	}
}


/*void programa::salida(){
	
	if (d==s)
		{	
		cout<<"El numero SI esta y esta en la posicion "<<d<<endl;
	}
	else
		cout<<"El numero no se encuentra en la cadena";
}
*/

main(){
	programa exe;
	exe.entrada();
	exe.proceso();
	//exe.salida();
}
