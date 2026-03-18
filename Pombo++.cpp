#include <iostream>
using namespace std;
int main(){
	string user;
	string pass;
	int menu;
	int	operadores;
	int saldo = 10;
	double resultado;
cout << "-----" << endl;	
cout << "LOGIN" << endl;
cout << "-----" << endl;	
	
cout << "Digite seu usuario" << endl;
cin >> user;


cout << "Digite sua senha" << endl;
cin >> pass;

if(user == "joao","JOAO"){
	cout << "OMG YES JOAO BEM VINDO" << endl;
	saldo = 10000;
}

cout << "Bem vindo " << user << endl;
cout << "Seu saldo e " <<  "R$" << saldo << endl;

cout << "1 - Depositar " << endl;
cout << "2 - Sacar " << endl;
cin >> menu;
switch(menu)
{
	
	case 1:
		cout << "Digite a quantia " << endl;
		cin >> operadores;
		saldo = saldo - operadores;
		cout << "Seu saldo agora e de: " << saldo << endl;
	break;
	
	
	case 2:
				cout << "Digite a quantia " << endl;
		cin >> operadores;
		saldo = saldo + operadores;
		cout << "Seu saldo agora e de: " << saldo << endl;
				
				
	break;
}
    return 0;
}
