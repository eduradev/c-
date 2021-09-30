/*notas: main é a função principal, onde tudo será organizado*/
#include <stdio.h> // Inclui comandos da biblioteca "io", que contém as funções "scanf" e "printf"
#include <stdlib.h> //Inclui os comandos da biblioteca "lib" que contém as funções que interagem com o computador no geral

int _olamundo(void) {
	printf("\nOla Mundo!\n\n");
}

int main(void) {//INT(tipo da função inteira)-MAIN(nome da função) 
	printf("Esta e a segunda aula de C++ do Canal WPMasters\n\n");//PRINTF(É o comando usado parada desenhar algo na tela)-/n(inicia uma nova linha)
	system("pause");
	_olamundo();//A função está sendo chamada
	system("PAUSE");//Para que o sistema pause nesse momento da leitura
	return 0;//Para que o compilador nos informe se tiver algo errado.
			
}
