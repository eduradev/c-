#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");//Serve para definir a l�ngua e permitir o uso de acentua��o etc.
	printf("Ol� Mundo!\n\n");
	system("pause");
	system("cls");//Limpa a tela
	printf("Hello World!\n\n");
	system("pause");
	system("cls");
	int _n=5;
	printf("A vari�vel n�mero usa %d bytes\n\n",sizeof(int));//Serve para recuperar o tamanho das suas variaveis
	char _letra='x';
	printf("A vari�vel letra usa %d bytes\n\n",sizeof(int));
	system("pause");
	system("cls");
	printf("Digite um n�mero: ");
	int _numero;
	scanf("%d",&_numero);
	if (_numero < 5) {
	printf("O n�mero digitado � menor que 5\n\n");
	} else {
		printf("O n�mero digitado � maior ou igual a 5\n\n");
	}
	system("pause");
	return 0;
}
