#include <iostream>
#include "ControleDePagamentos.h"

using namespace std;

int main(){
    controlePagamento *controlPag = new controlePagamento();
    controlPag->setPagamentos("Jackson", 750);
    controlPag->setPagamentos("Jackson", 2000);
    controlPag->setPagamentos("Jackson", 1700);

    cout << "Pagamento total: " << controlPag->calculaTotalDePagamentos() << endl;
        if(controlPag->existePagamentoParaFuncionario("Jackson"))
            cout << "Existe pagamento" << endl;
        else
            cout << "Nao existe pagamento" << endl;
        if(controlPag->existePagamentoParaFuncionario("Jackson"))
            cout << "Existe pagamento" << endl;
        else
            cout << "Nao existe pagamento" << endl;

    delete(controlPag);
}
