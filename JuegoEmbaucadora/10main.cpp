#include <iostream>
#include <locale>
#include "rlutil.h"
#include <windows.h> // sound
#include <mmsystem.h> // soun
#include <string>
#include <cstdlib> // libreria para configurar el size de la terminal
#include "mainHeader.h" // Importa las funciones del archivo start.h
#include <stdlib.h>

using namespace std;

int main()
{
    int corteTotal = 1;

    //CAPA DE INTRO DEL JUEGO
    intro();
    // MUSICA QUE ESTARÁ DE FONDO DURANTE TODO EL JUEGO (EN LOOP)
    PlaySound(TEXT("startSong.wav"),NULL,SND_ASYNC | SND_LOOP);

    // CAPA DE MENÚ PRINCIPAL
        while (corteTotal !=0){

            int corteSalir = 1;

            menuJuego();
            rlutil::cls();

            while (corteSalir !=0){

                fondoVentana();

                rlutil::locate(40,15); cout << "¿DESEA SALIR DEL JUEGO?";
                // NOTA EN LA PARTE INFERIOR DEL MARCO
                rlutil::setColor(rlutil::GREEN);
                rlutil::locate(25,29); cout << "  <NOTA> ";
                rlutil::setColor(rlutil::WHITE);
                rlutil::locate(33,29); cout << " Presione <S> para SI o <N> para NO ";

                switch (rlutil::getkey()){
                    case 115: // S Minuscula
                        corteSalir = 0;
                        corteTotal = 0;
                        rlutil::cls();
                        break;
                    case 83: // S Mayuscula
                        corteSalir = 0;
                        corteTotal = 0;
                        rlutil::cls();
                        break;
                    case 110: // N Minuscula
                        corteSalir = 0;
                        rlutil::cls();
                        break;
                    case  78: // N Mayuscula
                        corteSalir = 0;
                        rlutil::cls();
                        break;
                    default:
                        rlutil::cls();
                        // MEJORAR ESTO POR FAVOR
                        rlutil::locate(40,20); cout << "Debe presionar la tecla  N o la tecla S para salir del juego";
                        break;
                    }
            }
        }
        rlutil::locate(40,20); cout << "ADIOS";
return 0;
}

//jugar();
    //prueba();
    //reglas();
    //
