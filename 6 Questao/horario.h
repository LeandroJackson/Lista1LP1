#ifndef HORARIO_H_INCLUDED
#define HORARIO_H_INCLUDED


class Horario{

public:
        Horario();

        Horario(int hora, int min, int seg);

        void setHorario(int hora, int min, int seg);
	//void avancarHorario();

        int getHora();
        int getMin();
        int getSeg();
        void setHora(int hora);
        void setMin(int minuto);
        void setSeg(int segundo);



private:
        int hora;
        int min;
        int seg;
};


#endif // HORARIO_H_INCLUDED
