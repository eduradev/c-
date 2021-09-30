#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int IFeELSE(void){
	setlocale(LC_ALL, "Portuguese");
	int _n1=5,_n2=5,_n3=6,_n4=6;
	if((_n1==_n2) && (_n3==_n4)){	
		printf("Variavel _n1 tem o mesmo valor da _n2\n\nE variavel _n3 tem o mesmo valor de variavel _n4\n\n");
	}	else {
		printf("Variavel _n1 é diferente de _n2, ou, _n3 é diferente de _n4\n\n");
	}
	system("pause");
	system ("cls");	
	return 0;
}

int ELSEIF(void){
	setlocale(LC_ALL, "Portuguese");
	int _media=10;
	if((_media>= 6) &&(_media!=10)) {
		printf("Aluno Aprovado!\n\n");
	}	else if(_media==10){
		printf("Parabéns!Aprovado com nota máxima!\n\n");
	}	else{
		printf("Aluno Reprovado!\n\n");
	}system("pause");
	 system("cls");
	 return 0;	
}

int SWITCH(void){
	
int _valor=6;
	setlocale(LC_ALL, "Portuguese");	
	 switch(_valor) {
		case 5: //Caso o valor da variavel determinada seja 5 acontecerá [...]
			printf("O valor é 5!\n\n");
			break;
			
		case 10://Caso seja 10 acontecerá[...]
			printf("O valor é 10!\n\n");
			break;//"Ao encontrar a afirmação verdadeira, para o switch.
			
		case 12://Caso seja 12 acontecerá [...]
			printf("O valor é 12!\n\n");
			break;
			
		case 16:
			printf("O valor é 16!\n\n");
			break;
		
	default:
		printf("Nenhum dos valores especificados!\n\n");	
		break;
		
		return 0;
	}			
	
}


int main(void){
	setlocale(LC_ALL, "Portuguese");
	/*  "==" Iguala a um valor, "!=" Difere de um valor, ">" Maior que um valor, "<" Menor que um valor
	">=" É maior ou igual a um valor, "<=" É Menor ou igual a um valor, "&&" Adiciona mais um comentário (equivale a E) 
	"||" Represanta uma escolha entre um ou outro (equivale a OU)   */
	IFeELSE();
	ELSEIF();
	SWITCH();
	return 0;	
}
