#include <iostream>
#include <locale>
#include "rlutil.h"
#include "mainHeader.h"
using namespace std;

void creditos(){

    rlutil::hidecursor();
    rlutil::cls();

    int corteCreditos = 1;

    while (corteCreditos !=0) {

        fondoVentana();
        rlutil::setColor(rlutil::YELLOW);
        rlutil::locate(56,3);    cout << "CREDITOS";

        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(55,6);    cout << "GRUPO N 18";

        rlutil::locate(21,9);    cout << "      APELLIDO Y NOMBRE    |     ROL       |       COMENTARIO         ";
        rlutil::locate(21,11);   cout << " HIEBL DARIAN              |    ALUMNO     | LEGAJO = 30390           ";
        rlutil::locate(21,13);   cout << " FREDES JACOB              |    ALUMNO     | LEGAJO = 27233           ";
        rlutil::locate(21,15);   cout << " SIMON ANGEL               |    PROFESOR   | EXCELENTE PROFESIONAL    ";
        rlutil::locate(21,17);   cout << " FERNADEZ MAXIMILIANO      |    PROFESOR   | EXCELENTE PROFESIONAL    ";
        rlutil::locate(21,19);   cout << " VELEZ LAURA               |    PROFESORA  | EXCELENTE PROFESIONAL    ";
        rlutil::locate(21,21);   cout << " CAMPOS BRIAN              |    PROFESOR   | EXCELENTE PROFESIONAL    ";
        rlutil::locate(21,23);   cout << " TAPIA ARIEL               |    JTP        | EXCELENTE PROFESIONAL    ";
        rlutil::locate(21,25);   cout << " NIETO ALEJANDRO           |    AYUDANTE   | EXCELENTE PROFESIONAL    ";

        rlutil::locate(20,8);    cout <<(char)201;
        rlutil::locate(100,8);   cout <<(char)187;
        rlutil::locate(20,26);   cout <<(char)200;
        rlutil::locate(100,26);  cout <<(char)188;

        // LINEAS HORIZONTALES
        for (int y = 8; y <= 27; y += 2){
            for (int x = 21; x <= 99; x++){
            rlutil::locate(x,y);    cout <<(char)205;
            }
        }
        // MARCO IZQUIERDO
        for (int y = 9; y <= 25; y++){
            for (int x = 20; x <= 20; x++){
            rlutil::locate(x,y);    cout <<(char)186;
            }
        }
        // MARCO IZQUIERDO
        for (int y = 9; y <= 25; y++){
            for (int x = 100; x <= 100; x++){
            rlutil::locate(x,y);    cout <<(char)186;
            }
        }

        rlutil::setColor(rlutil::GREEN);
        rlutil::locate(41,29);  cout << " <ESC> ";
        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(48,29);  cout <<" Para volver al menu principal  ";

        switch(rlutil::getkey()){
            case 0:
                corteCreditos = 0;
                rlutil::cls();
                break;

            default:
                rlutil::cls();
                rlutil::setColor(rlutil::RED);
                rlutil::locate(7,4);  cout << "=========================================";
                rlutil::locate(7,5);  cout << "|";
                rlutil::locate(47,5); cout << "|";
                rlutil::locate(7,6);  cout << "=========================================";
                rlutil::setColor(rlutil::WHITE);
                rlutil::locate(8,5);  cout << "  Utilice las teclas correspondientes!";
                break;
            }
    }
}
