#include <iostream>
#include "horario.h"
#include <stdlib.h>

using namespace std;

int main(){

    Horario *h1 = new Horario(23, 59, 58);

    h1 -> setHorario(*h1);
    h1 -> avancarHorario(*h1);

    return 0;
}
