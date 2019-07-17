#ifndef CONTROLEDEPAGAMENTOS_H_INCLUDED
#define CONTROLEDEPAGAMENTOS_H_INCLUDED

#define MAX_PAGAMENTOS 100

#include "Pagamentos.h"
#include <string>

class controlePagamento
{
    private:
        pagamentos pag[MAX_PAGAMENTOS];
    public:
        controlePagamento();
        int VerificaIndiceDisponivel();
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario (std::string nomeFuncionario);

        void setPagamentos(std::string nomeFuncionario, double valorPagamento);
};


#endif // CONTROLEDEPAGAMENTOS_H_INCLUDED
