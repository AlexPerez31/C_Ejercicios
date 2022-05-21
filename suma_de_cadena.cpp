#include <iostream>
#include <stdio.h>
using namespace std;
class programa {
	int *f,a,s,i;
	public:
		void entrada(void);
		void proceso(void);
		void salida(void);
		programa();
		~programa();
};

programa::programa(){ //Constructor
a=i=s=0;
}

programa::~programa(){  //Destructor
		delete f;
		void entrada(void);
		void proceso(void);
		void salida(void);
}

void programa::entrada(){
	cout<<"cuantos numeros desea digitar?"<<endl;
	cin>>a;
	f = new int [a];
	cout<<"Digite los numeros"<<endl;
	for (i=1; i<=a; i++){
		cin>>f[i];
	}
}

void programa::proceso(){
	for (i=1; i<=a; i++)
	{
		s=s+f[i];
	}
}


void programa::salida(){
	cout<<"suma"<<endl;
	cout<<s;
}


main(){
	programa exe;
	exe.entrada();
	exe.proceso();
	exe.salida();
}
