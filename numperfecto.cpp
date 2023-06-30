#include <iostream>
using namespace std;
bool NumeroPerfecto(int np);
 int main ()
 {
 	int n;
 	cout<<"ingrese un numero";
 	cin>>n;
 	bool b=NumeroPerfecto(n);
 	if(b==true){
 		cout<<n<<" Es un numero perfecto!";
	 }
	 else{
	 	cout<<n<<"_No es un numero perfecto";
	 }
 }
 bool NumeroPerfecto(int np){
 	int suma=0;
 	bool flag=false;
 	for(int i=1;i<np;i++){
 		if(np%i==0){
 			suma+=i;
		 }
	 }
	 if(suma==np){
	 	flag=true;
	 }
	 return flag;
 }