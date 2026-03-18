#include <iostream>
#include <direct.h>
#include <cstdlib>
using namespace std;
int main(){
	int menu;
	int opcao;
	string dir;
	do {
	cout << "MENU POMBO\n" << endl;
	cout << "Digite um numero.\n" << endl;
	system("color 3");
	cout << "1 - dir" << endl;
	cout << "2 - whoami" << endl;
	cout << "3 - ipconfig" << endl;
	cout << "0 - sair" << endl;
	
	
	
	cin >> opcao;
	
	switch(opcao){
		case 1: {  
		system("cd C: //");
		system("cls");
    cout << "digite o caminho" << endl;
    cin >> dir;
    string comando = "dir " + dir;
    system(comando.c_str());
    system("pause");
    system("cls");
    break;
}
		case 2:
			system("whoami");
			system("pause");
			system("cls");
			break;
			
					case 3:
			system("ipconfig");
			system("pause");
			system("cls");
			break;
		
				case 0:
                cout << "Saindo..." << endl;
                break;
                
                
                default:
                	cout << "opcao invalida!" << endl;
            system("pause");                       
			system("cls");
                            
	}
	
	} while (opcao != 0);
    return 0;   
}
