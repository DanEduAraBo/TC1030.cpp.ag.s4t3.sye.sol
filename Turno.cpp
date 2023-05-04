#include "Turno.hpp"

//Constructor de turno por default a partir de los valores de los parámetros de entrada
Turno::Turno() 
{}

Turno::Turno(std::string turno, std::string jug_actual, std::string caOldJugador, std::string vaDadoFinal, std::string tipo_casilla, std::string casilla_actual)
{
    this->turno = turno;
    this->jug_actual = jug_actual;
    this->ca_old_jugador=caOldJugador;
    this->va_Dado_Final=vaDadoFinal;
    this->tipo_casilla=tipo_casilla;
    this->ca_new_jugador=casilla_actual;
}

//Sobrecarga del operador de insercion para mostrar el Turno en cout
std::ostream& operator<<(std::ostream& out, const Turno& t){
    out << t.turno << " " << t.jug_actual << " " << t.ca_old_jugador << " " << t.va_Dado_Final << " " << t.tipo_casilla << " " << t.ca_new_jugador << "\n";
    return out;
}
