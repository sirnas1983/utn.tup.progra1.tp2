#include <iostream>
#include <locale>
#include "rlutil.h"
#include <windows.h> // sound
#include <mmsystem.h> // sound
#include <string>
#include <cstdlib>
#include "mainHeader.h" // Importa las funciones del archivo start.h
#include <stdlib.h>

using namespace std;

int main()
{
    int corteTotal = 1;

    //CAPA DE INTRO DEL JUEGO
    intro();
    musicaFondo();
    // MUSICA QUE ESTARÁ DE FONDO DURANTE TODO EL JUEGO (EN LOOP)
    //PlaySound(TEXT("startSong.wav"),NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);

    // CAPA DE MENÚ PRINCIPAL
    while (corteTotal !=0){

        menuJuego();
        corteTotal = 0;
        rlutil::cls();
    }

  exit(0);
}


