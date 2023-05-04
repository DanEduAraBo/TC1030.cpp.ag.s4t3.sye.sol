#include "CDado.hpp"

int CDado::cara = 0;

//Constructor por default: aleatorio (switchrandom=true) y con la cara en (1)
CDado::CDado()
{
    this->switchrandom=true;
    this->cara=1;
}

// Crea un dado aleatorio, si (sr=true) / no aleatorio, si (sr=false)
CDado::CDado(bool sr)
{
    this->switchrandom=sr;
    if (sr) {
        srand(time(0));
    }
}

// Resetea el dado a cara en 0
void CDado::resetDado()
{
    CDado::cara=0;
}

// Devuelve el valor de la cara del dado : aleatorio / no aleatorio -----
int CDado::getValorDado()
{
    if (switchrandom) {
        return  (rand() % 6) + 1;
    }
    else {
        CDado::cara = (CDado::cara % 6) + 1;
        return CDado::cara;
    }
}

// Sobrecarga el operador+ para regresar el resultado de varias tiradas -------------------------
// Dado+1 (Valor despues de 1 tirada) Dado+2 (valor despues de 2 tiradas) ... Dado+n (valor despues de n tiradas)
int CDado::operator+(int tiradas){
    int valorCara{0};

    for (auto i=0; i < tiradas; i++) {
        valorCara = getValorDado();
    }
    return valorCara;
}
