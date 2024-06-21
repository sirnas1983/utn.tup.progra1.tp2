#include <iostream>
#include <locale>
#include "rlutil.h"
#include "mainHeader.h"
using namespace std;


void fondoVentana(){

    int a , b , c, d;
    rlutil::setColor(rlutil::GREY);
    rlutil::locate(1,1);       cout << (char)201 << endl;
    for (a=2; a<=120; a++){
        rlutil::locate(a,1);     cout << (char)205 << endl;
    }
    rlutil::locate(120,1);     cout << (char)187 << endl;
    rlutil::locate(1,29);      cout << (char)200 << endl;
    for (b=2; b<=120; b++){
        rlutil::locate(b,29);     cout << (char)205 << endl;
    }
    rlutil::locate(120,29);      cout << (char)188 << endl;
    for (c=2; c<=28; c++){
        rlutil::locate(1,c);     cout << (char)186 << endl;
    }
    for (d=2; d<=28; d++){
        rlutil::locate(120,d);     cout << (char)186 << endl;
    }

}
