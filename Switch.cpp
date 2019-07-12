#include<iostream>


using namespace std;

int main (){
	
	int numero;
	
	cout<<"Diga numero entre 1-5";
	cin>>numero;
	
	switch(numero){
		case 1: cout<<"Es 1";break;
		case 2: cout<<"Es 2";break;
		case 3: cout<<"Es 3";break;
		case 4: cout<<"Es 4";break;
		case 5: cout<<"Es 5";break;
		default: cout<< "ERROR POR LOCA";break;
		
	}
	
	
	
	
	
	return 0;
}
