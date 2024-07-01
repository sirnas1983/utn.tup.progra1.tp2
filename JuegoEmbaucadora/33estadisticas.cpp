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
    int corteEstadisticas = 1;

    while (corteEstadisticas !=0){
       // Obtener las dimensiones de la consola
        int ancho = tcols();
        int alto = trows();

        rlutil::locate(49,3);  cout << "ESTADISTICAS DEL JUEGO";

        // Texto a mostrar
        string titulo = "MEJOR PUNTAJE";
        string puntaje = "Mayor puntaje: " + to_string(topScorePuntaje);
        string nombre = "Jugador: " + topScoreNombre;

        // Calcular la posiciOn central para cada linea
        int tituloPos = (ancho - titulo.length()) / 2;
        int puntajePos = (ancho - puntaje.length()) / 2;
        int nombrePos = (ancho - nombre.length()) / 2;

        // Calcular la lInea central para el titulo
        int tituloLinea = alto / 2 - 2;
        int puntajeLinea = alto / 2;
        int nombreLinea = alto / 2 + 2;

        // Mostrar el tItulo centrado
        locate(tituloPos, tituloLinea);
        cout << titulo;

        // Mostrar el puntaje centrado
        locate(puntajePos, puntajeLinea);
        cout << puntaje;

        // Mostrar el nombre centrado
        locate(nombrePos, nombreLinea);
        cout << nombre << endl;

        // Recuadro
        rlutil::setColor(rlutil::YELLOW);
        rlutil::locate(42,12);  cout << "====================================";
        rlutil::locate(42,13);  cout << "|";
        rlutil::locate(77,13);  cout << "|";
        rlutil::locate(42,14);  cout << "====================================";
        rlutil::locate(42,15);  cout << "|";
        rlutil::locate(77,15);  cout << "|";
        rlutil::locate(42,16);  cout << "====================================";
        rlutil::locate(42,17);  cout << "|";
        rlutil::locate(77,17);  cout << "|";
        rlutil::locate(42,18);  cout << "====================================";


        rlutil::setColor(rlutil::GREEN);
        rlutil::locate(41,29);  cout << "  <ESC>";
        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(48,29);  cout << " para volver al menu principal  ";

        switch (rlutil::getkey()){
            case 0:
                corteEstadisticas = 0;
                rlutil::cls();
                break;

            default:
                rlutil::setColor(rlutil::RED);
                rlutil::locate(40,22);   cout << "=========================================";
                rlutil::locate(40,23);   cout << "|";
                rlutil::locate(80,23);   cout << "|";
                rlutil::locate(40,24);   cout << "=========================================";
                rlutil::setColor(rlutil::WHITE);
                rlutil::locate(41,23);   cout << "  Utilice las teclas correspondientes!";
                break;
            }
        }

}

