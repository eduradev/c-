#include <iostream>     //Inclui a biblioteca que nos permite usar as fun��es COUT e CIN, por exemplo.
#include <locale.h>     //Inclui a biblioteca que nos permite adicionar uma l�ngua, e assim poder escrever palavras acentuadas por exemplo.

using namespace std;    //Cria um espa�o definido para que possamos usar as bibliotecas j� definidas.

int nomedasuavariavelaqui() //� o prot�tipo da fun��o, serve para que n�o hajam erros quando uma fun��o � declarada ap�s o main.

//Classes
class nomedaclass {     //� o nome onde tudo ser� guardado.
    public:             //Fun��es que estiverem aqui poder�o ser acessadas em qualquer lugar do c�digo.
        void nomedafun��oinclass() {

        }
    private:            //Fun��es que estiverem aqui s� podem ser acessadas pela pr�pria classe.
    protected:
}

int main() {            //� a fun��o que o programa vai compilar.
    setlocale(LC_ALL, "Portuguese");    //Adiciona a l�ngua portuguesa.
    nomedaclass obj;    //Cria um objeto vinculado � classe.
    obj.nomedafun��oinclass//Chama a fun��o que est� dentro da classe vinculada ao objeto.
    nomedasuavariavelaqui();        //Declara uma variavel
    cin.get();          //Impede que o programa feche sozinho
    return 0;           //Faz com que qualquer erro de sintaxe ou parecidos sejam informados ao programador.
}

int nomedafun��o() {    //Declara uma fun��o.

}

