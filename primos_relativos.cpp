#include<iostream>
using namespace std;
class primos{
	private:
		int num1,num2,divisores1[],cont1,divisores2[],cont2,pos1,pos2;
	public:
		primos();
		~primos();
		void entrada(void);
		void contador1(void);
		void proceso1(void);
		void contador2(void);
		void proceso2(void);
		void proceso3(void);
		void salida1(void);
		void salida2(void);

};	
primos::primos(){
	cout<<"CONSTRUYENDO"<<endl;
	pos1=0;	pos2=0;
}
primos::~primos(){

}
void primos::entrada(void){
	cout<<"Digite los dos numeros que desea evaluar"<<endl;
	cout<<"Digito 1: ";
	cin>>num1;
	cout<<"Digito 2: ";
	cin>>num2;
}
void primos::contador1(void){
	for (int divis1=1;divis1<=num1;divis1++){
        if (num1%divis1== 0){
            cont1=cont1+1;
        }
    }
    divisores1[cont1];
}
void primos::proceso1(void){
	for (int divis1=1;divis1<=num1;divis1++){
        if (num1%divis1== 0){
            divisores1[pos1]=divis1;
            pos1=pos1+1;
        }
    }
}
void primos::contador2(void){
	for (int divis2=1;divis2<=num2;divis2++){
        if (num2%divis2== 0){
            cont2=cont2+1;
        }
    }
    divisores2[cont2];
}
void primos::proceso2(void){
	for (int divis2=1;divis2<=num2;divis2++){
        if (num2%divis2== 0){
            divisores1[pos1]=divis2;
            pos1=pos1+1;
        }
    }
}
void primos::salida1(void){
cout<<"Los divisores del numero "<<num1<<" son: "<<endl;
    for(int i=0;i<cont1;i++){
            cout<<divisores1[i]<<" ";
        }
    cout<<endl;
}
void primos::salida2(void){
cout<<"Los divisores del numero "<<num2<<" son: "<<endl;
    for(int i=0;i<cont2;i++){
            cout<<divisores2[i]<<" ";
        }
    cout<<endl;
}
int main (){
	primos e;
	e.entrada();
	e.contador1();
	e.proceso1();
	e.contador2();
	e.proceso2();
	e.salida1();
	e.salida2();
	return 0;
}
