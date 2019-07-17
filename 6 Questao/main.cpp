#include <iostream>
#include "voo.h"

using namespace std;

int main()
{
    Voo *v1 = new Voo();

    cout << "N do voo: " << v1->getNumVoo() << "\nData: " << v1->getData().getDia() << "/" << v1->getData().getMes() << "/" << v1->getData().getAno()
         << "\nHoras: " << v1->getHorario().GetHoras() << ":" << v1->getHorario().GetMinutos()
         << ":" << v1->getHorario().GetSegundos() << endl;

    cout << "Proxima cadeira livre: " << v1->proximoLivre() + 1 << endl;
    cout << "A cadeira 4 esta ";
    if(v1->verifica(4))
        cout << "Disponivel" << endl;
    else
        cout << "Ocupada" << endl;
    if(v1->ocupa(7))
        cout << "Cadeira ocupada com sucesso!" << endl;
    else
        cout << "Cadeira indisponivel" << endl;
    cout << v1->vagas() << " vagas disponiveis" << endl;
    cout << "Numero do voo: " << v1->getNumVoo() << endl;
    cout << "Data: " << v1->getData().getDia() << "/" << v1->getData().getMes() << "/" << v1->getData().getAno() << endl;
    cout << "Horas: " << v1->getHorario().GetHoras() << ":" << v1->getHorario().GetMinutos() << ":" << v1->getHorario().GetSegundos() << endl;

    delete(v1);

}
