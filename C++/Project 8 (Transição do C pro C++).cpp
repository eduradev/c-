#include <iostream>//Essa biblioteca corresponde a <stdio.h> do C.

using namespace std;//Cria um espa�o, para que se torne poss�vel utilizar "cout" e "cin.get" por exemplo.

int main() {
	setlocale(LC_ALL, "Portuguese");
	int _idade;
	cout <<"Digite sua idade: "<<endl;//coresponde ao printf (imprime)
	cin >> _idade;//corresponde ao scanf (escanea)
	if(_idade < 18) {
		cout <<"Voc� � menor de idade."<<endl;
	}else {
		cout<<"Voc� � maior de idade."<<endl;
	}
	cin.get();//Correspode ao "system("pause").
	return 0;
}
