#include "questao3.h"
#include <string>

using namespace std;

            int Invoice::get_num_Item(){
                return num_Item;
            }
            int Invoice::get_QuantC_Item(){
                return QuantC_Item;
            }
            double Invoice::get_precoUni_item(){
                return precoUni_item;
            }
            string Invoice::get_Descr_Item(){
                return Descr_Item;
            }

            double Invoice::getInvoiceAmount(){
                    return fatura;
            }


            void Invoice::set_num_Item(int NumItem){
                num_Item=NumItem;
            }
            void Invoice::set_QuantC_Item(int QuantItem){
                QuantC_Item=QuantItem;
            }
            void Invoice::set_precoUni_item(double PrecoUnItem){
                precoUni_item=PrecoUnItem;
            }
            void Invoice::set_Descr_Item(string DescrItem){
                Descr_Item=DescrItem;
            }

            void Invoice::set_InvoiceAmount(double p, double q){
                fatura = p*q;
            }




Invoice::Invoice(int NUMi, int QuantCi, double PrecUni, string Descri){
        if(QuantCi < 0){
            QuantCi = 0;
            set_QuantC_Item(QuantCi);
        } else {
            set_QuantC_Item(QuantCi);
        }
        if(PrecUni < 0 ){
            PrecUni = 0.0;
            set_precoUni_item(PrecUni);
        } else {
            set_precoUni_item(PrecUni);
        }

        set_num_Item(NUMi);
        set_Descr_Item(Descri);

        set_InvoiceAmount(PrecUni, QuantCi);
}









