#include <iostream>     //Inclui a biblioteca que nos permite usar as funções COUT e CIN, por exemplo.
#include <locale.h>     //Inclui a biblioteca que nos permite adicionar uma língua, e assim poder escrever palavras acentuadas por exemplo.

using namespace std;    //Cria um espaço definido para que possamos usar as bibliotecas já definidas.

int nomedasuavariavelaqui() //É o protótipo da função, serve para que não hajam erros quando uma função é declarada após o main.

//Classes
class nomedaclass {     //É o nome onde tudo será guardado.
    public:             //Funções que estiverem aqui poderão ser acessadas em qualquer lugar do código.
        void nomedafunçãoinclass() {

        }
    private:            //Funções que estiverem aqui só podem ser acessadas pela própria classe.
    protected:
}

int main() {            //É a função que o programa vai compilar.
    setlocale(LC_ALL, "Portuguese");    //Adiciona a língua portuguesa.
    nomedaclass obj;    //Cria um objeto vinculado à classe.
    obj.nomedafunçãoinclass//Chama a função que está dentro da classe vinculada ao objeto.
    nomedasuavariavelaqui();        //Declara uma variavel
    cin.get();          //Impede que o programa feche sozinho
    return 0;           //Faz com que qualquer erro de sintaxe ou parecidos sejam informados ao programador.
}

int nomedafunção() {    //Declara uma função.

}

