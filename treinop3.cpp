#include <iostream>

using namespace std;

main() {
	setlocale( LC_ALL, "portuguese");
	string nome;
	int andar;	
	
	cout << "Informe seu nome:";
	cin>> nome;
	
	cout <<"Qual andar deseja acessar?";
	cin>> andar;
	
	if (andar == 2 || andar == 4 || andar == 6 || andar == 8 || andar == 10){
		if (nome == "marcelo"){
			cout << "voc� n�o tem acesso ao andar " << andar << endl;
		}
		else if (nome == "gabriel"){
			cout << "voc� n�o tem acesso ao andar " << andar << endl;
		}
		
		else if (nome == "ana"){
			cout << "voc� n�o tem acesso ao andar " << andar << endl;		
		}
		
		else if (nome == "igor"){
			cout << "voc� tem acesso ao andar " << andar << endl;
		}
		else if (nome == "felipe"){
			cout << "voc� tem acesso ao andar " << andar << endl;
		}
		else if (nome == "maria"){
			cout << "voc� tem acesso ao andar" << andar << endl;
		}
		 
	}
	else {
		cout << "voc� " << nome <<  " tem acesso ao andar " << andar << endl;
	}	
}
