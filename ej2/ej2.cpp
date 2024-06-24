
#include <iostream>
#include "ej2.h"

/*
    Realizar una clase que permita representar una fecha.
    Definir los datos miembros de la clase.
    Definir un constructor que inicializa la fecha a una fecha dada.
    Definir un constructor que inicializa la fecha en 01/01/1900.
    Definir sobrecargas de los siguientes operadores:
    ++ y – incrementa o decrementa la fecha en 1 día.
    + y – suma a una fecha un cierto número de días.
    Definir getters y setters para los datos miembros.
*/

// METODOS



int Fecha::getDia() {
    return dia;
}

int Fecha::getMes() {
    return mes;
}

int Fecha::getAnio() {
    return anio;
}

void Fecha::setDia(int d) {
    dia = d;
}

void Fecha::setMes(int m) {
    mes = m;
}

void Fecha::setAnio(int a) {
    anio = a;
}

Fecha::Fecha(int d, int m, int a) {
    dia = d;
    mes = m;
    anio = a;
}

Fecha::Fecha() {
    dia = 1;
    mes = 1;
    anio = 1900;
}

Fecha Fecha::operator++(int) {
    Fecha f = *this;
    if(dia == 31 && mes == 12) {
        dia = 1;
        mes = 1;
        anio++;
    } else if(dia == 31 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10)) {
        dia = 1;
        mes++;
    }
    else if(dia == 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) {
        dia = 1;
        mes++;
    } else if(dia == 28 && mes == 2) {
        dia = 1;
        mes++;
    } else if(dia == 29 && mes == 2) {
        dia = 1;
        mes++;
    } else {
            dia++;
    }
    return f;
}

Fecha Fecha::operator--(int) {
    Fecha f = *this;
    if(dia == 1 && mes == 1) {
        dia = 31;
        mes = 12;
        anio--;
    } else if(dia == 1 && (mes == 5 || mes == 7 || mes == 10 || mes == 12)) {
        dia = 30;
        mes--;
    } else if(dia == 1 && (mes == 2 || mes == 4 || mes == 6 || mes == 8 || mes == 9 || mes == 11)) {
        dia = 31;
        mes--;
    } else if(dia == 1 && mes == 3) {
        dia = 28;
        mes--;
    } else {
        dia--;
    }
    return f;
}

Fecha Fecha::operator+(int d) {
    Fecha f = *this;
    for(int i = 0; i < d; i++){
        f++;
    }
    return f;
}

Fecha Fecha::operator-(int d) {
    Fecha f = *this;
    for(int i = 0; i < d; i++){
        f--;
    }
    return f;

}

bool Fecha::operator==(Fecha f) const {
    return dia == f.getDia() && mes == f.getMes() && anio == f.getAnio();
}
