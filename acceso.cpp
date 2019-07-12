#include<iostream>

using namespace std;

int main (){
	
	int contrasena, dato = 56 ;
 	
	cout<<"Digite la contrasena:  ";
	cin>>contrasena;
	
	if(contrasena == dato){
		
		cout<<"\nACCESO CORRECTO";
	} else{
		cout<<"\nACCESO DENEGADO";
	}
	return 0;
}
