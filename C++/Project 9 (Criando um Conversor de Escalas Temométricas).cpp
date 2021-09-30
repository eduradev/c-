#include <iostream>
#include <locale.h>

using namespace std;

int _conversao() {
	float tcelsius;
	cout <<"Entre com a temperatura em Celsius para converte-la em Fahrenheit: ";
	cin >>tcelsius;
	float tfahrenheit = tcelsius *9 / 5 + 32;
	cout <<"\n";
	cout << tcelsius << "Cº equivale a:" <<endl;
	cout <<"\n";
	cout << tfahrenheit <<"ºF" << endl;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	_conversao();
	cin.get();
	return 0;
}
