#include <iostream>
#include <stdio.h>
using namespace std;
class programa {
	int a,b;
	public:
		void entrada(void);
		void proceso(void);
		void salida(void);
		programa();
		~programa();
};

programa::programa(){ //Constructor
a=b=0;

}

programa::~programa(){  //Destructor
		void entrada(void);
		void proceso(void);
		void salida(void);
}

void programa::entrada(){
	cout<<"digite la clave inicial"<<endl;
	cin>>a;
}

void programa::proceso(){
	
	cout<<"Digite el numero"<<endl;
	cin>>b;
	while (b!=a){
		if (b>a){
			cout<<"la clave es un numero menor"<<endl;
			cin>>b;
		}
		else {
			cout<<"la clave es un numero mayor"<<endl;
			cin>>b;
		}
	}
}


void programa::salida(){
	cout<<"felicitaciones hallo la clave"<<endl;
	cout<<b;
}


main(){
	programa exe;
	exe.entrada();
	exe.proceso();
	exe.salida();
}
