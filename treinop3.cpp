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
			cout << "você não tem acesso ao andar " << andar << endl;
		}
		else if (nome == "gabriel"){
			cout << "você não tem acesso ao andar " << andar << endl;
		}
		
		else if (nome == "ana"){
			cout << "você não tem acesso ao andar " << andar << endl;		
		}
		
		else if (nome == "igor"){
			cout << "você tem acesso ao andar " << andar << endl;
		}
		else if (nome == "felipe"){
			cout << "você tem acesso ao andar " << andar << endl;
		}
		else if (nome == "maria"){
			cout << "você tem acesso ao andar" << andar << endl;
		}
		 
	}
	else {
		cout << "você " << nome <<  " tem acesso ao andar " << andar << endl;
	}	
}
