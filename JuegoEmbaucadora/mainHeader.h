#ifndef MAINHEADER_H_INCLUDED
#define MAINHEADER_H_INCLUDED
#include <string> //agregado en ultima version
// GUARDS (DEBEN ESTAR PARA QUE EL PROCESO DE COMPILACIÓN SEA EXITOSO)
// AQUI SE DECLARAN LAS FUNCIONES

// CAPAS PRINCIPALES
void intro();
void menuJuego();
void salir(int &corteMenu);

// VARIABLES GLOBALES
extern string globalNombre;  //agregado en ultima version
extern int globalPuntos;     //agregado en ultima version

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
    // ESTADISTICAS
    void estadisticas();
    // CONTACTO
    void contacto();

// FONDO + DIBUJOS
void fondoVentana();
void dibujoLetras();
void dibujoCartasMenu();
void musicaFondo();

#endif // MAINHEADER_H_INCLUDED
