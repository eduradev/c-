#include <iostream>
#include <locale.h>

int _conversao() {
	int tcelsius;
	cout <<"Entre com a temperatura em Celsius para converte-la em Fahrenheit: "<<endl;
	cin >>tcelsius;
	int tfahrenheit = tcelsius *9 / 5 + 32;
	cout <<"\n"
	cout <<"tcelsius" << " Cº" <<endl;
	cout <<"\n"
	cout << tfahrenheit << " ºF" << endl;
}

int main() {
	setlocale(LC_ALL, "Portuguese")
	
	cing.get();
	return 0;
}
