#include <iostream>
#include <locale>
#include "rlutil.h"
#include <string>
#include <windows.h>
#include "mainHeader.h"

using namespace std;
using namespace rlutil;

extern int topScorePuntaje;
extern string topScoreNombre;

void mostrarMejorPuntaje() {
    // Limpiar la pantalla
    rlutil::hidecursor();
    rlutil::cls();
    fondoVentana();

    // Obtener las dimensiones de la consola
    int ancho = tcols();
    int alto = trows();

    // Texto a mostrar
    string titulo = "MEJOR PUNTAJE";
    string puntaje = "Mayor puntaje: " + to_string(topScorePuntaje);
    string nombre = "Jugador: " + topScoreNombre;

    // Calcular la posici�n central para cada l�nea
    int tituloPos = (ancho - titulo.length()) / 2;
    int puntajePos = (ancho - puntaje.length()) / 2;
    int nombrePos = (ancho - nombre.length()) / 2;

    // Calcular la l�nea central para el t�tulo
    int tituloLinea = alto / 2 - 1;
    int puntajeLinea = alto / 2;
    int nombreLinea = alto / 2 + 1;

    // Mostrar el t�tulo centrado
    locate(tituloPos, tituloLinea);
    cout << titulo;

    // Mostrar el puntaje centrado
    locate(puntajePos, puntajeLinea);
    cout << puntaje;

    // Mostrar el nombre centrado
    locate(nombrePos, nombreLinea);
    cout << nombre << endl;

    // Pausar la pantalla
    rlutil::locate(1,30);
    pausarYLimpiarPantalla();
}

