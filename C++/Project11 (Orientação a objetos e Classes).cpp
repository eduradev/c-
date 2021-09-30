#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string>

using namespace std;

//Protótipos:


class Eduardo {
    public:
        string genero = "Masculino";
        void texto() {
        cout <<"Estamos introduzindo as classes"<<endl;
        }
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    Eduardo obj;
    cout <<"Sexo: " << obj.genero << endl;
    cin.get();
    system("cls");
    Eduardo obj1;
    obj1.texto();
    cin.get();
    return 0;
}
