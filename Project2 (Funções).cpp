/*notas: main � a fun��o principal, onde tudo ser� organizado*/
#include <stdio.h> // Inclui comandos da biblioteca "io", que cont�m as fun��es "scanf" e "printf"
#include <stdlib.h> //Inclui os comandos da biblioteca "lib" que cont�m as fun��es que interagem com o computador no geral

int _olamundo(void) {
	printf("\nOla Mundo!\n\n");
}

int main(void) {//INT(tipo da fun��o inteira)-MAIN(nome da fun��o) 
	printf("Esta e a segunda aula de C++ do Canal WPMasters\n\n");//PRINTF(� o comando usado parada desenhar algo na tela)-/n(inicia uma nova linha)
	system("pause");
	_olamundo();//A fun��o est� sendo chamada
	system("PAUSE");//Para que o sistema pause nesse momento da leitura
	return 0;//Para que o compilador nos informe se tiver algo errado.
			
}
