#include <iostream>
#include "questao3.h"

using namespace std;

int main(){

   Invoice *i1 = new Invoice(055214, -1, 24.99, "PARA MALHAR");

    cout << "Numero do item faturado_________:  "    << i1-> get_num_Item() << endl;
    cout << "Descricao do item_______________:  "  << i1-> get_Descr_Item() << endl;
    cout << "Quantidade comprada do item_____:  "    << i1-> get_QuantC_Item() << endl;
    cout << "Preco unitario do item__________:  "       << i1-> get_precoUni_item() << endl << endl;
    cout << "FATURA:_________________________:  "          << i1-> getInvoiceAmount() << endl;

    delete i1;


    return 0;
}
