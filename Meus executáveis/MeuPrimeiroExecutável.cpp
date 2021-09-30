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
            cout <<" Vá pressionando enter para se aprofundar mais:"<<endl;
            cin.get();
            cout <<" Meu nome é Eduardo Rafael Castro Córdova"<<endl;
            cin.get();
            cout <<" E este é o meu primeiro estudo da programação"<<endl;
            cin.get();
            cout <<" Nesta primeira tela, coloquei em forma de texto, as informações"<<endl;
            cout <<" sobre lógica de programação consideradas importantes que eu"<<endl;
            cout <<" aprendi com ajuda de tutoriais e com apoio da web no geral."<<endl;
            cin.get();
            cout <<" >Algoritmo:";
            cin.get();
            cout <<" É o nome dado a um conjunto de instruções bem definidas."<<endl;
            cout <<" Na programação, algoritmo é a combinação de variáveis e"<<endl;
            cout <<" comandos cujo objetivo é criar um padrão de comportamento."<<endl;
            cin.get();
            cout <<" >Variáveis:";
            cin.get();
            cout <<" É a entidade responsável por armazenar informações variáveis."<<endl;
            cout <<" Existem alguns tipos básicos de variáveis:"<<endl;
            cout <<" CHAR: Armazenam caracteres como \"á\", \"z\" e \"1\"."<<endl;
            cout <<" INT: Armazenam valores inteiros como \"3\", \"-2\" e \"1999\"."<<endl;
            cout <<" FLOAT: Armazenam valores reais como \"-1.5\", \"2.1\" e \"3.478\"."<<endl;
            cout <<" BOOL: Armazenam valores lógicos: \"1(true)\" e \"0(false)\"."<<endl;
            cin.get();
            cout <<" >Comandos(Funções):";
            cin.get();
            cout <<" São os processos em que as variáveis são lidas e utilizadas,"<<endl;
            cout <<" para que então seja composto um algoritmo."<<endl;
            cout <<" Funções podem ser vazias, ou podem ter argumentos."<<endl;
            cout <<" A difença é que funções vazias não retornam valores,"<<endl;
            cout <<" e funções com argumentos retornam, o que significa que"<<endl;
            cout <<" funções com argumentos podem ser utilizadas como variáveis"<<endl;
            cout <<" ao seu término, mas funções vazias não."<<endl;
            cin.get();
            cout <<" Fim da Página: "<<endl;
            cout <<" Se deseja ir para a próxima página, digite NEXT e pressione enter."<<endl;
            cout <<" Se deseja sair, digite EXIT e aperte enter."<<endl;
            cin >>_next;
            while(_next!="next") {
                if (_next=="exit"){
                    exit(0);
                }
                else {
                cout <<" Fim da Página: "<<endl;
                cout <<" Se deseja sair, digite EXIT e pressione enter."<<endl;
                cout <<" Se deseja ir para a próxima página, digite NEXT e aperte enter."<<endl;
                cin >>_next;
                }
            }
            tela2();
        }
        void tela2() {

            string _next;
            _next=="a";
            system("cls");
            cout <<"Agora falarei sobre a sintaxe e os bons costumes de programação da linguagem C++";
            cin.get();
            cin.ignore();
            cout <<" >Sintaxe:";
            cin.get();
            cout <<" É a forma como as palavras são dispostas para que haja entendimento."<<endl;
            cout <<" Cada linguagem tem sua sintaxe."<<endl;
            cin.get();
            cout <<" Exemplo de sintaxe:"<<endl;
            cin.get();
            cout <<" || [(oque),(onde),(quando)] ||"<<endl;
            cout <<" ||                          ||"<<endl;
            cout <<" || [(comi),(aqui),(hoje)]   ||"<<endl;
            cout <<" || [(bebi),(lá),(ontem)]    ||"<<endl;
            cin.get();
            cout <<" Como pode ver, as palavras foram ordenadas de forma na qual"<<endl;
            cout <<" o computador possa facilmente entender O QUE aconteceu,"<<endl;
            cout <<" ONDE, e QUANDO, sem nem mesmo ter que ficar repetindo essas"<<endl;
            cout <<" palavras.Numa situação real, essas informações poderiam ser"<<endl;
            cout <<" armazenadas numa variável, e depois utilizadas sempre que"<<endl;
            cout <<" fossem requisitadas, mas este é só um exemplo."<<endl;
            cin.get();
            cout <<" >Bons Costumes:";
            cin.get();
            cout <<" São chamadas de bons costumes da programação, aquelas regras"<<endl;
            cout <<" não obrigatórias, mas que são importantes para deixar seu"<<endl;
            cout <<" código mais organizado e até menos propicío a ter erros."<<endl;
            cin.get();
            cout <<" Exemplos de alguns bons costumes da programação:"<<endl;
            cin.get();
            cout <<" - Indentação: É o recuo de um texto em relação à sua margem."<<endl;
            cout <<" Na maioria das linguagens de programação ela é usada apenas"<<endl;
            cout <<" com o objetivo de aumentar a legibilidade do código.Porém,"<<endl;
            cout <<" em algumas outras linguagens, a indentação é obrigatória para"<<endl;
            cout <<" definir a hierarquia dos blocos de código."<<endl;
            cin.get();
            cout <<" - return 0: Corresponde à \"EXIT_SUCESS\".Serve para que o"<<endl;
            cout <<" compilador avise caso exista algum erro no código."<<endl;
            cout <<" Compiladores mais recentes fazem isso automaticamente, mas"<<endl;
            cout <<" os programadores continuam incluindo isto no código para"<<endl;
            cout <<" deixa-lo mais legível."<<endl;
            cin.get();
            cout <<" Fim da Página: "<<endl;
            cout <<" Se deseja ir para a próxima página, digite NEXT e pressione enter."<<endl;
            cout <<" Se deseja sair, digite EXIT e aperte enter."<<endl;
            cin >>_next;
            while(_next!="next") {
                if (_next=="exit"){
                    exit(0);
                }
                else {
                cout <<" Fim da Página: "<<endl;
                cout <<" Se deseja sair, digite EXIT e pressione enter."<<endl;
                cout <<" Se deseja ir para a próxima página, digite NEXT e aperte enter."<<endl;
                cin >>_next;
                }
            }
            tela3();
        }
        void tela3() {

            string _next;
            _next=="a";
            system("cls");
            cout <<" Na terceira tela, coloquei informações referentes à programação em C++"<<endl;
            cin.get();
            cin.ignore();
            cout <<" >Criar funções:"<<endl;
            cin.get();
            cout <<" São em funções onde todo seu código será escrito."<<endl;
            cout <<" Para criar funções, basta fazer como no exemplo:"<<endl;
            cin.get();
            cout <<" | int _função(par1,par2); |"<<endl;
            cin.get();
            cout <<" //Primeiro, é necessário definir o tipo da função, que pode ser:"<<endl;
            cout <<" void(vazia), char, int, float ou bool(mesmos tipos das variáveis)."<<endl;
            cout <<" depois, deve-se criar um nome para a função, escolhi \"_função\"."<<endl;
            cout <<" (Vale ressaltar que o nome da função NÃO pode COMEÇAR com números.)"<<endl;
            cout <<" e por último, opcionalmente, definir os parâmetros da função dentro"<<endl;
            cout <<" dos parênteses, falaremos mais sobre parâmetros em outra tela."<<endl;
            cin.get();
            cout <<" >Função main:"<<endl;
            cin.get();
            cout <<" main significa principal, será a função \"main\" que será compilada,"<<endl;
            cout <<" ou seja, se você criar uma função com outro nome, e depois compilar"<<endl;
            cout <<" seu código, sua função será ignorada, a não ser que ela seja"<<endl;
            cout <<" chamada dentro da função main"<<endl;
            cout <<" Para chamar uma função já criada, é só escrever seu nome:"<<endl;
            cin.get();
            cout <<" | nomedafunção(); |"<<endl;
            cin.get();
            cout <<"\n >Importar Bibliotecas:";
            cin.get();
            cout <<" Bibliotecas armazenam funções já predefinidas, basta importar a biblioteca"<<endl;
            cout <<" desejada, e poderá utilizar todas as funções nela contidas, o que"<<endl;
            cout <<" economiza um bom tempo ao programador."<<endl;
            cin.get();
            cout <<" Exemplo de importação da biblioteca \"iostream\":"<<endl;
            cin.get();
            cout <<" | #include <iostream>                                        |"<<endl;
            cout <<" | //Essa é a sintaxe para importação de bibliotecas          |"<<endl;
            cout <<" | using namespace std;                                       |"<<endl;
            cout <<" | //Define que serão usadas as funções padrões da biblioteca |"<<endl;
            cin.get();
            cout <<" Obs: \"//\" significa que haverá uma explicação do que o antecedeu."<<endl;
            cin.get();
            cout <<" A biblioteca \"iostream\" contém funções de Input e Output,"<<endl;
            cout <<" em português, entrada e saída.Servem para que seja possível"<<endl;
            cout <<" imprimir números e caracteres na tela, e também le-los"<<endl;
            cout <<" quando digitados e armazena-los em variáveis."<<endl;
            cin.get();
            cout <<" No inicio deste executável, foi solicitado um nome e depois foi"<<endl;
            cout <<" impresso na tela uma mensagem de \"Bem vindo\", isso graças"<<endl;
            cout <<" à biblioteca <iostream>, que contém os comandos \"cin\" e \"cout\"."<<endl;
            cout <<" O cin leu o nome digitado e o armazenou em uma variável,"<<endl;
            cout <<" já o cout imprimiu o conteúdo da variável na tela:"<<endl;
            cin.get();
            cout <<" | #include <iostream>                                                      |"<<endl;
            cout <<" | using namespace std;                                                     |"<<endl;
            cout <<" | void main() { //Cria e abre a função \"main\".                             |"<<endl;
            cout <<" | char _variavel[15];                                                      |"<<endl;
            cout <<" | //Cria a variável do tipo char com 15 espaços para caracteres            |"<<endl;
            cout <<" | cin >>_variavel>>endl;                                                   |"<<endl;
            cout <<" | //Usa a função \"cin\" para ler o que for digitado e armazenar na variável.|"<<endl;
            cout <<" | cout <<\"Seja bem vindo \"<<_variavel<<\"!\"<<endl;                          |"<<endl;
            cout <<" | //Usa a função \"cout\" para imprimir uma mensagem com a variável de antes.|"<<endl;
            cout <<" | } //Fecha a variável \"main\".                                             |"<<endl;
            cin.get();
            cout <<" Fim da Página: "<<endl;
            cout <<" Se deseja ir para a próxima página, digite NEXT e pressione enter."<<endl;
            cout <<" Se deseja sair, digite EXIT e aperte enter."<<endl;
            cin >>_next;
            while(_next!="next") {
                if (_next=="exit"){
                    exit(0);
                }
                else {
                cout <<" Fim da Página: "<<endl;
                cout <<" Se deseja sair, digite EXIT e pressione enter."<<endl;
                cout <<" Se deseja ir para a próxima página, digite NEXT e aperte enter."<<endl;
                cin >>_next;
                }
            }
        tela4();
        }
        void tela4() {

            string _next;
            _next=="a";
            system("cls");
            cout <<" Ainda não adicionei informações nesta tela, talvez depois.."<<endl;
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
