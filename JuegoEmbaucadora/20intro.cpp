#include <iostream>
#include <locale>
#include "rlutil.h"
#include "mainHeader.h"
using namespace std;


void intro(){
    // OCULTA EL CURSOR
    rlutil::hidecursor();
    // LIMPIA EL CONTENIDO DE TODA LA CONSOLA
    rlutil::cls();
    // INTEGRACION DE MÚSICA DE FONDO A ESTA CAPA
    PlaySound(TEXT("introSong.wav"),NULL,SND_ASYNC);
    // FUNCIÓN QUE DIBUJA LAS LETRAS S , E , G , A
    dibujoLetras();
    // SE PAUSA LA EJECUCIÓN DEL PROGRAMA (5S)
    rlutil::msleep(2500);
}
