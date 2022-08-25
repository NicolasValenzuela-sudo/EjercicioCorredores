//
// Created by NICOL on 24/8/2022.
//

#include "Corredor.h"
#include <iostream>
using namespace std;

Corredor::Corredor() {}

Corredor::~Corredor() {}

void Corredor::setTiempo() {

    int tiempo;

    cout << "Introduce el tiempo del corredor: ";

    cin >> tiempo;

    this->tiempo = tiempo;
}

void Corredor::setNdorsal() {

    cout << "Introduce el numero de dorsal del corredor: ";

    cin>> this->nDorsal ;
}
