#include <iostream>//Essa biblioteca corresponde a <stdio.h> do C.

using namespace std;//Cria um espaço, para que se torne possível utilizar "cout" e "cin.get" por exemplo.

int main() {
	setlocale(LC_ALL, "Portuguese");
	int _idade;
	cout <<"Digite sua idade: "<<endl;//coresponde ao printf (imprime)
	cin >> _idade;//corresponde ao scanf (escanea)
	if(_idade < 18) {
		cout <<"Você é menor de idade."<<endl;
	}else {
		cout<<"Você é maior de idade."<<endl;
	}
	cin.get();//Correspode ao "system("pause").
	return 0;
}
