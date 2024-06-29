#include <iostream>
#include <locale>
#include "rlutil.h"
#include "mainHeader.h"
using namespace std;

void salir(int &corteMenu){

int corteSalir = 1;
rlutil::cls();

    while(corteSalir !=0){

        fondoVentana();

        rlutil::locate(42,15); cout << " SEGURO QUE QUIERE SALIR DEL JUEGO?";
        // NOTA EN LA PARTE INFERIOR DEL MARCO
        rlutil::setColor(rlutil::GREEN);
        rlutil::locate(39,29); cout << " <NOTA> ";
        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(46,29); cout << " Presione <S> para SI o <N> para NO ";

        switch (rlutil::getkey()){
            case 115: // S Minuscula
                corteSalir = 0;
                corteMenu = 0;
                rlutil::cls();
                break;

            case 83:  // S Mayuscula
                corteSalir = 0;
                corteMenu = 0;
                rlutil::cls();
                break;

            case 110: // N Minuscula
                corteSalir = 0;
                rlutil::cls();
                break;

            case 78: // N Mayuscula
                corteSalir = 0;
                rlutil::cls();
                break;

            default:
                //rlutil::cls();
                rlutil::setColor(rlutil::RED);
                rlutil::locate(40,19); cout << "=========================================";
                rlutil::locate(40,20); cout << "|";
                rlutil::locate(80,20); cout << "|";
                rlutil::locate(40,21); cout << "=========================================";
                rlutil::setColor(rlutil::WHITE);
                rlutil::locate(42,20); cout << " Utilice las teclas correspondientes!";
                break;
        }
    }

}

