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

    //CAPA DE INTRO DEL JUEGO
    //intro();
    // MUSICA QUE ESTARÁ DE FONDO DURANTE TODO EL JUEGO (EN LOOP)
    //PlaySound(TEXT("startSong.wav"),NULL,SND_ASYNC | SND_LOOP);
    // CAPA DE MENÚ PRINCIPAL
    menuJuego();
    //jugar();
    //prueba();
    reglas();
    //creditos();
    //exit();
    return 0;
}
