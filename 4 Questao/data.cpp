#include "data.h"
#include <string>

        void Data::set_dia(int dd){
            dia = dd;
        }
        void Data::set_mes(int mm){
            mes = mm;
        }
        void Data::set_ano(int aa){
            ano = aa;
        }

         int Data::get_dia(){
            return dia;
        }
        int Data::get_mes(){
            return mes;
        }
        int Data::get_ano(){
            return ano;
        }

        Data::Data(int dd, int mm, int aa){

            if(dd < 1 || dd > 31){
                set_dia(1);
            }else
                set_dia(dd);
            if(mm < 1 || mm > 12 ){
                set_mes(1);
            }else
                set_mes(mm);

            set_ano(aa);
        }

        int Data::Compara(Data datP, Data datC){

            int dataP, dataC;

            dataP = (datP.get_ano()*10000)+(datP.get_mes()*100)+datP.get_dia();
            dataC = (datC.get_ano()*10000)+(datC.get_mes()*100)+datC.get_dia();

            if(dataP==dataC){
                return 0;
            }
            if(dataC > dataP){
                return 1;
            }
            if(dataP > dataC){
                return -1;
            }
        }

        std::string Data::getMesExtenso(Data mes){

            switch(mes.get_mes()){
                case 1:
                return "Janeiro";
                case 2:
                return "Fevereiro";
                case 3:
                return "Marco";
                case 4:
                return "Abril";
                case 5:
                return "Maio";
                case 6:
                return "Junho";
                case 7:
                return "Julho";
                case 8:
                return "Agosto";
                case 9:
                return "Setembro";
                case 10:
                return "Outubro";
                case 11:
                return "Novembro";
                case 12:
                return "Dezembro";
            }

        }


        bool Data::isBissexto(Data a1){
            if (a1.get_ano() % 4 == 0 && (a1.get_ano() % 400 == 0 || a1.get_ano() % 100 != 0)) {
                return true;
            }else {
                return false;
            }
        }


        Data::Data(){
        };




