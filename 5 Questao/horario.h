#ifndef HORARIO_H_INCLUDED
#define HORARIO_H_INCLUDED

class Horario{

    public:
        Horario();
        Horario(int, int, int);

        void avancarHorario(Horario);

        int get_hora();
        int get_minuto();
        int get_segundo();

        void setHorario(Horario);

    private:
        int hora;
        int minuto;
        int segundo;

        void set_hora(int);
        void set_minuto(int);
        void set_segundo(int);


};

#endif // HORARIO_H_INCLUDED
