//
// Created by NICOL on 24/8/2022.
//

#include "Carrera.h"

Carrera::Carrera() {}

Carrera::~Carrera() {}

void Carrera::calculo() {
    int c = 0;
    float tiempo1,tiempo2,tiempo3 = 0;
    float mayor;
    float menor = 1000;
    int nDorsalPrimero;
    int nDorsalUltimo;
    float medio;
    int dorsal;
    for (int i = 0; i < 4; ++i) {

        Corredor corredor;
        corredor.setNdorsal();
        corredor.setTiempo();
        medio = corredor.getTiempo() + medio;

        if (corredor.getTiempo() < menor){
            nDorsalPrimero = corredor.getnDorsal();
            menor = corredor.getTiempo();
        }
        if (corredor.getTiempo() > mayor){
            nDorsalUltimo = corredor.getnDorsal();
            mayor = corredor.getTiempo();
        }
    }
    medio = medio / 4;

    cout<<"El primer puesto es para dorsal: "<<nDorsalPrimero<<endl;
    cout<<"Tiempo total del primero es: "<<menor<<endl;
    cout<<"El ultimo puesto es para dorsal: "<<nDorsalUltimo<<endl;
    cout<<"Tiempo total del ultimo es: "<<mayor<<endl;
    cout<<"Tiempo medio de carrera: "<<medio<<endl;


}
