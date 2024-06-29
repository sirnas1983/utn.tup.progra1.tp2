#include <iostream>
#include <locale>
#include "rlutil.h"
#include "mainHeader.h"
using namespace std;

/*void salir(){

    rlutil::cls();
    fondoVentana();

    int corteSalir = 1;

    while (corteSalir !=0){

        rlutil::locate(40,15); cout << "¿DESEA SALIR DEL JUEGO?";
        // NOTA EN LA PARTE INFERIOR DEL MARCO
        rlutil::setColor(rlutil::GREEN);
        rlutil::locate(25,29); cout << "  <NOTA> ";
        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(31,29); cout << " Presione <S> para SI o <N> para NO ";

        switch (rlutil::getkey()){
            case 115: // S
                corteSalir = 0;
                rlutil::cls();
                break;

            case 110: // N
                corteSalir = 0;
                rlutil::cls();
                break;
         }
    }
}*/
