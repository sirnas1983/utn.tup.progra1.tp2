#include <iostream>
#include <locale>
#include "rlutil.h"
#include "mainHeader.h"
using namespace std;

void contacto(){
    rlutil::hidecursor();
    rlutil::cls();

    int corteContacto = 1;

    while (corteContacto !=0 ){

        fondoVentana();

        rlutil::setColor(rlutil::GREEN);
        rlutil::locate(41,4); cout << "GRACIAS POR PROBAR NUESTRO JUEGO!";
        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(7,6);  cout << "Agradecemos enormemente su interés en probar nuestro juego. Esperamos que les haya resultado entretenido";
        rlutil::locate(7,7);  cout << "y desafiante. Su participación es fundamental para que podamos seguir mejorando el juego. Si encuentran";
        rlutil::locate(7,8);  cout << "alguna falla o tienen alguna sugerencia, no duden en contactarnos.";

        rlutil::locate(7,10); cout << "Informacion de contacto: ";

        rlutil::locate(10,12); cout <<  "email :";
        rlutil::locate(10,13); cout <<  "email :";

        rlutil::locate(7,15); cout <<  "Una vez más, gracias por jugar y por ser parte de nuestra comunidad.";

        rlutil::locate(7,16); cout <<  "Atentamente.";

        rlutil::locate(7,17); cout <<  "El equipo de desarrollo.";

        //rlutil::setColor(rlutil::BLACK);

        rlutil::setColor(rlutil::GREEN);
        rlutil::locate(42,29);  cout << " <ESC>";
        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(48,29);  cout <<" Para volver al menu principal  ";

        switch(rlutil::getkey()){
            case 0:
                corteContacto= 0;
                rlutil::cls();
                break;

            default:
                rlutil::cls();
                rlutil::setColor(rlutil::RED);
                rlutil::locate(40,25); cout << "=========================================";
                rlutil::locate(40,26); cout << "|";
                rlutil::locate(80,26); cout << "|";
                rlutil::locate(40,27); cout << "=========================================";
                rlutil::setColor(rlutil::WHITE);
                rlutil::locate(42,26); cout << " Utilice las teclas correspondientes!";
                break;
            }

    }

}
