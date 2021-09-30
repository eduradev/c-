#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <string>
using namespace std;

class telas {
    public:
        void tela1() {

            string _next;
            _next=="a";
            char _nome[40];
            cout <<" Criado com Code::Blocks v13.12"<<endl;
            cout <<"\n 08/07/2015 ->"<<endl;
            cout <<"\n Digite seu nome e pressione enter: ";
            cin.getline(_nome,40);
            cout <<" \n"<<endl;
            cout <<" Seja bem vindo(a) "<<_nome<<"!"<<endl;
            cin.ignore();
            cout <<" V� pressionando enter para se aprofundar mais:"<<endl;
            cin.get();
            cout <<" Meu nome � Eduardo Rafael Castro C�rdova"<<endl;
            cin.get();
            cout <<" E este � o meu primeiro estudo da programa��o"<<endl;
            cin.get();
            cout <<" Nesta primeira tela, coloquei em forma de texto, as informa��es"<<endl;
            cout <<" sobre l�gica de programa��o consideradas importantes que eu"<<endl;
            cout <<" aprendi com ajuda de tutoriais e com apoio da web no geral."<<endl;
            cin.get();
            cout <<" >Algoritmo:";
            cin.get();
            cout <<" � o nome dado a um conjunto de instru��es bem definidas."<<endl;
            cout <<" Na programa��o, algoritmo � a combina��o de vari�veis e"<<endl;
            cout <<" comandos cujo objetivo � criar um padr�o de comportamento."<<endl;
            cin.get();
            cout <<" >Vari�veis:";
            cin.get();
            cout <<" � a entidade respons�vel por armazenar informa��es vari�veis."<<endl;
            cout <<" Existem alguns tipos b�sicos de vari�veis:"<<endl;
            cout <<" CHAR: Armazenam caracteres como \"�\", \"z\" e \"1\"."<<endl;
            cout <<" INT: Armazenam valores inteiros como \"3\", \"-2\" e \"1999\"."<<endl;
            cout <<" FLOAT: Armazenam valores reais como \"-1.5\", \"2.1\" e \"3.478\"."<<endl;
            cout <<" BOOL: Armazenam valores l�gicos: \"1(true)\" e \"0(false)\"."<<endl;
            cin.get();
            cout <<" >Comandos(Fun��es):";
            cin.get();
            cout <<" S�o os processos em que as vari�veis s�o lidas e utilizadas,"<<endl;
            cout <<" para que ent�o seja composto um algoritmo."<<endl;
            cout <<" Fun��es podem ser vazias, ou podem ter argumentos."<<endl;
            cout <<" A difen�a � que fun��es vazias n�o retornam valores,"<<endl;
            cout <<" e fun��es com argumentos retornam, o que significa que"<<endl;
            cout <<" fun��es com argumentos podem ser utilizadas como vari�veis"<<endl;
            cout <<" ao seu t�rmino, mas fun��es vazias n�o."<<endl;
            cin.get();
            cout <<" Fim da P�gina: "<<endl;
            cout <<" Se deseja ir para a pr�xima p�gina, digite NEXT e pressione enter."<<endl;
            cout <<" Se deseja sair, digite EXIT e aperte enter."<<endl;
            cin >>_next;
            while(_next!="next") {
                if (_next=="exit"){
                    exit(0);
                }
                else {
                cout <<" Fim da P�gina: "<<endl;
                cout <<" Se deseja sair, digite EXIT e pressione enter."<<endl;
                cout <<" Se deseja ir para a pr�xima p�gina, digite NEXT e aperte enter."<<endl;
                cin >>_next;
                }
            }
            tela2();
        }
        void tela2() {

            string _next;
            _next=="a";
            system("cls");
            cout <<"Agora falarei sobre a sintaxe e os bons costumes de programa��o da linguagem C++";
            cin.get();
            cin.ignore();
            cout <<" >Sintaxe:";
            cin.get();
            cout <<" � a forma como as palavras s�o dispostas para que haja entendimento."<<endl;
            cout <<" Cada linguagem tem sua sintaxe."<<endl;
            cin.get();
            cout <<" Exemplo de sintaxe:"<<endl;
            cin.get();
            cout <<" || [(oque),(onde),(quando)] ||"<<endl;
            cout <<" ||                          ||"<<endl;
            cout <<" || [(comi),(aqui),(hoje)]   ||"<<endl;
            cout <<" || [(bebi),(l�),(ontem)]    ||"<<endl;
            cin.get();
            cout <<" Como pode ver, as palavras foram ordenadas de forma na qual"<<endl;
            cout <<" o computador possa facilmente entender O QUE aconteceu,"<<endl;
            cout <<" ONDE, e QUANDO, sem nem mesmo ter que ficar repetindo essas"<<endl;
            cout <<" palavras.Numa situa��o real, essas informa��es poderiam ser"<<endl;
            cout <<" armazenadas numa vari�vel, e depois utilizadas sempre que"<<endl;
            cout <<" fossem requisitadas, mas este � s� um exemplo."<<endl;
            cin.get();
            cout <<" >Bons Costumes:";
            cin.get();
            cout <<" S�o chamadas de bons costumes da programa��o, aquelas regras"<<endl;
            cout <<" n�o obrigat�rias, mas que s�o importantes para deixar seu"<<endl;
            cout <<" c�digo mais organizado e at� menos propic�o a ter erros."<<endl;
            cin.get();
            cout <<" Exemplos de alguns bons costumes da programa��o:"<<endl;
            cin.get();
            cout <<" - Indenta��o: � o recuo de um texto em rela��o � sua margem."<<endl;
            cout <<" Na maioria das linguagens de programa��o ela � usada apenas"<<endl;
            cout <<" com o objetivo de aumentar a legibilidade do c�digo.Por�m,"<<endl;
            cout <<" em algumas outras linguagens, a indenta��o � obrigat�ria para"<<endl;
            cout <<" definir a hierarquia dos blocos de c�digo."<<endl;
            cin.get();
            cout <<" - return 0: Corresponde � \"EXIT_SUCESS\".Serve para que o"<<endl;
            cout <<" compilador avise caso exista algum erro no c�digo."<<endl;
            cout <<" Compiladores mais recentes fazem isso automaticamente, mas"<<endl;
            cout <<" os programadores continuam incluindo isto no c�digo para"<<endl;
            cout <<" deixa-lo mais leg�vel."<<endl;
            cin.get();
            cout <<" Fim da P�gina: "<<endl;
            cout <<" Se deseja ir para a pr�xima p�gina, digite NEXT e pressione enter."<<endl;
            cout <<" Se deseja sair, digite EXIT e aperte enter."<<endl;
            cin >>_next;
            while(_next!="next") {
                if (_next=="exit"){
                    exit(0);
                }
                else {
                cout <<" Fim da P�gina: "<<endl;
                cout <<" Se deseja sair, digite EXIT e pressione enter."<<endl;
                cout <<" Se deseja ir para a pr�xima p�gina, digite NEXT e aperte enter."<<endl;
                cin >>_next;
                }
            }
            tela3();
        }
        void tela3() {

            string _next;
            _next=="a";
            system("cls");
            cout <<" Na terceira tela, coloquei informa��es referentes � programa��o em C++"<<endl;
            cin.get();
            cin.ignore();
            cout <<" >Criar fun��es:"<<endl;
            cin.get();
            cout <<" S�o em fun��es onde todo seu c�digo ser� escrito."<<endl;
            cout <<" Para criar fun��es, basta fazer como no exemplo:"<<endl;
            cin.get();
            cout <<" | int _fun��o(par1,par2); |"<<endl;
            cin.get();
            cout <<" //Primeiro, � necess�rio definir o tipo da fun��o, que pode ser:"<<endl;
            cout <<" void(vazia), char, int, float ou bool(mesmos tipos das vari�veis)."<<endl;
            cout <<" depois, deve-se criar um nome para a fun��o, escolhi \"_fun��o\"."<<endl;
            cout <<" (Vale ressaltar que o nome da fun��o N�O pode COME�AR com n�meros.)"<<endl;
            cout <<" e por �ltimo, opcionalmente, definir os par�metros da fun��o dentro"<<endl;
            cout <<" dos par�nteses, falaremos mais sobre par�metros em outra tela."<<endl;
            cin.get();
            cout <<" >Fun��o main:"<<endl;
            cin.get();
            cout <<" main significa principal, ser� a fun��o \"main\" que ser� compilada,"<<endl;
            cout <<" ou seja, se voc� criar uma fun��o com outro nome, e depois compilar"<<endl;
            cout <<" seu c�digo, sua fun��o ser� ignorada, a n�o ser que ela seja"<<endl;
            cout <<" chamada dentro da fun��o main"<<endl;
            cout <<" Para chamar uma fun��o j� criada, � s� escrever seu nome:"<<endl;
            cin.get();
            cout <<" | nomedafun��o(); |"<<endl;
            cin.get();
            cout <<"\n >Importar Bibliotecas:";
            cin.get();
            cout <<" Bibliotecas armazenam fun��es j� predefinidas, basta importar a biblioteca"<<endl;
            cout <<" desejada, e poder� utilizar todas as fun��es nela contidas, o que"<<endl;
            cout <<" economiza um bom tempo ao programador."<<endl;
            cin.get();
            cout <<" Exemplo de importa��o da biblioteca \"iostream\":"<<endl;
            cin.get();
            cout <<" | #include <iostream>                                        |"<<endl;
            cout <<" | //Essa � a sintaxe para importa��o de bibliotecas          |"<<endl;
            cout <<" | using namespace std;                                       |"<<endl;
            cout <<" | //Define que ser�o usadas as fun��es padr�es da biblioteca |"<<endl;
            cin.get();
            cout <<" Obs: \"//\" significa que haver� uma explica��o do que o antecedeu."<<endl;
            cin.get();
            cout <<" A biblioteca \"iostream\" cont�m fun��es de Input e Output,"<<endl;
            cout <<" em portugu�s, entrada e sa�da.Servem para que seja poss�vel"<<endl;
            cout <<" imprimir n�meros e caracteres na tela, e tamb�m le-los"<<endl;
            cout <<" quando digitados e armazena-los em vari�veis."<<endl;
            cin.get();
            cout <<" No inicio deste execut�vel, foi solicitado um nome e depois foi"<<endl;
            cout <<" impresso na tela uma mensagem de \"Bem vindo\", isso gra�as"<<endl;
            cout <<" � biblioteca <iostream>, que cont�m os comandos \"cin\" e \"cout\"."<<endl;
            cout <<" O cin leu o nome digitado e o armazenou em uma vari�vel,"<<endl;
            cout <<" j� o cout imprimiu o conte�do da vari�vel na tela:"<<endl;
            cin.get();
            cout <<" | #include <iostream>                                                      |"<<endl;
            cout <<" | using namespace std;                                                     |"<<endl;
            cout <<" | void main() { //Cria e abre a fun��o \"main\".                             |"<<endl;
            cout <<" | char _variavel[15];                                                      |"<<endl;
            cout <<" | //Cria a vari�vel do tipo char com 15 espa�os para caracteres            |"<<endl;
            cout <<" | cin >>_variavel>>endl;                                                   |"<<endl;
            cout <<" | //Usa a fun��o \"cin\" para ler o que for digitado e armazenar na vari�vel.|"<<endl;
            cout <<" | cout <<\"Seja bem vindo \"<<_variavel<<\"!\"<<endl;                          |"<<endl;
            cout <<" | //Usa a fun��o \"cout\" para imprimir uma mensagem com a vari�vel de antes.|"<<endl;
            cout <<" | } //Fecha a vari�vel \"main\".                                             |"<<endl;
            cin.get();
            cout <<" Fim da P�gina: "<<endl;
            cout <<" Se deseja ir para a pr�xima p�gina, digite NEXT e pressione enter."<<endl;
            cout <<" Se deseja sair, digite EXIT e aperte enter."<<endl;
            cin >>_next;
            while(_next!="next") {
                if (_next=="exit"){
                    exit(0);
                }
                else {
                cout <<" Fim da P�gina: "<<endl;
                cout <<" Se deseja sair, digite EXIT e pressione enter."<<endl;
                cout <<" Se deseja ir para a pr�xima p�gina, digite NEXT e aperte enter."<<endl;
                cin >>_next;
                }
            }
        tela4();
        }
        void tela4() {

            string _next;
            _next=="a";
            system("cls");
            cout <<" Ainda n�o adicionei informa��es nesta tela, talvez depois.."<<endl;
            cin.get();
        }
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    telas obj;
    obj.tela1();
    cin.get();
    return 0;//"return EXIT_SUCCESS"
};
