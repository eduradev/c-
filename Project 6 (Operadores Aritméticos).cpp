#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int _calculo(void){
	//Soma + || Subtra��o - || Multiplica��o * || Divis�o / || M�dulo % (� o resto da divis�o) ||
	printf("5+8=?\n\n");
	system("pause");
	int _valor=5+8;
	printf("\n%d\n\n",_valor);
	system("pause");
	system("cls");
		printf("5-8\n\n");
		system("pause");
		_valor=5-8;
		printf("\n%d\n\n",_valor);
		system("pause");
		system("cls");
			printf("5x8\n\n");
			system("pause");
			_valor=5*8;
			printf("\n%d\n\n",_valor);
			system("pause");
			system("cls");
				printf("20/4\n\n");
				system("pause");
				_valor=20/4;
				printf("\nO resultado da divis�o � %d\n\n",_valor);
				system("pause");
				system("cls");
					printf("Qual � o m�dulo de 22/4?\n\n");
					system("pause");
					_valor=22%4;
					printf("\n%d\n\n");
					system("pause");
	return 0;
	
};

int meu_main(void) {//ser� usada para deixar o verdadeiro MAIN mais organizado.
	setlocale(LC_ALL, "Portuguese");
	_calculo();
	return 0;
}

int main(void) {
	meu_main();
	return 0;
}
