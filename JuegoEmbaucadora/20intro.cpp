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
    // INTEGRACION DE M�SICA DE FONDO A ESTA CAPA
    PlaySound(TEXT("introSong.wav"),NULL,SND_ASYNC);
    // FUNCI�N QUE DIBUJA LAS LETRAS S , E , G , A
    dibujoLetras();
    // SE PAUSA LA EJECUCI�N DEL PROGRAMA (5S)
    rlutil::msleep(2500);
}
