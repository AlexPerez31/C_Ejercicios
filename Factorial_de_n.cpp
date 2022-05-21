#include <iostream>
#include <stdio.h>
using namespace std;
class programa {
	int a,b,f;
	public:
		programa();
		~programa();
		void entrada(void);
		void proceso(void);
		void salida(void);
};

programa::programa(){ //Constructor
int a,b,f=0;
}

programa::~programa(){  //Destructor
		void entrada(void);
		void proceso(void);
}

void programa::entrada(){
	cout<<"Digite el numero por favor"<<endl;
	cin>>a;
}

void programa::proceso(){

f=1;
for(b=1; b<=a; b++) {
	f=b*f;
}
}

void programa::salida(){
	cout << "El factorial del numero ingresado es " <<f<<endl;
}

main(){
	programa exe;
	exe.entrada();
	exe.proceso();
	exe.salida();
}
