#include <iostream>
#include <locale>
#include "rlutil.h"
#include "mainHeader.h"
using namespace std;

void reglas(){
    rlutil::hidecursor();
    rlutil::cls();


    int opcion = 1;
    int siguiente = 1;
    while (opcion != 0){

        while (siguiente != 32){

            rlutil::setBackgroundColor(rlutil::BLACK);
            rlutil::cls();
            fondoVentana();

            rlutil::locate(50,2);  cout << "REGLAS DEL JUEGO    1/2";
            rlutil::locate(5,4);   cout << "Embaucado es un juego de naipes para dos jugadores que puede jugarse con algunas cartas de la baraja francesa";
            rlutil::locate(5,5);   cout << "y con un mazo de cartas especiales llamado figuras. Las cartas de la baraja francesa a utilizar son los 10, J,";
            rlutil::locate(5,6);   cout << "Q, K y A de las cuatro figuras Corazón, Diamantes, Picas y Tréboles. En total son 20 cartas.";
            rlutil::locate(5,7);   cout << "Del mazo de figuras solamente se cuenta con 4 cartas: Corazón, Diamante, Pica y Trébol. Estas cartas como se" ;
            rlutil::locate(5,8);   cout << "puede observar, no disponen de valor sino de una figura.";
            rlutil::locate(5,10);  cout << "Una partida de Embaucado la gana quien haya obtenido más puntos a lo largo de tres rondas. En cada ronda los";
            rlutil::locate(5,11);  cout << "jugadores reciben cinco cartas al azar que se denominan mano. Además, se da vuelta sobre la mesa una carta de";
            rlutil::locate(5,12);  cout << "las figuras. Esta carta se denomina embaucadora y es la que da nombre al juego.";
            rlutil::locate(30,14); cout << "El puntaje de cada jugador se determina a partir de los naipes de su mano y la carta";
            rlutil::locate(30,15); cout << "embaucadora es la que impide que el jugador pueda sumar puntaje";
            rlutil::locate(30,17); cout << "TENER EN CUENTA LO SIGUIENTE: ";
            rlutil::locate(30,19); cout << "- Las cartas embaucadas de cada jugador no son utilizadas para el cálculo de sus";
            rlutil::locate(30,20); cout << "  respectivos puntajes.";
            rlutil::locate(30,21); cout << "- Esta mecánica de juego se repite tres veces y quien logre la mayor cantidad de ";
            rlutil::locate(30,22); cout << "  puntos en total entre todas las rondas es la persona ganadora del juego";
            rlutil::locate(30,23); cout << "- Existe otra mecánica a partir de la ronda 2 la cual permite a los jugadores";
            rlutil::locate(30,24); cout << "  sacrificar 20 puntos de los acumulados para poder cambiar la carta embaucadora.";
            rlutil::locate(30,25); cout << "  Luego de haber recibido las cartas y que se haya revelado cuál es la carta ";
            rlutil::locate(30,26); cout << "  embaucadora de la ronda, cada jugador puede decidir sacrificar 20 puntos para ";
            rlutil::locate(30,27); cout << "  que la carta embaucadora se vuelva a obtener.";
            rlutil::locate(8,14);  cout << "TABLA DE VALORES ";
            rlutil::locate(5,15);  cout << "======================";
            rlutil::locate(5,16);  cout << "|  NAIPE  |  PUNTAJE |";
            rlutil::locate(5,17);  cout << "======================";
            rlutil::locate(5,18);  cout << "|   10    |    10    |";
            rlutil::locate(5,19);  cout << "======================";
            rlutil::locate(5,20);  cout << "|   J     |    11    |";
            rlutil::locate(5,21);  cout << "======================";
            rlutil::locate(5,22);  cout << "|   Q     |    12    |";
            rlutil::locate(5,23);  cout << "======================";
            rlutil::locate(5,24);  cout << "|   K     |    15    |";
            rlutil::locate(5,25);  cout << "======================";
            rlutil::locate(5,26);  cout << "|   A     |    20    |";
            rlutil::locate(5,27);  cout << "======================";
            rlutil::setColor(rlutil::GREEN);
            rlutil::locate(18,29); cout << "  <ESC>";
            rlutil::locate(65,29); cout << "  <ESP>";
            rlutil::setColor(rlutil::WHITE);
            rlutil::locate(25,29); cout << " para volver al menu principal  ";
            rlutil::locate(72,29); cout << " para ir a la siguiente página  ";

            switch (rlutil::getkey()){
                case 32:
                    siguiente = 32;
                    break;
                case  0:
                    siguiente = 32;
                    menuJuego();
                    break;
                }
        }

        siguiente = 1; // RESIGNAMOS VALOR A SIGUIENTE

        while (siguiente != 32){

            rlutil::setBackgroundColor(rlutil::BLACK);
            rlutil::cls();
            fondoVentana();

            rlutil::locate(50,2);   cout << "REGLAS DEL JUEGO    2/2";
            rlutil::locate(5,4);    cout << "TENER EN CUENTA LO SIGUIENTE: ";
            rlutil::locate(5,6);    cout << "- Si un jugador en una ronda utiliza este sacrificio de puntos entonces el otro jugador no puede utilizarlo.";
            rlutil::locate(5,7);    cout << "  Sólo pueden hacerlo si disponen de al menos 20 puntos para restar.";
            rlutil::locate(5,8);    cout << "- En la ronda 2, es el jugador 1 quien puede acceder a sacrificar puntos primero y si no lo hace, puede ";
            rlutil::locate(5,9);    cout << "  hacerlo el jugador 2.";
            rlutil::locate(5,10);   cout << "- En la ronda 3, es el jugador 2 quien puede acceder a sacrificar puntos primero y si no lo hace, puede ";
            rlutil::locate(5,11);   cout << "  hacerlo el jugador 1.";
            rlutil::locate(5,13);   cout << "FIN DE LA PARTIDA: ";
            rlutil::locate(5,15);   cout << "Luego de haber transcurrido las tres rondas, quien haya obtenido más puntos en total es quien gana la partida.";
            rlutil::locate(5,16);   cout << "En el caso de que ambos jugadores se encuentren empatados al finalizar, ganará aquel jugador que haya obtenido";
            rlutil::locate(5,17);   cout << "más puntos en una ronda.";
            rlutil::locate(5,19);   cout << "Si ocurre el caso en que ambos jugadores también empaten con este criterio secundario de desempate entonces ";
            rlutil::locate(5,20);   cout << "no habrá ganador y el juego terminará en empate.";
            rlutil::setColor(rlutil::GREEN);
            rlutil::locate(18,29);  cout << "  <ESC>";
            rlutil::locate(65,29);  cout << "  <ESP>";
            rlutil::setColor(rlutil::WHITE);
            rlutil::locate(25,29);  cout << " para volver al menu principal  ";
            rlutil::locate(72,29);  cout << " para ir a la siguiente página  ";

            switch (rlutil::getkey()){
                case 32:
                   siguiente = 32;
                case 0:
                    siguiente = 32;
                    menuJuego();
                    break;
                }
            }





           switch(rlutil::getkey()){
            case 0:
                rlutil::cls();
                menuJuego();
                break;
            }


        }

    }




