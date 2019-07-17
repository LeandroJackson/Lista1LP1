#ifndef QUESTAO2_H_INCLUDED
#define QUESTAO2_H_INCLUDED

#include <string>

    class Pessoa{

    public:

        Pessoa(std::string nm);
        Pessoa(std::string nm, int id, std::string tell);

        std::string get_nome();
        std::string get_telefone();
        int get_idade();

    private:

        std::string nome;
        std::string telefone;
        int idade;

        void set_nome(std::string nm1);
        void   set_telefone(std::string tell1);
        void set_idade(int id1);

    };


#endif // QUESTAO2_H_INCLUDED
