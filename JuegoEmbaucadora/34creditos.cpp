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
        rlutil::locate(55,3);    cout << "CREDITOS";

        rlutil::locate(55,5);    cout << "Grupo N 18";

        rlutil::locate(21,8);    cout << "      APELLIDO Y NOMBRE    |     ROL       |       COMENTARIO         ";
        rlutil::locate(21,10);   cout << " HIEBL DARIAN              |    ALUMNO     | LEGAJO = 30390           ";
        rlutil::locate(21,12);   cout << " FREDES JACOB              |    ALUMNO     | LEGAJO = 27233           ";

        rlutil::locate(21,16);   cout << "                           MATERIAL UTILIZADO                         ";
        rlutil::locate(21,18);   cout << "      RECURSO      |   NOMBRE                                         ";
        rlutil::locate(21,20);   cout << "      Youtube      |   Faizi                                          ";
        rlutil::locate(21,22);   cout << "      Youtube      |   The Regext                                     ";

        rlutil::locate(20,5);    cout <<(char)201;
        rlutil::locate(100,5);   cout <<(char)187;
        rlutil::locate(20,23);   cout <<(char)200;
        rlutil::locate(100,23);  cout <<(char)188;


        for (int y = 7; y <= 23; y += 2){
            for (int x = 21; x <= 99; x++){
            rlutil::locate(x,y);    cout <<(char)205;
            }
        }

        for (int y = 8; y <= 22; y++){
            for (int x = 20; x <= 20; x++){
            rlutil::locate(x,y);    cout <<(char)186;
            }
        }

        for (int y = 6; y <= 22; y++){
            for (int x = 100; x <= 100; x++){
            rlutil::locate(x,y);    cout <<(char)186;
            }
        }

        rlutil::setColor(rlutil::GREEN);
        rlutil::locate(42,29);  cout << " <ESC>";
        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(48,29);  cout <<" Para volver al menu principal  ";

        switch(rlutil::getkey()){
            case 0:
                corteCreditos = 0;
                rlutil::cls();
                break;
            }
    }
}
