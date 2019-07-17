#include <iostream>
#include "data.h"
#include <string>

using namespace std;

int main(){

    Data *d1 = new Data(11,7,2019);
    Data *dc = new Data();

        *dc = {11,6,2019}; //data corrente

        cout << d1->get_dia() << " / ";
        cout << d1->get_mes() << " / ";
        cout << d1->get_ano() << endl << endl;

        cout << "Data corrente: " << dc->get_dia() << " / ";
        cout << dc->get_mes() << " / ";
        cout << dc->get_ano() << endl << endl;

        cout << dc->Compara(*d1,*dc) << endl; //Compara a data1 com a data corrente 2
        cout << dc->getMesExtenso(*dc) << endl; //retorna a uma string com o nome do mes
        cout << dc->isBissexto(*dc) << endl; //Retorna a vdd se bissexto e falso se nao bissexto


    return 0;
}
