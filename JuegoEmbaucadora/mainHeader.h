#ifndef MAINHEADER_H_INCLUDED
#define MAINHEADER_H_INCLUDED

// GUARDS (DEBEN ESTAR PARA QUE EL PROCESO DE COMPILACIÓN SEA EXITOSO)
// AQUI SE DECLARAN LAS FUNCIONES

// CAPAS PRINCIPALES
void intro();
void menuJuego();
void salir();

//SUBCAPAS
    // JUGAR
    void jugar();
    int  calcularPuntaje();
    int  aleatorioEntre();
    bool yaSalio();
    void generarManoAleatoria();
    int  total();
    void inicializarVectorEnFalse();
    void inicializarVectorEnCero();
    void mostrarMano();
    void mostrarPuntajeAcumulado();
    void pausarYLimpiarPantalla();
    // REGLAS
    void reglas();
    // CREDITOS
    void creditos();

// FONDO + DIBUJOS
void fondoVentana();
void dibujoLetras();
void dibujoCartasMenu();

#endif // MAINHEADER_H_INCLUDED
