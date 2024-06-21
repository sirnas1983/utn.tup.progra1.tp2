#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <string>
#include <windows.h>
#include "rlutil.h"
#include "mainHeader.h"

using namespace std;

// Función para calcular el puntaje de la mano de un jugador en función de la carta embaucadora
int calcularPuntaje(int emb, int vectorMano[], int vectorPalo[], int vectorDePuntaje[]){
    int puntaje = 0;
    for (int i = 0; i < 5; i++){
        if (vectorPalo[i] != emb){
            puntaje += vectorDePuntaje[vectorMano[i]];
        }
    }
    return puntaje;
}

// Función para calcular un aleatorio entre un máximo y mínimo dados
int aleatorioEntre(int minimo, int maximo){
    return minimo + rand() % ((maximo + 1) - minimo);
}

// Función que devuelve un booleano segun su indice para saber si ya salio o no en la mano
bool yaSalio(int indice, bool cartasSeleccionadas[]) {
    return cartasSeleccionadas[indice];
}

// Función para generar una mano aleatoria
void generarManoAleatoria(int vectorMano[], int vectorPalo[], bool cartasSeleccionadas[]){
    int indice;
    int mano;
    int palo;
    for (int i=0; i<5; i++){
        do {
            mano = aleatorioEntre(0,4);
            palo = aleatorioEntre(0,3);
            indice = mano * 4 + palo;
        } while(yaSalio(indice, cartasSeleccionadas));
        cartasSeleccionadas[indice] = true;
        vectorMano[i] = mano;
        vectorPalo[i] = palo;
    }
}

int total(int vectorPuntajes[]){
    int acum;
    for (int i=0; i<3; i++){
        acum += vectorPuntajes[i];
    }
    return acum;
}

void inicializarVectorEnFalse(bool vect[], int longitud){
    for (int i=0; i<longitud; i++){
        vect[i] = false;
    }
}

void inicializarVectorEnCero(int vect[], int longitud){
    for (int i=0; i<longitud; i++){
        vect[i] = 0;
    }
}

// Función para mostrar la mano de un jugador
void mostrarMano(int vectorMano[], int vectorPalo[], string vectorDeVisualizacionValor[], string vectorDeVisualizacionPalo[]) {
    for (int i = 0; i < 5; i++) {
        cout << "Carta " << i + 1 << ": Valor = " << vectorDeVisualizacionValor[vectorMano[i]]
             << ", Palo = " << vectorDeVisualizacionPalo[vectorPalo[i]] << endl;
        Sleep(300);
    }
}


// Función para mostrar el puntaje acumulado
void mostrarPuntajeAcumulado(string nombreJug1, string nombreJug2, int puntajeJug1, int puntajeJug2) {
    cout << "--------PUNTAJES--------" << endl;
    cout << nombreJug1 << ": " << puntajeJug1 << endl;
    cout << nombreJug2 << ": " << puntajeJug2 << endl;
    cout << "------------------------" << endl;
}

// Función para pausar y limpiar la pantalla
void pausarYLimpiarPantalla() {
    system("pause");
    system("cls");
}

void jugar() {
    // Inicializar la semilla del generador de números aleatorios - Esto debe ir sí o sí al inicio del programa
    srand(static_cast<unsigned int>(time(0)));

    // Constantes del Juego y declaración de variables
    int vectorDePuntaje[5] = {10, 11, 12, 15, 20}; // Vector fijo con los puntajes de las cartas
    string vectorDeVisualizacionValor[5] = {"10", "J", "Q", "K", "A"}; // Vector fijo con la designacion de las cartas
    string vectorDeVisualizacionPalo[4] = {"Pica", "Trebol", "Corazón", "Diamante"}; // Vector fijo con la designación de los palos
    int vectorPuntajeJug1[3]; // Vector para acumular el puntaje por mano del jugador 1
    int vectorPuntajeJug2[3]; // Vector para acumular el puntaje por mano del jugador 2
    bool cartasSeleccionadas[20]; // Vector para llevar el seguimiento de las cartas que salieron en la mano
    string nombreJug1;
    string nombreJug2;
    char opcion;
    char jugarOtra;
    int acumJug1;
    int acumJug2;
    int vectorManoJug1[5];
    int vectorPaloJug1[5];
    int vectorManoJug2[5];
    int vectorPaloJug2[5];
    int embaucadoraAnt;
    int topScorePuntaje = 0;
    string topScoreNombre = "";

    rlutil::locate(45,3); cout << "Bienvenidos a EMBAUCADO!" << endl;
    do{
        acumJug1 = 0;
        acumJug2 = 0;
        inicializarVectorEnCero(vectorPuntajeJug1, 3);
        inicializarVectorEnCero(vectorPuntajeJug2, 3);

        rlutil::locate(35,5);   cout << "Por favor ingrese los nombres de los jugadores" << endl;
        rlutil::locate(20,7);   cout << "Jugador N° 1: " << endl;
        rlutil::locate(35,7);   cin  >> nombreJug1;
        rlutil::locate(70,7);   cout << "Jugador N° 2: " << endl;
        rlutil::locate(85,7);   cin  >> nombreJug2;
        //pausarYLimpiarPantalla();
        for (int ronda = 1; ronda <= 3; ronda ++){
            inicializarVectorEnFalse(cartasSeleccionadas, 20); // Asignamos falso a todas las posiciones del vector
            int embaucadora = aleatorioEntre(0, 3); // Embaucadora
            // Generamos una mano aleatoria para cada jugador
            generarManoAleatoria(vectorManoJug1, vectorPaloJug1, cartasSeleccionadas);
            generarManoAleatoria(vectorManoJug2, vectorPaloJug2, cartasSeleccionadas);

            cout << "MANO N°: " << ronda << endl;
            cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
            // Mostrar la carta embaucadora
            cout << "|Carta embaucadora: " << vectorDeVisualizacionPalo[embaucadora] << "|" << endl;
            cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
            // Mostrar la mano del Jugador 1
            cout <<nombreJug1 <<" (" << acumJug1 <<"):" << endl;
            mostrarMano(vectorManoJug1, vectorPaloJug1, vectorDeVisualizacionValor, vectorDeVisualizacionPalo);
            cout << "------------------------" << endl;
            // Mostrar la mano del Jugador 2

            cout <<nombreJug2 <<" (" << acumJug2 <<"):" << endl;
            mostrarMano(vectorManoJug2, vectorPaloJug2, vectorDeVisualizacionValor, vectorDeVisualizacionPalo);
            cout << "------------------------" << endl;

            // Módulo para cambiar carta embaucadora en función del puntaje acumulado y la selección del jugador
            if (ronda != 1){
                embaucadoraAnt = embaucadora;
                if (ronda == 2 && acumJug1 >= 20) {
                    do {
                        cout << nombreJug1 << " tienes la posibilidad de cambiar la embaucadora! ¿Quieres hacerlo? S para sí, N para no: " << endl;
                        cin >> opcion;
                    } while (opcion != 'S' && opcion != 'N');
                    if (opcion == 'S'){
                        do{
                            embaucadora = aleatorioEntre(0, 3);
                        } while(embaucadora == embaucadoraAnt);
                        cout << nombreJug1 << ", se le restaron 20 puntos de su puntaje" << endl;
                        cout << "Nueva carta embaucadora: " << vectorDeVisualizacionPalo[embaucadora] << endl;
                        acumJug1 -= 20;
                    }
                } else if (ronda == 3 && acumJug2 >= 20) {
                    do {
                        cout << nombreJug2 << " tienes la posibilidad de cambiar la embaucadora! ¿Quieres hacerlo? S para sí, N para no: " << endl;
                        cin >> opcion;
                    } while (opcion != 'S' && opcion != 'N');
                    if (opcion == 'S'){
                        do{
                            embaucadora = aleatorioEntre(0, 3);
                        } while(embaucadora == embaucadoraAnt);
                        cout << nombreJug2 << ", se le restaron 20 puntos de su puntaje" << endl;
                        cout << "Nueva carta embaucadora: " << vectorDeVisualizacionPalo[embaucadora] << endl;
                        acumJug2 -= 20;
                    }
                }

            }

            // Calculamos el puntaje de cada jugador
            int puntajeJug1 = calcularPuntaje(embaucadora, vectorManoJug1, vectorPaloJug1, vectorDePuntaje);
            int puntajeJug2 = calcularPuntaje(embaucadora, vectorManoJug2, vectorPaloJug2, vectorDePuntaje);
            Sleep(300);
            vectorPuntajeJug1[ronda-1] = puntajeJug1;
            vectorPuntajeJug2[ronda-1] = puntajeJug2;
            mostrarPuntajeAcumulado(nombreJug1, nombreJug2, puntajeJug1, puntajeJug2);
            acumJug1 += puntajeJug1;
            acumJug2 += puntajeJug2;

            pausarYLimpiarPantalla();
        }

        // Mostrar la tabla de puntajes
        cout << "Tabla de Puntajes:" << endl;
        cout << "Ronda\t\t" << nombreJug1 << "\t\t" << nombreJug2 << endl;
        cout << "---------------------------------------------" << endl;
        for (int i = 0; i < 3; i++){
            cout << i + 1 << "\t\t" << vectorPuntajeJug1[i] << "\t\t" << vectorPuntajeJug2[i] << endl;
        }
        cout << "---------------------------------------------" << endl;
        cout << "Cambios\t\t" << acumJug1 - total(vectorPuntajeJug1) << "\t\t" << acumJug2 - total(vectorPuntajeJug2) << endl;
        cout << "---------------------------------------------" << endl;
        cout << "Totales\t\t" << acumJug1 << "\t\t" << acumJug2 << endl;
        cout << "---------------------------------------------" << endl;
        Sleep(500);
        // Declaracion del ganador en funcion de los puntajes acumulados
        if (acumJug1 != acumJug2){
            cout << "-----------------------------------------" << endl;
            cout << "¡¡FELICITACIONES " << (acumJug2 > acumJug1 ? nombreJug2 : nombreJug1)<< "!!! ¡¡¡HAS GANADO!!!" << endl;
            cout << "Puntaje: " << (acumJug2 > acumJug1 ? acumJug2 : acumJug1) << " puntos." << endl;
            cout << "-----------------------------------------" << endl;
        } else {
            cout << "¡¡¡Ha ocurrido un empate!!!" << endl;
            string ganador = "";
            int mejorMano = 0;
            // Aqui determinamos el ganador en funcion de la mano mas alta en caso de empate
            for (int i = 0; i < 3; i++){
                if (vectorPuntajeJug1[i] > vectorPuntajeJug2[i] && vectorPuntajeJug1[i] > mejorMano){
                    mejorMano = vectorPuntajeJug1[i];
                    ganador = nombreJug1;
                } else if (vectorPuntajeJug1[i] < vectorPuntajeJug2[i] && vectorPuntajeJug2[i] > mejorMano){
                    mejorMano = vectorPuntajeJug2[i];
                    ganador = nombreJug2;
                }
            }
            cout << "El ganador por tener la mejor mano es: " << ganador << endl;
        }
        // Registramos el valor en topScores si corresponde
        if (acumJug1 > topScorePuntaje || acumJug2 > topScorePuntaje){
            if (acumJug1 > acumJug2){
                topScoreNombre = nombreJug1;
                topScorePuntaje = acumJug1;
            } else {
                topScoreNombre = nombreJug2;
                topScorePuntaje = acumJug2;
            }
            cout << "¡¡Felicitaciones "<< topScoreNombre <<"!! Has logrado un nuevo record!" << endl;
            cout << "-----------------------------------------" << endl;
        }
        cout << "Desea jugar otra partida? S para si, N para no" << endl;

        cin >> jugarOtra;
    } while(jugarOtra == 'S');
    cout << "¡GRACIAS POR JUGAR EMBAUCADO! Espero lo hayan disfrutado" << endl;
}
