#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class programa {
	int *arreglo,*arreglosuper,aux,pmen,pmen1;
	
	public:
		void entrada(void);
		void proceso(void);
		void salida(void);
		programa();
		~programa();
};

programa::programa(){ //Constructor
	arreglo = new int[5];
	arreglosuper = new int[1];
	pmen=pmen1=aux=0;
}

programa::~programa(){  //Destructor
	delete arreglo, arreglosuper;
	void entrada(void);
	void proceso(void);
	void salida(void);
}
 
void programa::entrada(){
 cout<<"             ||    BALOTO    ||"<<endl;
    srand(time(0));
}

void programa::proceso(){ 
    for(int i = 0; i < 5; i++){
        aux = (1 + rand() % 43);
 
        int aux2 = 0;
 
        while(aux2 < i){
 
            if(aux != arreglo[aux2])
                aux2++;
 
            else{
                    aux = (1 + rand() % 43);
                    aux2 = 0;
                }
        }
        arreglo[i] = aux;
        cout << arreglo[i] << "\t";
    }
        for(int i = 0; i < 1; i++){
        aux = (1 + rand() % 16);
 
        int aux2 = 0;
 
        while(aux2 < i){
 
            if(aux != arreglosuper[aux2])
                aux2++;
 
            else{
                    aux = (1 + rand() % 16);
                    aux2 = 0;
                }
        }
        arreglosuper[i] = aux;
        cout << arreglosuper[i] << "\t";
    }
    cout<<endl;
}

void programa::salida(){
    cout<<"Su Numero: "<<endl;
    for(int i = 0; i < 5; i++){
		pmen=i;
		for(int j=i+1; j<5; j++){
			if(arreglo[j]<arreglo[pmen])
				pmen=j;
		}
		aux=arreglo[i];
		arreglo[i]=arreglo[pmen];
		arreglo[pmen]=aux;
		cout<<arreglo[i]<<"\t";
	}
	for(int i = 0; i < 1; i++){
		pmen1=i;
		for(int j=i+1; j<1; j++){
			if(arreglosuper[j]<arreglosuper[pmen1])
				pmen1=j;
		}
		aux=arreglosuper[i];
		arreglosuper[i]=arreglosuper[pmen1];
		arreglosuper[pmen1]=aux;
		cout<<arreglosuper[i]<<"\t";
	}
}
 
main(){
	programa exe;
	exe.entrada();
	exe.proceso();
	exe.salida();
}

