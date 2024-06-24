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
        rlutil::locate(55,24);  cout << "  CONTACTO";
        rlutil::locate(55,25);  cout << "   SALIR";

        rlutil::setColor(rlutil::GREEN);
        rlutil::locate(6,20);   cout << "=========================================";
        rlutil::locate(6,21);   cout << "|";
        rlutil::locate(46,21);  cout << "|";
        rlutil::locate(6,22);   cout << "=========================================";
        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(8,21);   cout << "Pulse la tecla 1 para agregar monedas";


        rlutil::locate(55,27);  cout << "MONEDAS : " << contador ;

        // NOTA EN LA PARTE INFERIOR DEL MARCO
        rlutil::setColor(rlutil::GREEN);
        rlutil::locate(20,29);  cout << "  <NOTA> ";
        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(29,29);  cout << " Utilizar las TECLAS DE NAVEGACION + ENTER para acceder a las secciones  ";


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
                if (y>5){y=5;}
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
                            rlutil::cls();
                            rlutil::setColor(rlutil::RED);
                            rlutil::locate(6,23);  cout << "=========================================";
                            rlutil::locate(6,24);  cout << "|";
                            rlutil::locate(46,24); cout << "|";
                            rlutil::locate(6,25);  cout << "=========================================";
                            rlutil::setColor(rlutil::WHITE);
                            rlutil::locate(8,24);  cout << "          Tiene 0 monedas!";
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

                    case 4: // SI SE ESTA POSICIONADO EN "CONTACTO"
                        contacto();
                        break;
                    case 5: // SI SE ESTA POSICIONADO EN "SALIR"
                        corteMenu = 0;
                        rlutil::cls();
                        break;
                    }
                break;

                default:
                        rlutil::cls();
                        rlutil::setColor(rlutil::RED);
                        rlutil::locate(6,23);  cout << "=========================================";
                        rlutil::locate(6,24);  cout << "|";
                        rlutil::locate(46,24); cout << "|";
                        rlutil::locate(6,25);  cout << "=========================================";
                        rlutil::setColor(rlutil::WHITE);
                        rlutil::locate(7,24);  cout << "  Utilice las teclas correspondientes!";
                        break;
            }
    }while (corteMenu !=0);
}
