#ifndef QUESTAO3_H_INCLUDED
#define QUESTAO3_H_INCLUDED

#include <string>

    class Invoice{

    public:

            Invoice(int NUMi, int QuantCi, double PrecUni, std::string Descri);
            int get_num_Item();
            int get_QuantC_Item();
            std::string get_Descr_Item();
            double getInvoiceAmount();
            double get_precoUni_item();

    private:

            int num_Item;
            int QuantC_Item;
            double precoUni_item;
            double fatura;
            std::string Descr_Item;

            void set_num_Item(int NumItem);
            void set_QuantC_Item(int QuantItem);
            void set_precoUni_item(double PrecoUnItem);
            void set_Descr_Item(std::string DescrItem);
            void set_InvoiceAmount(double p, double q);

    };


#endif // QUESTAO3_H_INCLUDED
