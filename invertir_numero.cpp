#include <iostream>
#include <stdio.h>
using namespace std;
class programa {
	int num;
	
	public:
		void entrada(void);
		void proceso(void);
		void salida(void);
		programa();
		~programa();
};

programa::programa(){ //Constructor
num=0;
}

programa::~programa(){  //Destructor
		void entrada(void);
		void proceso(void);
		void salida(void);
}

void programa::entrada(){
	cout<<"Difgite el numero"<<endl;
	cin>>num;
}

void programa::proceso(){	
	do{
		cout<<num%10;
		num/=10;
	}while( num != 0);
}

void programa::salida(){
	cout<<"El numero invertido es"<<endl;
}

main(){
	programa exe;
	exe.entrada();
	exe.salida();
	exe.proceso();
}
