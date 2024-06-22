#include <iostream>
#include <locale>
#include "rlutil.h"
using namespace std;

void dibujoCartasMenu(){

    // Declaramos algunas variables a utilizar
    int LDC = 33, LDD = 55, LDP = 77 , LDT = 99;
    int LIC = 19, LID = 41, LIP = 63 , LIT = 85;
    int TOFCHAR = (char)219; // Unicamente para las figuras

        // CARTA CORAZON
        rlutil::setColor(rlutil::WHITE);
        // MARCO DE ARRIBA
        rlutil::locate(20,5);      cout << (char)201 << endl;
        rlutil::locate(21,5);      cout << (char)205 << endl;
        rlutil::locate(22,5);      cout << (char)205 << endl;
        rlutil::locate(23,5);      cout << (char)205 << endl;
        rlutil::locate(24,5);      cout << (char)205 << endl;
        rlutil::locate(25,5);      cout << (char)205 << endl;
        rlutil::locate(26,5);      cout << (char)205 << endl;
        rlutil::locate(27,5);      cout << (char)205 << endl;
        rlutil::locate(28,5);      cout << (char)205 << endl;
        rlutil::locate(29,5);      cout << (char)205 << endl;
        rlutil::locate(30,5);      cout << (char)205 << endl;
        rlutil::locate(31,5);      cout << (char)205 << endl;
        rlutil::locate(32,5);      cout << (char)187 << endl;
        // MARCO DE ABAJO
        rlutil::locate(20,13);     cout << (char)200 << endl;
        rlutil::locate(21,13);     cout << (char)205 << endl;
        rlutil::locate(22,13);     cout << (char)205 << endl;
        rlutil::locate(23,13);     cout << (char)205 << endl;
        rlutil::locate(24,13);     cout << (char)205 << endl;
        rlutil::locate(25,13);     cout << (char)205 << endl;
        rlutil::locate(26,13);     cout << (char)205 << endl;
        rlutil::locate(27,13);     cout << (char)205 << endl;
        rlutil::locate(28,13);     cout << (char)205 << endl;
        rlutil::locate(29,13);     cout << (char)205 << endl;
        rlutil::locate(30,13);     cout << (char)205 << endl;
        rlutil::locate(31,13);     cout << (char)205 << endl;
        rlutil::locate(32,13);     cout << (char)188 << endl;
        // MARCO IZQUIERDO
        rlutil::locate(LIC,6);     cout << (char)186 << endl;
        rlutil::locate(LIC,7);     cout << (char)186 << endl;
        rlutil::locate(LIC,8);     cout << (char)186 << endl;
        rlutil::locate(LIC,9);     cout << (char)186 << endl;
        rlutil::locate(LIC,10);    cout << (char)186 << endl;
        rlutil::locate(LIC,11);    cout << (char)186 << endl;
        rlutil::locate(LIC,12);    cout << (char)186 << endl;
        // MARCO DERECHO
        rlutil::locate(LDC,6);     cout << (char)186 << endl;
        rlutil::locate(LDC,7);     cout << (char)186 << endl;
        rlutil::locate(LDC,8);     cout << (char)186 << endl;
        rlutil::locate(LDC,9);     cout << (char)186 << endl;
        rlutil::locate(LDC,10);    cout << (char)186 << endl;
        rlutil::locate(LDC,11);    cout << (char)186 << endl;
        rlutil::locate(LDC,12);    cout << (char)186 << endl;

        //DIBUJO INTERNO DE CORAZON
        rlutil::setColor(rlutil::RED);
        rlutil::locate(22,7);      cout << (char)219 << endl;
        rlutil::locate(23,7);      cout << (char)219 << endl;
        rlutil::locate(24,7);      cout << (char)219 << endl;
        rlutil::locate(25,7);      cout << (char)219 << endl;
        rlutil::locate(27,7);      cout << (char)219 << endl;
        rlutil::locate(28,7);      cout << (char)219 << endl;
        rlutil::locate(29,7);      cout << (char)219 << endl;
        rlutil::locate(30,7);      cout << (char)219 << endl;
        rlutil::locate(21,8);      cout << (char)219 << endl;
        rlutil::locate(22,8);      cout << (char)219 << endl;
        rlutil::locate(23,8);      cout << (char)219 << endl;
        rlutil::locate(24,8);      cout << (char)219 << endl;
        rlutil::locate(25,8);      cout << (char)219 << endl;
        rlutil::locate(26,8);      cout << (char)219 << endl;
        rlutil::locate(27,8);      cout << (char)219 << endl;
        rlutil::locate(28,8);      cout << (char)219 << endl;
        rlutil::locate(29,8);      cout << (char)219 << endl;
        rlutil::locate(30,8);      cout << (char)219 << endl;
        rlutil::locate(31,8);      cout << (char)219 << endl;
        rlutil::locate(22,9);      cout << (char)219 << endl;
        rlutil::locate(23,9);      cout << (char)219 << endl;
        rlutil::locate(24,9);      cout << (char)219 << endl;
        rlutil::locate(25,9);      cout << (char)219 << endl;
        rlutil::locate(26,9);      cout << (char)219 << endl;
        rlutil::locate(27,9);      cout << (char)219 << endl;
        rlutil::locate(28,9);      cout << (char)219 << endl;
        rlutil::locate(29,9);      cout << (char)219 << endl;
        rlutil::locate(30,9);      cout << (char)219 << endl;
        rlutil::locate(23,10);     cout << (char)219 << endl;
        rlutil::locate(24,10);     cout << (char)219 << endl;
        rlutil::locate(25,10);     cout << (char)219 << endl;
        rlutil::locate(26,10);     cout << (char)219 << endl;
        rlutil::locate(27,10);     cout << (char)219 << endl;
        rlutil::locate(28,10);     cout << (char)219 << endl;
        rlutil::locate(29,10);     cout << (char)219 << endl;
        rlutil::locate(25,11);     cout << (char)219 << endl;
        rlutil::locate(26,11);     cout << (char)219 << endl;
        rlutil::locate(27,11);     cout << (char)219 << endl;


        // CARTA DIAMANTES
        rlutil::setColor(rlutil::WHITE);
        // MARCO DE ARRIBA
        rlutil::locate(42,5);      cout << (char)201 << endl;
        rlutil::locate(43,5);      cout << (char)205 << endl;
        rlutil::locate(44,5);      cout << (char)205 << endl;
        rlutil::locate(45,5);      cout << (char)205 << endl;
        rlutil::locate(46,5);      cout << (char)205 << endl;
        rlutil::locate(47,5);      cout << (char)205 << endl;
        rlutil::locate(48,5);      cout << (char)205 << endl;
        rlutil::locate(49,5);      cout << (char)205 << endl;
        rlutil::locate(50,5);      cout << (char)205 << endl;
        rlutil::locate(51,5);      cout << (char)205 << endl;
        rlutil::locate(52,5);      cout << (char)205 << endl;
        rlutil::locate(53,5);      cout << (char)205 << endl;
        rlutil::locate(54,5);      cout << (char)187 << endl;
        // MARCO DE ABAJO
        rlutil::locate(42,13);     cout << (char)200 << endl;
        rlutil::locate(43,13);     cout << (char)205 << endl;
        rlutil::locate(44,13);     cout << (char)205 << endl;
        rlutil::locate(45,13);     cout << (char)205 << endl;
        rlutil::locate(46,13);     cout << (char)205 << endl;
        rlutil::locate(47,13);     cout << (char)205 << endl;
        rlutil::locate(48,13);     cout << (char)205 << endl;
        rlutil::locate(49,13);     cout << (char)205 << endl;
        rlutil::locate(50,13);     cout << (char)205 << endl;
        rlutil::locate(51,13);     cout << (char)205 << endl;
        rlutil::locate(52,13);     cout << (char)205 << endl;
        rlutil::locate(53,13);     cout << (char)205 << endl;
        rlutil::locate(54,13);     cout << (char)188 << endl;
        // MARCO IZQUIERDO
        rlutil::locate(LID,6);     cout << (char)186 << endl;
        rlutil::locate(LID,7);     cout << (char)186 << endl;
        rlutil::locate(LID,8);     cout << (char)186 << endl;
        rlutil::locate(LID,9);     cout << (char)186 << endl;
        rlutil::locate(LID,10);    cout << (char)186 << endl;
        rlutil::locate(LID,11);    cout << (char)186 << endl;
        rlutil::locate(LID,12);    cout << (char)186 << endl;
        // MARCO DERECHO
        rlutil::locate(LDD,6);     cout << (char)186 << endl;
        rlutil::locate(LDD,7);     cout << (char)186 << endl;
        rlutil::locate(LDD,8);     cout << (char)186 << endl;
        rlutil::locate(LDD,9);     cout << (char)186 << endl;
        rlutil::locate(LDD,10);    cout << (char)186 << endl;
        rlutil::locate(LDD,11);    cout << (char)186 << endl;
        rlutil::locate(LDD,12);    cout << (char)186 << endl;
        // DIBUJO INTERNODE DIAMANTE
        rlutil::setColor(rlutil::LIGHTBLUE);
        rlutil::locate(47,7);      cout << (char)219 << endl;
        rlutil::locate(48,7);      cout << (char)219 << endl;
        rlutil::locate(49,7);      cout << (char)219 << endl;
        rlutil::locate(45,8);      cout << (char)219 << endl;
        rlutil::locate(46,8);      cout << (char)219 << endl;
        rlutil::locate(47,8);      cout << (char)219 << endl;
        rlutil::locate(48,8);      cout << (char)219 << endl;
        rlutil::locate(49,8);      cout << (char)219 << endl;
        rlutil::locate(50,8);      cout << (char)219 << endl;
        rlutil::locate(51,8);      cout << (char)219 << endl;
        rlutil::locate(44,9);      cout << (char)219 << endl;
        rlutil::locate(45,9);      cout << (char)219 << endl;
        rlutil::locate(46,9);      cout << (char)219 << endl;
        rlutil::locate(47,9);      cout << (char)219 << endl;
        rlutil::locate(48,9);      cout << (char)219 << endl;
        rlutil::locate(49,9);      cout << (char)219 << endl;
        rlutil::locate(50,9);      cout << (char)219 << endl;
        rlutil::locate(51,9);      cout << (char)219 << endl;
        rlutil::locate(52,9);      cout << (char)219 << endl;
        rlutil::locate(45,10);     cout << (char)219 << endl;
        rlutil::locate(46,10);     cout << (char)219 << endl;
        rlutil::locate(47,10);     cout << (char)219 << endl;
        rlutil::locate(48,10);     cout << (char)219 << endl;
        rlutil::locate(49,10);     cout << (char)219 << endl;
        rlutil::locate(50,10);     cout << (char)219 << endl;
        rlutil::locate(51,10);     cout << (char)219 << endl;
        rlutil::locate(47,11);     cout << (char)219 << endl;
        rlutil::locate(48,11);     cout << (char)219 << endl;
        rlutil::locate(49,11);     cout << (char)219 << endl;

        // CARTA DE PICA
        rlutil::setColor(rlutil::WHITE);
        // MARCO DE ARRIBA
        rlutil::locate(64,5);      cout << (char)201 << endl;
        rlutil::locate(65,5);      cout << (char)205 << endl;
        rlutil::locate(66,5);      cout << (char)205 << endl;
        rlutil::locate(67,5);      cout << (char)205 << endl;
        rlutil::locate(68,5);      cout << (char)205 << endl;
        rlutil::locate(69,5);      cout << (char)205 << endl;
        rlutil::locate(70,5);      cout << (char)205 << endl;
        rlutil::locate(71,5);      cout << (char)205 << endl;
        rlutil::locate(72,5);      cout << (char)205 << endl;
        rlutil::locate(73,5);      cout << (char)205 << endl;
        rlutil::locate(74,5);      cout << (char)205 << endl;
        rlutil::locate(75,5);      cout << (char)205 << endl;
        rlutil::locate(76,5);      cout << (char)187 << endl;
        // MARCO DE ABAJO
        rlutil::locate(64,13);     cout << (char)200 << endl;
        rlutil::locate(65,13);     cout << (char)205 << endl;
        rlutil::locate(66,13);     cout << (char)205 << endl;
        rlutil::locate(67,13);     cout << (char)205 << endl;
        rlutil::locate(68,13);     cout << (char)205 << endl;
        rlutil::locate(69,13);     cout << (char)205 << endl;
        rlutil::locate(70,13);     cout << (char)205 << endl;
        rlutil::locate(71,13);     cout << (char)205 << endl;
        rlutil::locate(72,13);     cout << (char)205 << endl;
        rlutil::locate(73,13);     cout << (char)205 << endl;
        rlutil::locate(74,13);     cout << (char)205 << endl;
        rlutil::locate(75,13);     cout << (char)205 << endl;
        rlutil::locate(76,13);     cout << (char)188 << endl;
        // MARCO IZQUIERDO
        rlutil::locate(LIP,6);     cout << (char)186 << endl;
        rlutil::locate(LIP,7);     cout << (char)186 << endl;
        rlutil::locate(LIP,8);     cout << (char)186 << endl;
        rlutil::locate(LIP,9);     cout << (char)186 << endl;
        rlutil::locate(LIP,10);    cout << (char)186 << endl;
        rlutil::locate(LIP,11);    cout << (char)186 << endl;
        rlutil::locate(LIP,12);    cout << (char)186 << endl;
        // MARCO DERECHO
        rlutil::locate(LDP,6);     cout << (char)186 << endl;
        rlutil::locate(LDP,7);     cout << (char)186 << endl;
        rlutil::locate(LDP,8);     cout << (char)186 << endl;
        rlutil::locate(LDP,9);     cout << (char)186 << endl;
        rlutil::locate(LDP,10);    cout << (char)186 << endl;
        rlutil::locate(LDP,11);    cout << (char)186 << endl;
        rlutil::locate(LDP,12);    cout << (char)186 << endl;
        // DIBUJO INTERNO DE PICA
        rlutil::setColor(rlutil::YELLOW);
        rlutil::locate(69,7);      cout << (char)TOFCHAR << endl;
        rlutil::locate(70,7);      cout << (char)TOFCHAR << endl;
        rlutil::locate(71,7);      cout << (char)TOFCHAR << endl;
        rlutil::locate(67,8);      cout << (char)TOFCHAR << endl;
        rlutil::locate(68,8);      cout << (char)TOFCHAR << endl;
        rlutil::locate(69,8);      cout << (char)TOFCHAR << endl;
        rlutil::locate(70,8);      cout << (char)TOFCHAR << endl;
        rlutil::locate(71,8);      cout << (char)TOFCHAR << endl;
        rlutil::locate(72,8);      cout << (char)TOFCHAR << endl;
        rlutil::locate(73,8);      cout << (char)TOFCHAR << endl;
        rlutil::locate(66,9);      cout << (char)TOFCHAR << endl;
        rlutil::locate(67,9);      cout << (char)TOFCHAR << endl;
        rlutil::locate(68,9);      cout << (char)TOFCHAR << endl;
        rlutil::locate(69,9);      cout << (char)TOFCHAR << endl;
        rlutil::locate(70,9);      cout << (char)TOFCHAR << endl;
        rlutil::locate(71,9);      cout << (char)TOFCHAR << endl;
        rlutil::locate(72,9);      cout << (char)TOFCHAR << endl;
        rlutil::locate(73,9);      cout << (char)TOFCHAR << endl;
        rlutil::locate(74,9);      cout << (char)TOFCHAR << endl;
        rlutil::locate(70,10);     cout << (char)TOFCHAR << endl;
        rlutil::locate(68,11);     cout << (char)TOFCHAR << endl;
        rlutil::locate(69,11);     cout << (char)TOFCHAR << endl;
        rlutil::locate(70,11);     cout << (char)TOFCHAR << endl;
        rlutil::locate(71,11);     cout << (char)TOFCHAR << endl;
        rlutil::locate(72,11);     cout << (char)TOFCHAR << endl;

        // CARTA DE TREBOL
        rlutil::setColor(rlutil::WHITE);
        // MARCO DE ARRIBA
        rlutil::locate(86,5);      cout << (char)201 << endl;
        rlutil::locate(87,5);      cout << (char)205 << endl;
        rlutil::locate(88,5);      cout << (char)205 << endl;
        rlutil::locate(89,5);      cout << (char)205 << endl;
        rlutil::locate(90,5);      cout << (char)205 << endl;
        rlutil::locate(91,5);      cout << (char)205 << endl;
        rlutil::locate(92,5);      cout << (char)205 << endl;
        rlutil::locate(93,5);      cout << (char)205 << endl;
        rlutil::locate(94,5);      cout << (char)205 << endl;
        rlutil::locate(95,5);      cout << (char)205 << endl;
        rlutil::locate(96,5);      cout << (char)205 << endl;
        rlutil::locate(97,5);      cout << (char)205 << endl;
        rlutil::locate(98,5);      cout << (char)187 << endl;
        // MARCO DE ABAJO
        rlutil::locate(86,13);     cout << (char)200 << endl;
        rlutil::locate(87,13);     cout << (char)205 << endl;
        rlutil::locate(88,13);     cout << (char)205 << endl;
        rlutil::locate(89,13);     cout << (char)205 << endl;
        rlutil::locate(90,13);     cout << (char)205 << endl;
        rlutil::locate(91,13);     cout << (char)205 << endl;
        rlutil::locate(92,13);     cout << (char)205 << endl;
        rlutil::locate(93,13);     cout << (char)205 << endl;
        rlutil::locate(94,13);     cout << (char)205 << endl;
        rlutil::locate(95,13);     cout << (char)205 << endl;
        rlutil::locate(96,13);     cout << (char)205 << endl;
        rlutil::locate(97,13);     cout << (char)205 << endl;
        rlutil::locate(98,13);     cout << (char)188 << endl;
        // MARCO IZQUIERDO
        rlutil::locate(LIT,6);     cout << (char)186 << endl;
        rlutil::locate(LIT,7);     cout << (char)186 << endl;
        rlutil::locate(LIT,8);     cout << (char)186 << endl;
        rlutil::locate(LIT,9);     cout << (char)186 << endl;
        rlutil::locate(LIT,10);    cout << (char)186 << endl;
        rlutil::locate(LIT,11);    cout << (char)186 << endl;
        rlutil::locate(LIT,12);    cout << (char)186 << endl;
        // MARCO DERECHO
        rlutil::locate(LDT,6);     cout << (char)186 << endl;
        rlutil::locate(LDT,7);     cout << (char)186 << endl;
        rlutil::locate(LDT,8);     cout << (char)186 << endl;
        rlutil::locate(LDT,9);     cout << (char)186 << endl;
        rlutil::locate(LDT,10);    cout << (char)186 << endl;
        rlutil::locate(LDT,11);    cout << (char)186 << endl;
        rlutil::locate(LDT,12);    cout << (char)186 << endl;
        // DIBUJO INTERNO DE TREBOL
        rlutil::setColor(rlutil::GREEN);
        rlutil::locate(90,7);      cout << (char)TOFCHAR << endl;
        rlutil::locate(91,7);      cout << (char)TOFCHAR << endl;
        rlutil::locate(92,7);      cout << (char)TOFCHAR << endl;
        rlutil::locate(93,7);      cout << (char)TOFCHAR << endl;
        rlutil::locate(94,7);      cout << (char)TOFCHAR << endl;
        rlutil::locate(90,8);      cout << (char)TOFCHAR << endl;
        rlutil::locate(91,8);      cout << (char)TOFCHAR << endl;
        rlutil::locate(92,8);      cout << (char)TOFCHAR << endl;
        rlutil::locate(93,8);      cout << (char)TOFCHAR << endl;
        rlutil::locate(94,8);      cout << (char)TOFCHAR << endl;
        rlutil::locate(88,9);      cout << (char)TOFCHAR << endl;
        rlutil::locate(89,9);      cout << (char)TOFCHAR << endl;
        rlutil::locate(90,9);      cout << (char)TOFCHAR << endl;
        rlutil::locate(91,9);      cout << (char)TOFCHAR << endl;
        rlutil::locate(92,9);      cout << (char)TOFCHAR << endl;
        rlutil::locate(93,9);      cout << (char)TOFCHAR << endl;
        rlutil::locate(94,9);      cout << (char)TOFCHAR << endl;
        rlutil::locate(95,9);      cout << (char)TOFCHAR << endl;
        rlutil::locate(96,9);      cout << (char)TOFCHAR << endl;
        rlutil::locate(88,10);     cout << (char)TOFCHAR << endl;
        rlutil::locate(89,10);     cout << (char)TOFCHAR << endl;
        rlutil::locate(90,10);     cout << (char)TOFCHAR << endl;
        rlutil::locate(91,10);     cout << (char)TOFCHAR << endl;
        rlutil::locate(92,10);     cout << (char)TOFCHAR << endl;
        rlutil::locate(93,10);     cout << (char)TOFCHAR << endl;
        rlutil::locate(94,10);     cout << (char)TOFCHAR << endl;
        rlutil::locate(95,10);     cout << (char)TOFCHAR << endl;
        rlutil::locate(96,10);     cout << (char)TOFCHAR << endl;
        rlutil::locate(92,11);     cout << (char)TOFCHAR << endl;

}
