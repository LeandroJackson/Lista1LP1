#ifndef PAGAMENTOS_H_INCLUDED
#define PAGAMENTOS_H_INCLUDED

#include <string>

class pagamentos{
    private:
        double valorPagamento;
        std::string nomeFuncionario;
    public:
        pagamentos();
        double getValorPagamento();
        std::string getNomeFuncionario();
        void setValorPagamento(double valor);
        void setNomeFuncionario(std::string nome);

};


#endif // PAGAMENTOS_H_INCLUDED
