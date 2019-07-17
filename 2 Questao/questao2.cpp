#include "questao2.h"
#include <string>

using namespace std;

    string Pessoa::get_nome(){
        return nome;
    }

    string Pessoa::get_telefone(){
        return telefone;
    }

    int Pessoa::get_idade(){
        return idade;
    }

        void Pessoa::set_nome(string nm1){
            nome = nm1;
        }
        void   Pessoa::set_telefone(string tell1){
            telefone = tell1;
        }
        void Pessoa::set_idade(int id1){
            idade = id1;
        }

    Pessoa::Pessoa(string nm){
        set_nome(nm);
    }

    Pessoa::Pessoa(string nm, int id, string tell){
        set_nome(nm);
        set_idade(id);
        set_telefone(tell);
    }
