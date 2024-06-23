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
    //intro();
    // MUSICA QUE ESTARÁ DE FONDO DURANTE TODO EL JUEGO (EN LOOP)
    //PlaySound(TEXT("startSong.wav"),NULL,SND_ASYNC | SND_LOOP);

    // CAPA DE MENÚ PRINCIPAL
        while (corteTotal !=0){

            int corteSalir = 1;

            menuJuego();
            rlutil::cls();

            while (corteSalir !=0){

                fondoVentana();

                rlutil::locate(40,15); cout << " SEGURO QUE QUIERE SALIR DEL JUEGO?";
                // NOTA EN LA PARTE INFERIOR DEL MARCO
                rlutil::setColor(rlutil::GREEN);
                rlutil::locate(25,29); cout << "  <NOTA> ";
                rlutil::setColor(rlutil::WHITE);
                rlutil::locate(31,29); cout << " Presione <S> para SI o <N> para NO ";

                switch (rlutil::getkey()){
                    case 115: // S
                        corteSalir = 0;
                        corteTotal = 0;
                        rlutil::cls();
                        break;

                    case 110: // N
                        corteSalir = 0;
                        rlutil::cls();
                        break;

                    default:
                        rlutil::cls();
                        rlutil::setColor(rlutil::RED);
                        rlutil::locate(40,19); cout << "===========================================";
                        rlutil::locate(40,20); cout << "/";
                        rlutil::locate(85,20); cout << "/";
                        rlutil::locate(40,21); cout << "===========================================";
                        rlutil::setColor(rlutil::WHITE);
                        rlutil::locate(42,20); cout << "DEBE PRESIONAR LA TECLA  N O LA TECLA S";
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
    //creditos();
