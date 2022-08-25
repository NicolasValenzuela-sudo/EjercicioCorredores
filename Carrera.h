//
// Created by NICOL on 24/8/2022.
//

#ifndef EXAMENCORREDORES_CARRERA_H
#define EXAMENCORREDORES_CARRERA_H
#include <iostream>
#include "Corredor.h"
#include "Carrera.h"

using namespace std;

class Carrera{

private:
    //Corredor corredorx;
    string nombreCarrera;
public:

    Carrera();

    ~Carrera();

    void calculo();

    void setNombreCarrera(string);


};

inline void Carrera::setNombreCarrera(string nombreCarrera) {
    this->nombreCarrera = nombreCarrera;
}

#endif //EXAMENCORREDORES_CARRERA_H
