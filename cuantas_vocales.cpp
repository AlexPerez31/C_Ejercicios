#include <iostream>
#include <stdio.h>
using namespace std;
class programa {
	int s,x;
	char *frase;
	
	public:
		void entrada(void);
		void proceso(void);
		void salida(void);
		programa();
		~programa();
};

programa::programa(){ //Constructor
frase = new char[100];
x=s=0;
}

programa::~programa(){  //Destructor
		delete frase;
		void entrada(void);
		void proceso(void);
		void salida(void);
}

void programa::entrada(){
	cout<<"Introdusca la frase"<<endl;
	gets(frase);
}

void programa::proceso(){
	 for(x = 0;x < 50;x++)
    {
      switch (frase[x])
      {
           case 'a':
                s++;
                break;
           case 'e':
                s++;
                break;
           case 'i':
                s++;
                break;
           case 'o':
                s++;
                break;
           case 'u':
                s++;
                break;            
           default:
                break;
      }
     
    }
}

void programa::salida(){
	cout<<"En la frase hay "<<s<<" vocales"<<endl;
	
}


main(){
	programa exe;
	exe.entrada();
	exe.proceso();
	exe.salida();
}
