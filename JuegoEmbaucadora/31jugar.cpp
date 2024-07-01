#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <string>
#include <windows.h>
#include "rlutil.h"
#include "mainHeader.h"
#include <cctype>

using namespace std;

extern int topScorePuntaje;
extern string topScoreNombre;

// Funci�n para calcular el puntaje de la mano de un jugador en funci�n de la carta embaucadora
int calcularPuntaje(int emb, int vectorMano[], int vectorPalo[], int vectorDePuntaje[]){
    int puntaje = 0;
    for (int i = 0; i < 5; i++){
        if (vectorPalo[i] != emb){
            puntaje += vectorDePuntaje[vectorMano[i]];
        }
    }
    return puntaje;
}

// MUSICA QUE ESTAR� DE FONDO DURANTE TODO EL JUEGO (EN LOOP)
void musicaFondo(){
    PlaySound(TEXT("startSong.wav"),NULL,SND_ASYNC | SND_LOOP);
}

// Funci�n para calcular un aleatorio entre un m�ximo y m�nimo dados
int aleatorioEntre(int minimo, int maximo){
    return minimo + rand() % ((maximo + 1) - minimo);
}

// Funci�n que devuelve un booleano segun su indice para saber si ya salio o no en la mano
bool yaSalio(int indice, bool cartasSeleccionadas[]) {
    return cartasSeleccionadas[indice];
}

// Funci�n para generar una mano aleatoria
void generarManoAleatoria(int vectorMano[], int vectorPalo[], bool cartasSeleccionadas[]){
    int indice;
    int valor;
    int palo;
    for (int i=0; i<5; i++){
        do {
            valor = aleatorioEntre(0,4);
            palo = aleatorioEntre(0,3);
            indice = valor * 4 + palo;
        } while(yaSalio(indice, cartasSeleccionadas));
        cartasSeleccionadas[indice] = true;
        vectorMano[i] = valor;
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

// Funci�n para mostrar la mano de un jugador
void mostrarMano(int vectorMano[], int vectorPalo[], string vectorDeVisualizacionValor[], string vectorDeVisualizacionPalo[], int posX) {
     for (int i = 0; i < 5; i++) {
        rlutil::locate(30+posX,12+i); cout << "Carta " << i + 1 << ": " << vectorDeVisualizacionValor[vectorMano[i]]
             << " de " << vectorDeVisualizacionPalo[vectorPalo[i]] << endl;
        Sleep(300);
    }
}
// Funcion para cambiar embaucadora
bool cambioEmbaucadora(int &puntajeJugador, string nombreJugador, int &embaucadora, string vectorDeVisualizacionPalo[], int y){
    if(puntajeJugador <=20){
        return false;
    }
    char opcion;
    int embaucadoraAnt = embaucadora;
    do {
        rlutil::setColor(rlutil::GREEN);
        rlutil::locate(9,18);   cout << "========================================================================================================";
        rlutil::locate(9,19);   cout << "|";
        rlutil::locate(112,19); cout << "|";
        rlutil::locate(9,20);   cout << "========================================================================================================";
        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(13,19);  cout << nombreJugador << " Tienes la posibilidad de cambiar la embaucadora! Quieres hacerlo? S para si, N para no: ";
        //cin >> opcion;

        int confirmarCambio = 1;

        while (confirmarCambio != 0){
            switch (rlutil::getkey()){
                case   83:   //S Mayuscula
                    opcion = 'S';
                    confirmarCambio = 0 ;
                    break;
                case  115:   //S Minuscula
                    opcion = 'S';
                    confirmarCambio = 0 ;
                    break;
                case   78:   //N Mayuscula
                    opcion = 'N';
                    confirmarCambio = 0 ;
                    break;
                case  110:   //N Minuscula
                    opcion = 'N';
                    confirmarCambio = 0 ;
                    break;
                default:
                    rlutil::setColor(rlutil::RED);
                    rlutil::locate(40,21); cout << "=========================================";
                    rlutil::locate(40,22); cout << "|";
                    rlutil::locate(80,22); cout << "|";
                    rlutil::locate(40,23); cout << "=========================================";
                    rlutil::setColor(rlutil::WHITE);
                    rlutil::locate(42,22); cout << " Utilice las teclas correspondientes!";
                    break;

            }

        }
    } while (opcion != 'S' && opcion != 'N');

    rlutil::setColor(rlutil::BLACK);
    rlutil::locate(40,21); cout << "=========================================";
    rlutil::locate(40,22); cout << "|";
    rlutil::locate(80,22); cout << "|";
    rlutil::locate(40,23); cout << "=========================================";
    rlutil::locate(42,22); cout << " Utilice las teclas correspondientes!";

    if (opcion == 'S'){
        do{
            embaucadora = aleatorioEntre(0, 3);
        } while(embaucadora == embaucadoraAnt);
        rlutil::setColor(rlutil::YELLOW);
        rlutil::locate(45,22); cout << "Nueva carta embaucadora: " << vectorDeVisualizacionPalo[embaucadora] << endl;
        rlutil::setColor(rlutil::WHITE);
        puntajeJugador -= 20;
        return true;
    } else {
        return false;
    }
}

// Funci�n para mostrar el puntaje acumulado
void mostrarPuntajeAcumulado(string nombreJug1, string nombreJug2, int puntajeJug1, int puntajeJug2) {
    rlutil::locate(47,24); cout << "==== PUNTAJE DE MANO ====" << endl;
    rlutil::locate(47,25); cout << "       " << nombreJug1 << ": " << puntajeJug1 << endl;
    rlutil::locate(47,26); cout << "       " << nombreJug2 << ": " << puntajeJug2 << endl;
    rlutil::locate(47,27); cout << "=========================" << endl;
}

// Funcion para pausar y limpiar la pantalla
void pausarYLimpiarPantalla() {
    rlutil::setColor(rlutil::GREEN);
    rlutil::locate(36,29); cout << "  << ";
    rlutil::locate(80,29); cout << ">>  ";
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(41,29); system("pause");
    system("cls");

}

// Funcion para imprimir tabla y determinar el ganador
void imprimirTablaPuntajes(int x, int y, string nombreJug1, string nombreJug2, int vectorPuntajeJug1[], int vectorPuntajeJug2[], int acumJug1, int acumJug2) {

    rlutil::setColor(rlutil::YELLOW);
    rlutil::locate(52, 3);  cout << "TABLA DE PUNTAJES:" << endl;
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(x, ++y); cout << "Ronda\t\t" << nombreJug1 << "\t\t" << nombreJug2 << endl;
    rlutil::setColor(rlutil::YELLOW);
    rlutil::locate(x, ++y); cout << "=============================================" << endl;
    for (int i = 0; i < 3; i++) {
        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(x, ++y); cout << i + 1 << "\t\t" << vectorPuntajeJug1[i] << "\t\t" << vectorPuntajeJug2[i] << endl;
    }
    rlutil::setColor(rlutil::YELLOW);
    rlutil::locate(x, ++y); cout << "=============================================" << endl;
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(x, ++y); cout << "Cambios\t\t" << acumJug1 - total(vectorPuntajeJug1) << "\t\t" << acumJug2 - total(vectorPuntajeJug2) << endl;
    rlutil::setColor(rlutil::YELLOW);
    rlutil::locate(x, ++y); cout << "=============================================" << endl;
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(x, ++y); cout << "Totales\t\t" << acumJug1 << "\t\t" << acumJug2 << endl;
    rlutil::setColor(rlutil::YELLOW);
    rlutil::locate(x, ++y); cout << "=============================================" << endl;
    rlutil::locate(x, ++y); rlutil::msleep(500);  // Pausa de 500ms

    // Declaracion del ganador en funcion de los puntajes acumulados
    if (acumJug1 != acumJug2) {
        rlutil::locate(x, ++y); cout << "=========================================" << endl;
        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(x, ++y); cout << "FELICITACIONES " << (acumJug2 > acumJug1 ? nombreJug2 : nombreJug1) << "!!! HAS GANADO !!!" << endl;
        rlutil::locate(55, 19); cout << "Puntaje: " << (acumJug2 > acumJug1 ? acumJug2 : acumJug1) << " puntos." << endl;
        rlutil::setColor(rlutil::BLUE);
        rlutil::locate(38, 20); cout << "==================================================" << endl;
    } else {
        rlutil::locate(x, ++y); cout << "Ha ocurrido un empate!!!" << endl;
        string ganador = "";
        int mejorManoJugador1 = 0;
        int mejorManoJugador2 = 0;
        // Aqu� determinamos el ganador en funci�n de la mano m�s alta en caso de empate
        for (int i = 0; i < 3; i++) {
            if(mejorManoJugador1 < vectorPuntajeJug1[i]){
                mejorManoJugador1 = vectorPuntajeJug1[i];
            }
            if(mejorManoJugador2 < vectorPuntajeJug2[i]){
                mejorManoJugador2 = vectorPuntajeJug2[i];
            }
        }
        if (mejorManoJugador1 == mejorManoJugador2){
            return;
        } else if(mejorManoJugador1 > mejorManoJugador2){
            ganador = nombreJug1;
        } else {
            ganador = nombreJug2;
        }
        rlutil::locate(x, ++y); cout << "El ganador por tener la mejor mano es: " << ganador << endl;
    }
}



void jugar() {
    // Inicializar la semilla del generador de n�meros aleatorios - Esto debe ir s� o s� al inicio del programa
    srand(static_cast<unsigned int>(time(0)));
    system("cls");
    fondoVentana();

    // Constantes del Juego y declaraci�n de variables
    int vectorDePuntaje[5] = {10, 11, 12, 15, 20}; // Vector fijo con los puntajes de las cartas
    string vectorDeVisualizacionValor[5] = {"10", "J", "Q", "K", "A"}; // Vector fijo con la designacion de las cartas
    string vectorDeVisualizacionPalo[4] = {"Pica", "Trebol", "Corazon", "Diamante"}; // Vector fijo con la designaci�n de los palos
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

    rlutil::locate(45,3); cout << "Bienvenidos a EMBAUCADO!" << endl;

    do{
        acumJug1 = 0;
        acumJug2 = 0;

        rlutil::hidecursor();

        inicializarVectorEnCero(vectorPuntajeJug1, 3);
        inicializarVectorEnCero(vectorPuntajeJug2, 3);

        int confirmarNombres = 1;
        int ingresarNombres  = 1;
        // INGRESO DE NOMBRES Y VALIDACION EN CASO DE ERROR

        while(ingresarNombres!=0 ){

            fondoVentana();

            rlutil::setColor(rlutil::GREEN);
            rlutil::locate(35,5);   cout << "Por favor ingrese los nombres de los jugadores" << endl;
            rlutil::setColor(rlutil::WHITE);
            rlutil::locate(20,7);   cout << "Jugador N 1: " << endl;
            rlutil::locate(35,7);   cin  >> nombreJug1;
            rlutil::locate(70,7);   cout << "Jugador N 2: " << endl;
            rlutil::locate(85,7);   cin  >> nombreJug2;

            rlutil::setColor(rlutil::GREEN);
            rlutil::locate(40,15); cout << "=========================================";
            rlutil::locate(40,16); cout << "|";
            rlutil::locate(80,16); cout << "|";
            rlutil::locate(40,17); cout << "=========================================";
            rlutil::setColor(rlutil::WHITE);
            rlutil::locate(42,16); cout << "      Confirma los nombres? (S/N)";

            while (confirmarNombres !=0){

                switch (rlutil::getkey()) {
                    case 115: // S Minuscula
                        confirmarNombres = 0;
                        ingresarNombres  = 0;
                        rlutil::cls();
                        break;

                    case 83:  // S Mayuscula
                        confirmarNombres = 0;
                        ingresarNombres  = 0;
                        rlutil::cls();
                        break;

                    case 110: // N Minuscula
                        confirmarNombres = 0;
                        rlutil::cls();
                        break;

                    case 78: // N Mayuscula
                        confirmarNombres = 0;
                        rlutil::cls();
                        break;

                    default:
                        rlutil::setColor(rlutil::RED);
                        rlutil::locate(40,19); cout << "=========================================";
                        rlutil::locate(40,20); cout << "|";
                        rlutil::locate(80,20); cout << "|";
                        rlutil::locate(40,21); cout << "=========================================";
                        rlutil::setColor(rlutil::WHITE);
                        rlutil::locate(42,20); cout << " Utilice las teclas correspondientes!";
                        break;
                    }

                }

                if (confirmarNombres==0){
                  confirmarNombres=1;
            }
        }

        //pausarYLimpiarPantalla();
        // 3 RONDAS


            for (int ronda = 1; ronda <= 3; ronda ++){
                fondoVentana();

                inicializarVectorEnFalse(cartasSeleccionadas, 20); // Asignamos falso a todas las posiciones del vector
                int embaucadora = aleatorioEntre(0, 3); // Embaucadora
                // Generamos una mano aleatoria para cada jugador
                generarManoAleatoria(vectorManoJug1, vectorPaloJug1, cartasSeleccionadas);
                generarManoAleatoria(vectorManoJug2, vectorPaloJug2, cartasSeleccionadas);

                rlutil::setColor(rlutil::RED);
                rlutil::locate(52,3); cout << "EMBAUCADO!" << endl;

                rlutil::setColor(rlutil::WHITE);
                rlutil::locate(43,5); cout << "RONDA N: " << ronda << "   " << nombreJug1 << " vs " << nombreJug2 << endl;
                rlutil::locate(40,6); cout << "===================================" << endl;
                // Mostrar la carta embaucadora
                rlutil::locate(40,7); cout << "    Carta embaucadora: " << vectorDeVisualizacionPalo[embaucadora] << endl;
                rlutil::locate(40,8);cout << "===================================" << endl;

                // Mostrar la mano del Jugador 1
                rlutil::locate(35,11); cout <<nombreJug1 <<" (" << acumJug1 <<"):" << endl;
                mostrarMano(vectorManoJug1, vectorPaloJug1, vectorDeVisualizacionValor, vectorDeVisualizacionPalo,0);

                // Mostrar la mano del Jugador 2

                rlutil::locate(75,11); cout <<nombreJug2 <<" (" << acumJug2 <<"):" << endl;
                mostrarMano(vectorManoJug2, vectorPaloJug2, vectorDeVisualizacionValor, vectorDeVisualizacionPalo,40);

                // M�dulo para cambiar carta embaucadora en funci�n del puntaje acumulado y la selecci�n del jugador
                if (ronda == 2){
                    embaucadoraAnt = embaucadora;
                    if (!cambioEmbaucadora(acumJug1, nombreJug1, embaucadora, vectorDeVisualizacionPalo,19)){
                        cambioEmbaucadora(acumJug2, nombreJug2, embaucadora, vectorDeVisualizacionPalo, 20);
                    }
                } else if (ronda == 3) {
                    if (!cambioEmbaucadora(acumJug2, nombreJug2, embaucadora, vectorDeVisualizacionPalo, 19)){
                        cambioEmbaucadora(acumJug1, nombreJug1, embaucadora, vectorDeVisualizacionPalo, 20);
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
                rlutil::locate(1,30);
                pausarYLimpiarPantalla();
            }
        fondoVentana();
        imprimirTablaPuntajes(40, 5, nombreJug1, nombreJug2, vectorPuntajeJug1, vectorPuntajeJug2,acumJug1, acumJug2);

        // Registramos el valor en topScores si corresponde
        if (acumJug1 > topScorePuntaje || acumJug2 > topScorePuntaje){
            if (acumJug1 > acumJug2){
                topScoreNombre = nombreJug1;
                topScorePuntaje = acumJug1;
            } else {
                topScoreNombre = nombreJug2;
                topScorePuntaje = acumJug2;
            }
            rlutil::setColor(rlutil::WHITE);
            rlutil::locate(38,17);cout << "Felicitaciones "<< topScoreNombre <<"!! Has logrado un nuevo record!" << endl;
            rlutil::setColor(rlutil::BLUE);
            rlutil::locate(38,18);cout << "==================================================" << endl;
        }
        rlutil::setColor(rlutil::GREEN);
        rlutil::locate(38,21); cout << "==================================================";
        rlutil::locate(38,22); cout << "|";
        rlutil::locate(87,22); cout << "|";
        rlutil::locate(38,23); cout << "==================================================";
        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(40,22); cout << "Desea jugar otra partida? S para si, N para no" << endl;

        int salirJuego = 1;

        while (salirJuego !=0) {
            switch (rlutil::getkey()) {
                    case 115: // S Minuscula
                        jugarOtra = 'S';
                        salirJuego = 0;
                        rlutil::cls();
                        break;

                    case 83:  // S Mayuscula
                        jugarOtra = 'S';
                        salirJuego = 0;
                        rlutil::cls();
                        break;

                    case 110: // N Minuscula
                        jugarOtra = 'N';
                        salirJuego = 0;
                        rlutil::cls();
                        break;

                    case 78: // N Mayuscula
                        jugarOtra = 'N';
                        salirJuego = 0;
                        rlutil::cls();
                        break;

                    default:
                        rlutil::setColor(rlutil::RED);
                        rlutil::locate(42,24); cout << "=========================================";
                        rlutil::locate(42,25); cout << "|";
                        rlutil::locate(82,25); cout << "|";
                        rlutil::locate(42,26); cout << "=========================================";
                        rlutil::setColor(rlutil::WHITE);
                        rlutil::locate(44,25); cout << " Utilice las teclas correspondientes!";
                        break;
                    }
        }
    } while(jugarOtra == 'S');
}



