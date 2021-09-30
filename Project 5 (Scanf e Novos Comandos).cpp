#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");//Serve para definir a língua e permitir o uso de acentuação etc.
	printf("Olá Mundo!\n\n");
	system("pause");
	system("cls");//Limpa a tela
	printf("Hello World!\n\n");
	system("pause");
	system("cls");
	int _n=5;
	printf("A variável número usa %d bytes\n\n",sizeof(int));//Serve para recuperar o tamanho das suas variaveis
	char _letra='x';
	printf("A variável letra usa %d bytes\n\n",sizeof(int));
	system("pause");
	system("cls");
	printf("Digite um número: ");
	int _numero;
	scanf("%d",&_numero);
	if (_numero < 5) {
	printf("O número digitado é menor que 5\n\n");
	} else {
		printf("O número digitado é maior ou igual a 5\n\n");
	}
	system("pause");
	return 0;
}
