#include <iostream>
#include "questao2.h"

using namespace std;

int main(){

        Pessoa *p1 = new Pessoa("Jackson");
        Pessoa *p2 = new Pessoa("Leandro", 19, "83999314480");

        cout << p1-> get_nome() << endl;
        cout << p2-> get_nome() << "   ";
        cout << p2-> get_idade() << "   ";
        cout << p2-> get_telefone() << endl;

        delete p1;
        delete p2;


    return 0;
}
