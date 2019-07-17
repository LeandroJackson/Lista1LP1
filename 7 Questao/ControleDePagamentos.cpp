#include "ControleDePagamentos.h"

controlePagamento::controlePagamento()
{
    for(int i = 0; i<MAX_PAGAMENTOS; i++){
        pag[i].setValorPagamento(0);
        pag[i].setNomeFuncionario(" ");
    }
}

void controlePagamento::setPagamentos(std::string nomeFuncionario, double valorPagamento){
    int
        aux = VerificaIndiceDisponivel();

    pag[aux].setNomeFuncionario(nomeFuncionario);
    pag[aux].setValorPagamento(valorPagamento);
}

double controlePagamento::calculaTotalDePagamentos(){
    double soma = 0;

    for(int i = 0; i<MAX_PAGAMENTOS; i++){
        soma += pag[i].getValorPagamento();
    }

    return soma;
}

bool controlePagamento::existePagamentoParaFuncionario (std::string nomeFuncionario){
    for(int i = 0; i<MAX_PAGAMENTOS; i++){
        if(pag[i].getNomeFuncionario() == nomeFuncionario)
            return true;
    }
    return false;
}

int controlePagamento::VerificaIndiceDisponivel(){
    for(int i = 0; i<MAX_PAGAMENTOS; i++){
        if(pag[i].getValorPagamento() == 0)
            return i;
    }
    return 0;
}
