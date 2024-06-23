#include <iostream>
#include <locale>
#include "rlutil.h"
#include "mainHeader.h"
using namespace std;

void reglas(){
    rlutil::hidecursor();
    rlutil::cls();

    // Varibales a utilizar
    int corteReglas = 1;
    int paginaSiguiente = 1;

    while (corteReglas != 0){



        while (paginaSiguiente != 32){

            rlutil::setBackgroundColor(rlutil::BLACK);
            rlutil::cls();
            fondoVentana();

            rlutil::locate(50,2);  cout << "REGLAS DEL JUEGO    1/5";

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
            rlutil::locate(59,29); cout << "  <ESPACIO>";
            rlutil::setColor(rlutil::WHITE);
            rlutil::locate(25,29); cout << " para volver al menu principal  ";
            rlutil::locate(70,29); cout << " para ir a la siguiente página  ";

            switch (rlutil::getkey()){
                case 32:
                    paginaSiguiente = 32;
                    break;
                case  0:
                    paginaSiguiente = 32;
                    corteReglas = 0;
                    break;
                default:
                    break;
                }
        }

        if (paginaSiguiente == 32 && corteReglas == 0){
            rlutil::cls();
            break;
        }else if(paginaSiguiente == 32){
            paginaSiguiente = 1; // REASIGNAMOS VALOR
        }

        while (paginaSiguiente != 32){

            rlutil::setBackgroundColor(rlutil::BLACK);
            rlutil::cls();
            fondoVentana();

            rlutil::locate(50,2);  cout << "REGLAS DEL JUEGO    2/5";


            rlutil::locate(5,4);   cout << "DESARROLLO DE LA PARTIDA: ";
            rlutil::locate(5,6);   cout << "Veamos un ejemplo de una ronda y las manos de sus jugadores:";

            rlutil::locate(5,8);   cout << "=================================================================";
            rlutil::locate(5,9);   cout << "|                         RONDA N 1                             |";
            rlutil::locate(5,10);  cout << "=================================================================";
            rlutil::locate(5,11);  cout << "| Jugador1: Ross | Puntos: 0  | Jugador2: Chandler | Puntos: 0  |";
            rlutil::locate(5,12);  cout << "=================================================================";
            rlutil::locate(5,13);  cout << "| 10 de Diamante              | J  de Corazon                   |";
            rlutil::locate(5,14);  cout << "| J  de Diamante              | 10 de Diamante                  |";
            rlutil::locate(5,15);  cout << "| K  de Pica                  | Q  de Pica                      |";
            rlutil::locate(5,16);  cout << "| Q  de Corazon               | Q  de Trebol                    |";
            rlutil::locate(5,17);  cout << "| A  de Corazon               | Q  de Diamante                  |";
            rlutil::locate(5,18);  cout << "=================================================================";
            rlutil::locate(5,19);  cout << "| Carta embaucadora: CORAZON                                    |";
            rlutil::locate(5,20);  cout << "=================================================================";

            rlutil::locate(72,8);  cout << " Para  la RONDA N 1 los  puntajes se calculan";
            rlutil::locate(72,9);  cout << "en base a los valores de las cartas obtenidas";
            rlutil::locate(72,10); cout << "a excepción de aquellas cuyos palos coincidan";
            rlutil::locate(72,11); cout << "con los de la carta embaucadora.";
            rlutil::locate(72,13); cout << " En el caso del  Jugador 1, los naipes  de su";
            rlutil::locate(72,14); cout << "mano  que no fueron  embaucados  son:  J  de ";
            rlutil::locate(72,15); cout << "Diamante y K de Pica.";


            rlutil::locate(72,17); cout << "En el  caso del  Jugador 2, los  naipes de su";
            rlutil::locate(72,18); cout << "mano  que  no fueron  embaucados son: 10  de ";
            rlutil::locate(72,19); cout << "Diamante, Q de  Pica, Q de  Trébol  y Q  de ";
            rlutil::locate(72,20); cout << "Diamante.";

            rlutil::locate(5,22);  cout << "Una vez determinados los naipes es necesario calcular los puntajes de la ronda. Los mismos se calculan a partir";
            rlutil::locate(5,22);  cout << "de la valores suministrada en la seccion anterior";

            rlutil::locate(5,24);  cout << "El puntaje de la RONDA 1 para el jugador 1 es:";
            rlutil::locate(5,25);  cout << "J de Diamante (11) + K de Pica (15) = 26 puntos";

            rlutil::locate(60,24); cout << "El puntaje de la RONDA 1 para el jugador 2 es:";
            rlutil::locate(60,25); cout << "10 de Diamante (10) + Q de Pica (12) + Q de Trebol (12)";
            rlutil::locate(60,26); cout << "+ Q de Diamante (12) = 46 puntos";


            rlutil::setColor(rlutil::GREEN);
            rlutil::locate(18,29); cout << "  <ESC>";
            rlutil::locate(59,29); cout << "  <ESPACIO>";
            rlutil::setColor(rlutil::WHITE);
            rlutil::locate(25,29); cout << " para volver al menu principal  ";
            rlutil::locate(70,29); cout << " para ir a la siguiente página  ";

            switch (rlutil::getkey()){
                case 32:
                   paginaSiguiente = 32;
                   break;
                case 0:
                    paginaSiguiente = 32;
                    corteReglas = 0;
                    break;
                default:
                    break;
                }
        }

        if (paginaSiguiente == 32 && corteReglas == 0){
            rlutil::cls();
            break;
        }else if(paginaSiguiente == 32){
            paginaSiguiente = 1; // REASIGNAMOS VALOR
        }

        while (paginaSiguiente != 32){

            rlutil::setBackgroundColor(rlutil::BLACK);
            rlutil::cls();
            fondoVentana();

            rlutil::locate(50,2);  cout << "REGLAS DEL JUEGO    3/5";

            rlutil::locate(5,4);   cout << "Como se puede observar, las cartas  embaucadas de cada jugador no son utilizadas para el calculo de sus";
            rlutil::locate(5,5);   cout << "respectivos puntajes.";

            rlutil::locate(5,7);   cout << "Esta mecanica de juego se repite tres veces y quien logre la mayor cantidad de puntos en total entre todas";
            rlutil::locate(5,8);   cout << "las rondas es la persona ganadora del juego.";

            rlutil::locate(5,10);  cout << "Por último, existe otra mecánica a partir de la ronda 2 que permite a los jugadores sacrificar 20 puntos de";
            rlutil::locate(5,11);  cout << "los acumulados para poder cambiar la carta  embaucadora.  Luego de haber recibido las cartas  y que se haya";
            rlutil::locate(5,12);  cout << "revelado cuál es la carta embaucadora de la ronda, cada jugador puede decidir sacrificar 20 puntos para que";
            rlutil::locate(5,13);  cout << "la carta  embaucadora se  vuelva a  obtener.  Si un jugador en una ronda  utiliza este sacrificio de puntos";
            rlutil::locate(5,14);  cout << "entonces el otro  jugador no puede utilizarlo.  Sólo pueden hacerlo si disponen de al menos 20 puntos  para";
            rlutil::locate(5,15);  cout << "restar.";

            rlutil::locate(5,17);  cout << "- En la ronda 2, es el jugador 1 quien puede acceder a sacrificar puntos primero y si no lo hace, puede ";
            rlutil::locate(5,18);  cout << "  hacerlo el jugador 2.";
            rlutil::locate(5,20);  cout << "- En la ronda 3, es el jugador 2 quien puede acceder a sacrificar puntos primero y si no lo hace, puede ";
            rlutil::locate(5,21);  cout << "  hacerlo el jugador 1.";

            rlutil::locate(35,25); cout << "Analizaremos este caso en la siguiente pagina == >";


            rlutil::setColor(rlutil::GREEN);
            rlutil::locate(18,29); cout << "  <ESC>";
            rlutil::locate(59,29); cout << "  <ESPACIO>";
            rlutil::setColor(rlutil::WHITE);
            rlutil::locate(25,29); cout << " para volver al menu principal  ";
            rlutil::locate(70,29); cout << " para ir a la siguiente página  ";

            switch (rlutil::getkey()){
                case 32:
                   paginaSiguiente = 32;
                   break;
                case 0:
                    paginaSiguiente = 32;
                    corteReglas = 0;
                    break;
                default:
                break;
                }
        }

        if (paginaSiguiente == 32 && corteReglas == 0){
            rlutil::cls();
            break;
        }else if(paginaSiguiente == 32){
            paginaSiguiente = 1; // REASIGNAMOS VALOR
        }

        while (paginaSiguiente != 32){

            rlutil::setBackgroundColor(rlutil::BLACK);
            rlutil::cls();
            fondoVentana();

            rlutil::locate(50,2);  cout << "REGLAS DEL JUEGO    4/5";

            rlutil::locate(5,4);   cout << "EJEMPLO";
            rlutil::locate(5,5);   cout << "Supongamos que, al repartir las cartas, las manos de los jugadores son las siguientes:";

            rlutil::locate(5,7);   cout << "===================================================================";
            rlutil::locate(5,8);   cout << "|                          RONDA N 2                              |";
            rlutil::locate(5,9);   cout << "===================================================================";
            rlutil::locate(5,10);  cout << "| Jugador1: Ross | Puntos: 26  | Jugador2: Chandler | Puntos: 46  |";
            rlutil::locate(5,11);  cout << "===================================================================";
            rlutil::locate(5,12);  cout << "| 10 de Corazon                | J  de Trebol                     |";
            rlutil::locate(5,13);  cout << "| J  de Corazon                | 10 de Trebol                     |";
            rlutil::locate(5,14);  cout << "| K  de Corazon                | Q  de Pica                       |";
            rlutil::locate(5,15);  cout << "| Q  de Corazon                | Q  de Trebol                     |";
            rlutil::locate(5,16);  cout << "| A  de Corazon                | A  de Trebol                     |";
            rlutil::locate(5,17);  cout << "===================================================================";
            rlutil::locate(5,18);  cout << "| Carta embaucadora: CORAZON                                      |";
            rlutil::locate(5,19);  cout << "===================================================================";

            rlutil::locate(74,7);  cout << "El jugador 1 obtendría 0 pts ya que todas";
            rlutil::locate(74,8);  cout << "sus cartas fueron embaucadas. El jugador 2";
            rlutil::locate(74,9);  cout << "recibira 65  puntos por  las cartas  que";
            rlutil::locate(74,10); cout << "tiene en su mano.";

            rlutil::locate(74,12); cout << "Ahora, el jugador 1 opta por sacrificar 20";
            rlutil::locate(74,13); cout << "puntos  de sus actuales  26  para  poder ";
            rlutil::locate(74,14); cout << "modificar la carta embaucadora. Se vuelve";
            rlutil::locate(74,15); cout << "a repartir una carta embaucadora y  ahora ";
            rlutil::locate(74,16); cout << "la figura de la misma es Trébol.";

            rlutil::locate(5,21);  cout << "Los puntajes recalculados para la ronda 2 serían los siguientes:";
            rlutil::locate(5,23);  cout << "Jugador 1 : 10 de Corazón (10), J de Corazón (11), K de Corazón (15), Q de Corazón (12) y A de Corazón (20)";
            rlutil::locate(5,24);  cout << "Jugador 1 = 68 puntos";
            rlutil::locate(5,26);  cout << "Jugador 2 : Q de Pica (12)";
            rlutil::locate(5,27);  cout << "Jugador 2 = 12 puntos";

            rlutil::setColor(rlutil::GREEN);
            rlutil::locate(18,29);  cout << "  <ESC>";
            rlutil::locate(59,29);  cout << "  <ESPACIO>";
            rlutil::setColor(rlutil::WHITE);
            rlutil::locate(25,29);  cout << " para volver al menu principal  ";
            rlutil::locate(70,29);  cout << " para ir a la siguiente página  ";

            switch (rlutil::getkey()){
                case 32:
                   paginaSiguiente = 32;
                   break;
                case 0:
                    paginaSiguiente = 32;
                    corteReglas = 0;
                    break;
                default:
                    break;
                }
        }

        if (paginaSiguiente == 32 && corteReglas == 0){
            rlutil::cls();
            break;
        }else if(paginaSiguiente == 32){
            paginaSiguiente = 1; // REASIGNAMOS VALOR
        }

        while (paginaSiguiente != 32){

            rlutil::setBackgroundColor(rlutil::BLACK);
            rlutil::cls();
            fondoVentana();

            rlutil::locate(50,2);   cout << "REGLAS DEL JUEGO    5/5";

            rlutil::locate(5,4);    cout << "Los puntajes totales hasta el momento serian:";
            rlutil::locate(5,6);    cout << "Jugador 1 : 6 puntos + 68 puntos = 74 puntos";
            rlutil::locate(5,7);    cout << "Jugador 2 : 46 puntos + 12 puntos = 58 puntos";

            rlutil::locate(5,9);    cout << "FIN DE LA PARTIDA: ";

            rlutil::locate(5,11);   cout << "Luego de haber transcurrido las tres rondas, quien haya obtenido más puntos en total es quien gana la partida.";
            rlutil::locate(5,12);   cout << "En el caso de que ambos jugadores se encuentren empatados al finalizar, ganará aquel jugador que haya obtenido";
            rlutil::locate(5,13);   cout << "más puntos en una ronda.";

            rlutil::locate(5,15);   cout << "Por ejemplo:";

            rlutil::locate(5,17);   cout << "==========================================";
            rlutil::locate(5,18);   cout << "|    JUGADOR 1     |      JUGADOR 2      |";
            rlutil::locate(5,19);   cout << "==========================================";
            rlutil::locate(5,20);   cout << "|  RONDA  | PUNTOS  |  RONDA  |  PUNTOS  |";
            rlutil::locate(5,21);   cout << "==========================================";
            rlutil::locate(5,22);   cout << "|    1    |    0    |    1    |    10    |";
            rlutil::locate(5,23);   cout << "|    2    |    20   |    2    |    10    |";
            rlutil::locate(5,24);   cout << "|    3    |    1    |    3    |    10    |";
            rlutil::locate(5,25);   cout << "==========================================";

            rlutil::locate(50,17);  cout << "Dado el caso como el que se visualiza en la tabla ,ambos jugadores";
            rlutil::locate(50,18);  cout << "llegaron al final de la partida con 30 puntos. ";
            rlutil::locate(50,20);  cout << "Sin embargo,  el ganador  de la partida es el jugador 1 por  haber ";
            rlutil::locate(50,21);  cout << "tenido una ronda en la que registró el puntaje más alto.";


            rlutil::locate(50,23);  cout << "Si ocurre el caso en que ambos jugadores también empaten con  este";
            rlutil::locate(50,24);  cout << "criterio secundario de desempate entonces no habrá ganador y el ";
            rlutil::locate(50,25);  cout << "terminará en empate.";

            rlutil::setColor(rlutil::GREEN);
            rlutil::locate(18,29);  cout << "  <ESC>";
            rlutil::locate(65,29);  cout << "  <R>";
            rlutil::setColor(rlutil::WHITE);
            rlutil::locate(25,29);  cout << " para volver al menu principal  ";
            rlutil::locate(70,29);  cout << " para volver al inicio de Reglas  ";

            switch (rlutil::getkey()){
                case 114: // R Minuscula
                    paginaSiguiente = 32;
                    break;
                case 82 : // R Mayuscula
                    paginaSiguiente = 32;
                    break;
                case 0:
                    paginaSiguiente = 32;
                    corteReglas = 0;
                    break;
                default:
                    break;
                }
            }

            if (paginaSiguiente == 32 && corteReglas == 0){
                rlutil::cls();
                break;
            }else if(paginaSiguiente == 32){
                paginaSiguiente = 1; // REASIGNAMOS VALOR
                rlutil::cls();
            }
        }
}




