#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

#include <string>

class Data{
    public:
            Data();
            Data(int , int , int );
            int Compara(Data, Data);
            std::string getMesExtenso(Data);
            bool isBissexto(Data);

            void teste(int, std::string);
            std::string nome;

            int get_dia();
            int get_mes();
            int get_ano();


    private:
            int dia;
            int mes;
            int ano;

            void set_dia(int);
            void set_mes(int);
            void set_ano(int);

};

#endif // DATA_H_INCLUDED
