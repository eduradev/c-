#include <iostream>
#include <locale.h>

using namespace std;

//Prot�tipos:
void _msg();
int _soma(int x, int y);

int main() {
	setlocale(LC_ALL, "Portuguese");
	_msg();
	cin.get();
	cout <<"O valor � "<<_soma(15,17)<< endl;
	cin.get();
	return 0;
}

void _msg() {
	cout <<"Pressione Enter para saber o valor:"<< endl;
	cout <<"\n";
}

int _soma(int x, int y) {//Dentro dos parenteses est�o os parametros, que ser�o declados no momento da execu��o
	int expressao = x + y;
	return expressao;
}
