#include <iostream>
using namespace std;
class ordenNumeros{
	private:
		int i,j,aux,tam;
		int *cadena;
	public:
		ordenNumeros();
		~ordenNumeros();
		void entrada();
		void proceso();
		void salida();
};
ordenNumeros::ordenNumeros(){ //constrcutor
	i=j=tam=0;
	cout<<"por favor digite el tamaño de su cadena\n";
	cin>>tam;
	cadena=new int[tam];
	if(cadena==NULL){
		cout<<"error en la asignacion dinamica de memoria\n";
	}
}
ordenNumeros::~ordenNumeros(){ //destrcutor
	delete cadena;
}
void ordenNumeros::entrada(){
	cout<<"digite los numeros"<<endl;
	for(i=0;i<tam;i++){
		cin>>cadena[i];
	}
}
void ordenNumeros::proceso(){
	
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++){
			if(cadena[j]>cadena[j+1]){
				aux=cadena[j];
				cadena[j]=cadena[j+1];
				cadena[j+1]=aux;	
			}
		}
	}
}
void ordenNumeros::salida(){
	cout<<"orden ascendente de la cadena\n";
	for(i=0;i<tam;i++){
		cout<<cadena[i]<<",";
	}
	cout<<"\n";
	cout<<"orden descendente\n";
	for(i=tam-1;i>=0;i--){
		cout<<cadena[i]<<",";
	}
	cout<<"\n";
}
int main(){
	ordenNumeros ordenamiento;
	ordenamiento.entrada();
	ordenamiento.proceso();
	ordenamiento.salida();
	
	return 0;
}
