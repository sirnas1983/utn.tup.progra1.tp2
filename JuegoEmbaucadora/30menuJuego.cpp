#include <iostream>
#include <locale>
#include "rlutil.h"
#include "mainHeader.h"
using namespace std;

void menuJuego(){
    // Configuraciones visuales
    rlutil::hidecursor(); //Oculta el cursor
    rlutil::setBackgroundColor(rlutil::BLACK);
    rlutil::cls();
    rlutil::setColor(rlutil::WHITE);

    int corteMenu = 1;
    int  y = 0;
    int contador = 0;

    do {

        // FONDO DE VENTANA (MARCO)
        fondoVentana();
        // RENDERIZADO DE 4 CARTAS
        dibujoCartasMenu();

        rlutil::setColor(rlutil::YELLOW);
        rlutil::locate(50,17);  cout << "JUEGO << EMBAUCADO >>";

        // MENU DISPONIBLE EN ESTA CAPA
        if (contador == 0){
            rlutil::setColor(rlutil::RED);
            rlutil::locate(55,20);  cout << "   JUGAR";
        }else{
            rlutil::setColor(rlutil::GREEN);
            rlutil::locate(55,20);  cout << "   JUGAR";
        }

        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(55,21);  cout << "   REGLAS ";
        rlutil::locate(55,22);  cout << "ESTADISTICAS";
        rlutil::locate(55,23);  cout << "  CREDITOS";
        rlutil::locate(55,24);  cout << "   SALIR";

        rlutil::locate(55,26);  cout << "MONEDAS : " << contador ;

        // NOTA EN LA PARTE INFERIOR DEL MARCO
        rlutil::setColor(rlutil::GREEN);
        rlutil::locate(20,29); cout << "  <NOTA> ";
        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(29,29); cout << " Utilizar las TECLAS DE NAVEGACION + ENTER para acceder a las secciones  ";


        // PUNTERO >> DE SELECCION
        rlutil::locate(52,20+y);  cout << (char)175 << endl;

        switch (rlutil::getkey()) {
            case 49: // Insert Coin
                contador++;
                rlutil::cls();
                break;

            case 14:  // Cursor hacia arriba
                rlutil::locate(52,20+y); cout << " " << endl;
                y--;
                if (y<0){y=0;}
                break;

            case 15:  // Cursor hacia abajo
                rlutil::locate(52,20+y); cout << " " << endl;
                y++;
                if (y>4){y=4;}
                break;

            case 1: // AL PRECIONAR LA TECLA ENTER
                switch (y){
                    case 0: // SI SE ESTA POSICIONADO EN "JUGAR"
                        if (contador!=0){
                            rlutil::msleep(1000);
                            rlutil::cls();
                            contador--;
                            jugar();
                            break;
                        }else{
                            rlutil::locate(10,19); cout << "===========================================";
                            rlutil::locate(10,20); cout << "/";
                            rlutil::locate(40,20); cout << "/";
                            rlutil::locate(10,21); cout << "===========================================";
                            rlutil::setColor(rlutil::WHITE);
                            rlutil::locate(12,20); cout << "APRIETE 1 PARA INGRESAR MONEDAS";
                            break;
                        }


                    case 1: // SI SE ESTA POSICIONADO EN "REGLAS"
                        reglas();
                        break;

                    case 2: // SI SE ESTA POSICIONADO EN "ESTADISTICAS"
                        //estadisticas();
                        break;

                    case 3: // SI SE ESTA POSICIONADO EN "CREDITOS"
                        creditos();
                        break;

                    case 4: // SI SE ESTA POSICIONADO EN "SALIR"
                        corteMenu = 0;
                        rlutil::cls();
                        break;
                    }
                break;
            }
    }while (corteMenu !=0);
}
