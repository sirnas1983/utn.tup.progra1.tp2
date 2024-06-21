#ifndef MAINHEADER_H_INCLUDED
#define MAINHEADER_H_INCLUDED

// GUARDS (DEBEN ESTAR PARA QUE EL PROCESO DE COMPILACIÓN SEA EXITOSO)
// AQUI SE DECLARAN LAS FUNCIONES

void intro();
void menuJuego();
void prueba();
void dibujoLetras();
void dibujoCartasMenu();
void reglas();


// DARIAN
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

// BACKGROUND
void fondoVentana();

// CREDITOS
void creditos();

#endif // MAINHEADER_H_INCLUDED
