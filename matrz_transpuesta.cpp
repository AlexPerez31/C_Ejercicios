#include <iostream>
#include <stdio.h>
using namespace std;
class programa {
	int f,c,m[100][100];
	public:
		void entrada(void);
		void proceso(void);
		void salida(void);
		programa();
		~programa();
};

programa::programa(){ //Constructor


}

programa::~programa(){  //Destructor
		void entrada(void);
		void proceso(void);
		void salida(void);
}

void programa::entrada(){
	cout<<"de cuantas filas es la matriz"<<endl;
	cin>>f;
	cout<<"de cuantas columnas es la matriz"<<endl;
	cin>>c;
}

void programa::proceso(){
	cout<<"Por favor digite los numeros de la matriz por filas "<<endl;
	for (int i=0;i<c;i++)
    {
        for(int j=0;j<f;j++)
        {
            cout<<"  ["<<i<<"]["<<j<<"]= ";
            cin>>m[i][j];
        }
        cout<<endl;
    }
}



void programa::salida(){
cout<<"La transpuesta es: "<<endl;
	for (int j=0;j<c;j++)
    {
        for(int i=0;i<f;i++)
        {
            cout<<"    ["<<i<<"]["<<j<<"]= "<<m[i][j];
        }
        cout<<endl;
    }
}



main(){
	programa exe;
	exe.entrada();
	exe.proceso();
	exe.salida();
}
