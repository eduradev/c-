#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int _imediato(void) {
	setlocale(LC_ALL, "Portuguese");
}

int _calculo(void){
	//Soma + || Subtra��o - || Multiplica��o * || Divis�o / || M�dulo % (� o resto da divis�o) ||
	printf("5+5x2=?\n\n");//C�lculo com parenteses
	system("pause");
	int _calculo=(5+5)*2;
	printf("\n%d\n\n",_calculo);
	return 0;
};

int _numero(void){//fun��o de incremento e decremento PS:decremento � s� trocar o "+" por "-".
	int _numero = 10;
	printf("10\n\n");
	_numero++;
	system("pause");
	printf("\n%d\n\n",_numero);
	system("pause");
	return 0;
}

int meu_main(void) {//ser� usada para deixar o verdadeiro MAIN mais organizado.
	_calculo();
	_numero();
	return 0;
}

int main(void) {
	meu_main();
	return 0;
}
