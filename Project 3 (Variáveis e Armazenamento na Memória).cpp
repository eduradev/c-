#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int _numerointeiro;//Declara uma vari�vel
	_numerointeiro=4;//D� um valor � vari�vel
	char _letra;
	_letra='b';
	float _numeroquebrado;
	_numeroquebrado=3.15;
	double _numeropreciso;
	_numeropreciso=3.123456789;
	printf("O valor da variavel _numerointeiro e %d",_numerointeiro);//"%d" � utilizado para imprimir variaveis INT
	printf("\n\n");
	system("pause");
	printf("\nO valor da variavel _letra e %c",_letra);//"%c" � utilizado para imprimir variaveis CHAR
	printf("\n\n");
	system("pause");
	printf("\nO valor da variavel _numeroquebrado e %f",_numeroquebrado);//"%F" � utilizado para imprimir variavais FLOAT e DOUBLE
	printf("\n\n");
	system("pause");
	printf("\no valor da variavel _numeropreciso e %f",_numeropreciso);
	printf("\n\n");
	system("pause");
	return 0;
}
