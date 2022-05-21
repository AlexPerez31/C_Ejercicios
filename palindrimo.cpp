#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class programa {
	int i,j, p=1;
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
i=j=0,p=1;
}

programa::~programa(){  //Destructor
		delete frase;
		void entrada(void);
		void proceso(void);
		void salida(void);
}

void programa::entrada(){
	cout<<"Introdusca la frase"<<endl;
	fflush(stdout);
	gets(frase);
}

void programa::proceso(){
	 j=strlen(frase)-1;
    for(i=0; i<strlen(frase)/2; i++, j--) {
        if (*(frase+i)!=*(frase+j)) {
            p = 0;
            break;
        }
    }
}

void programa::salida(){
	if (p)
	{
        cout<<"\nEs un palindrimo.\n";
    }
    else
    {
        cout<<"\nNo es un palindrimo.\n";
	}
}


main(){
	programa exe;
	exe.entrada();
	exe.proceso();
	exe.salida();
}
