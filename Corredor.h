//
// Created by NICOL on 24/8/2022.
//
#ifndef EXAMENCORREDORES_CORREDOR_H
#define EXAMENCORREDORES_CORREDOR_H
class Corredor{

private:

    int nDorsal;
    float tiempo;

public:

    Corredor();
    ~Corredor();

    float getTiempo();
    int getnDorsal();
    void setTiempo();
    void setNdorsal();


};

inline float Corredor::getTiempo() {
    return this->tiempo;
}
inline int Corredor::getnDorsal() {
    return this->nDorsal;
}



#endif //EXAMENCORREDORES_CORREDOR_H
