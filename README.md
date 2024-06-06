# utn.tup.progra1.tp2

Trabajo Práctico 
Categoría: Juego en consola
Cantidad de integrantes del grupo: De dos a cuatro personas



### Reglas del juego

Embaucado es un juego de naipes para dos jugadores que puede jugarse con algunas cartas de la baraja francesa y con un mazo de cartas especiales llamado figuras.
Las cartas de la baraja francesa a utilizar son los 10, J, Q, K y A de las cuatro figuras Corazón, Diamantes, Picas y Tréboles. En total son 20 cartas.
Del mazo de figuras solamente se cuenta con 4 cartas: Corazón, Diamante, Pica y Trébol. Estas cartas, como se puede observar, no disponen de valor sino de una figura.

Una partida de Embaucado la gana quien haya obtenido más puntos a lo largo de tres rondas. En cada ronda los jugadores reciben cinco cartas al azar que se denominan mano. Además, se da vuelta sobre la mesa una carta de las figuras. Esta carta se denomina embaucadora y es la que da nombre al juego.

El puntaje de cada jugador se determina a partir de los naipes de su mano y la carta embaucadora es la que impide que el jugador pueda sumar puntaje.


### Desarrollo de la partida
Veamos un ejemplo de una ronda y las manos de sus jugadores:

Ronda N° 1
Jugador 1: Ross
Puntos: 0
Jugador 2: Chandler
Puntos: 0
10 de Corazón
J de Diamante
K de Pica
Q de Corazón
A de Corazón
J de Corazón
10 de Diamante
Q de Pica
Q de Trébol
Q de Diamante
Carta embaucadora: Corazón


Para la ronda n° 1, los puntajes se calculan en base a los valores de las cartas obtenidas a excepción de aquellas cuyos palos coincidan con los de la carta embaucadora.
En el caso del Jugador 1, los naipes de su mano que no fueron embaucados son: J de Diamante y K de Pica.
En el caso del Jugador 2, los naipes de su mano que no fueron embaucados son: 10 de Diamante, Q de Pica, Q de Trébol y Q de Diamante.

Una vez determinados los naipes es necesario calcular los puntajes de la ronda. Los mismos se calculan a partir de la siguiente tabla:

Naipe
Puntaje
10
10
J
11
Q
12
K
15
A
20


El puntaje de la ronda 1 para el jugador 1 es:
J de Diamante (11) + K de Pica (15) → 26 puntos

El puntaje de la ronda 1 para el jugador 2 es:
10 de Diamante (10), Q de Pica (12), Q de Trébol (12) y Q de Diamante (12) → 46 puntos

Como se puede observar, las cartas embaucadas de cada jugador no son utilizadas para el cálculo de sus respectivos puntajes.

Esta mecánica de juego se repite tres veces y quien logre la mayor cantidad de puntos en total entre todas las rondas es la persona ganadora del juego.

Por último, existe otra mecánica a partir de la ronda 2 que permite a los jugadores sacrificar 20 puntos de los acumulados para poder cambiar la carta embaucadora. Luego de haber recibido las cartas y que se haya revelado cuál es la carta embaucadora de la ronda, cada jugador puede decidir sacrificar 20 puntos para que la carta embaucadora se vuelva a obtener. Si un jugador en una ronda utiliza este sacrificio de puntos entonces el otro jugador no puede utilizarlo. Sólo pueden hacerlo si disponen de al menos 20 puntos para restar.
En la ronda 2, es el jugador 1 quien puede acceder a sacrificar puntos primero y si no lo hace, puede hacerlo el jugador 2.
En la ronda 3, es el jugador 2 quien puede acceder a sacrificar puntos primero y si no lo hace, puede hacerlo el jugador 1.

### Ejemplo:
Supongamos que, al repartir las cartas, las manos de los jugadores son las siguientes:

Ronda N° 2
Jugador 1: Ross
Puntos: 26
Jugador 2: Chandler
Puntos: 46
10 de Corazón
J de Corazón
K de Corazón
Q de Corazón
A de Corazón
J de Trébol
10 de Trébol
Q de Pica
Q de Trébol
A de Trébol
Carta embaucadora: Corazón


El jugador 1 obtendría 0 pts ya que todas sus cartas fueron embaucadas. La jugadora 2 recibiría 65 puntos por las cartas que tiene en su mano.
Ahora, el jugador 1 opta por sacrificar 20 puntos de sus actuales 26 para poder modificar la carta embaucadora. Se vuelve a repartir una carta embaucadora y ahora la figura de la misma es Trébol.

Los puntajes recalculados para la ronda 2 serían los siguientes:

Jugador 1 → 10 de Corazón (10), J de Corazón (11), K de Corazón (15), Q de Corazón (12) y A de Corazón (20) → 68 puntos.
Jugador 2 → Q de Pica (12) → 12 puntos.

Los puntajes totales hasta el momento serían:

Jugador 1→ 6 puntos + 68 puntos = 74 puntos
Jugador 2 → 46 puntos + 12 puntos = 58 puntos

### Fin de la partida
Luego de haber transcurrido las tres rondas, quien haya obtenido más puntos en total es quien gana la partida. En el caso de que ambos jugadores se encuentren empatados al finalizar, ganará aquel jugador que haya obtenido más puntos en una ronda.

Por ejemplo:
Jugador 1
Jugador 2
Ronda
Puntos
Ronda
Puntos
1
0
1
10
2
20
2
10
3
10
3
10


Dado el caso como el que se visualiza en la tabla que figura arriba, ambos jugadores llegaron al final de la partida con 30 puntos. Sin embargo, el ganador de la partida es el jugador 1 por haber tenido una ronda en la que registró el puntaje más alto.

Si ocurre el caso en que ambos jugadores también empaten con este criterio secundario de desempate entonces no habrá ganador y el juego terminará en empate.

### Actividad

Realizar el juego de Embaucado en C++ para dos jugadores humanos. El juego debe contar con un menú principal con las siguientes opciones:
EMBAUCADO
---------------------
1 - JUGAR
2 - ESTADÍSTICAS
3 - CRÉDITOS
---------------------
0 - SALIR


La opción jugar, debe permitir iniciar un nuevo juego de Embaucado. Antes de comenzar el juego debe solicitar a los jugadores el nombre.

EMBAUCADO
------------------------------------------------------------------------
Antes de comenzar deben registrar sus nombres:

¿Nombre del Jugador 1? Ross
¿Nombre del Jugador 2? Chandler

¿Confirmar nombres? (S/N)

------------------------------------------------------------------------


Luego, el juego debe mostrar la información necesaria para que los usuarios puedan jugarlo. Esto, como mínimo, debe ser: el número de ronda actual, los nombres de los jugadores que están jugando y los puntajes de los jugadores que están jugando.

Ejemplo en Ronda 1
EMBAUCADO
------------------------------------------------------------------------
RONDA #1
Ross Vs Chandler

+-------------------------+
|                         |
| Ross (0 puntos)         |
|     10 Corazones        |
|     J Diamantes         |
|     K Picas             |
|     Q Corazones         |
|     A Corazones         |
|                         |
|                         |
|                         |
| Chandler (0 puntos)     |
|     J Corazones         |
|     10 Diamantes        |
|     Q Picas             |
|     Q Tréboles          |
|     Q Diamantes         |
|                         |
|  Embaucadora: Corazón   |
|                         |
+-------------------------+

Puntajes obtenidos:
------------------------------------------------------------------------
Ross: 11 + 25 = 26 puntos
Chandler: 10 + 12 + 12 + 12 = 46 puntos





Ejemplo en Ronda 2
EMBAUCADO
------------------------------------------------------------------------
RONDA #1
Ross Vs Chandler

+-------------------------+
|                         |
| Ross (20 puntos)        |
|     10 Corazones        |
|     J Picas             |
|     J Diamantes         |
|     K Corazones         |
|     10 Tréboles         |
|                         |
|                         |
|                         |
| Chandler (30 puntos)    |
|     J Corazones         |
|     Q Picas             |
|     10 Diamantes        |
|     A Picas             |
|     K Picas             |
|                         |
|  Embaucadora: Pica      |
|                         |
+-------------------------+

Ross, ¿Deseas modificar la carta embaucadora actual (Pica)? (S/N):





En las rondas 2 y 3, el programa debe consultar a los jugadores si desean modificar la carta embaucadora actual. Esto debe realizarse antes de calcular los puntajes. El puntaje de las rondas 2 y 3 se muestra únicamente luego de la etapa de preguntas de cambio de carta embaucadora.

El programa debe tener todas las validaciones en el ingreso de datos que sean necesarias para que el juego no registre ninguna inconsistencia. En el caso de la pantalla anterior, el usuario solamente podrá ingresar S o N ante la pregunta que realiza el programa y únicamente podrá modificar la carta embaucadora si la cantidad de puntos supera los 20 necesarios para realizar el sacrificio.

Atento a estas validaciones, no será necesario validar que el usuario ingresará texto donde se ingresan números. Por lo que, en este sentido, dicha situación puede considerarse en ambiente ideal.

Fin de la partida

EMBAUCADO
------------------------------------------------------------------------

RONDA        Ross        Chandler
------------------------------------------------------------------------
  1           26            46
  2           30            30
  3           10            60
------------------------------------------------------------------------
TOTAL         66           136                                

GANADOR: Chandler con 136 puntos de victoria.      

Presionar 0 para continuar...


La opción estadísticas, debe mostrar el nombre del jugador que haya obtenido la mayor cantidad de puntos y dicha cantidad. Si se juegan varias partidas de Embaucado debe guardar los datos del mejor puntaje (siempre y cuando la aplicación no sea cerrada; en ese caso el puntaje volverá a 0).

La opción créditos, debe mostrar los apellidos, nombres y legajos de los integrantes del equipo. Así como también el número de grupo.

La opción salir, debe salir del juego previa confirmación del usuario.


Créditos

Imágenes de naipes generadas con Ideogram.
Juego inventado por Angel Simón. Inspirado levemente en un juego Push your luck de Bob Lancaster - https://www.myabandonware.com/game/microlink-push-your-luck-yj .
Nombre del juego basado en la serie Friends.


Favor de no imprimir este documento. Se visualiza mejor en un navegador.

