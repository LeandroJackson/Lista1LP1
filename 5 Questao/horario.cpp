#include "horario.h"
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

        void Horario::set_hora(int h){
            hora = h;
        }
        void Horario::set_minuto(int m){
            minuto = m;
        }
        void Horario::set_segundo(int s){
            segundo = s;
        }

        int Horario::get_hora(){
            return hora;
        }
        int Horario::get_minuto(){
            return minuto;
        }
        int Horario::get_segundo(){
            return segundo;
        }



    Horario::Horario(int h, int m, int s){
        if(h < 0 || h > 24){
            set_hora(0);
            set_minuto(0);
            set_segundo(0);
        } else
            if(m < 0 || m > 59){
                set_hora(0);
                set_minuto(0);
                set_segundo(0);
            } else
                if(s < 0 || s > 59){
                    set_hora(0);
                    set_minuto(0);
                    set_segundo(0);
                } else {
                        set_hora(h);
                        set_minuto(m);
                        set_segundo(s);
                }
    }

    void Horario::setHorario(Horario hrio){
        cout << hrio.get_hora()   << " : ";
        cout << hrio.get_minuto() << " : ";
        cout << hrio.get_segundo()<< endl << endl;
    }

    void Horario::avancarHorario(Horario hr){
    int h = hr.get_hora(), m = hr.get_minuto(), s = hr.get_segundo();

    while(1){

            for( ; m <= 59; m++){

                for( ; s < 60; s++){
                    cout << h << " : " << m << " : " << s << std::endl;
                    system("pause");
                    system("cls");
                }
                s=0;
                if(m==59){
                    m=0;
                    h++;
                    if(h==24){
                        h=0;
                    }
                }
            }
    }

    }










