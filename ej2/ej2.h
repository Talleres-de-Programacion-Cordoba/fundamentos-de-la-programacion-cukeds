#ifndef EJ2_H
#define EJ2_H

/*
    Realizar una clase que permita representar una fecha.
    Definir los datos miembros de la clase (dia, mes, anio).
    Definir un constructor que inicializa la fecha a una fecha dada.
    Definir un constructor que inicializa la fecha en 01/01/1900.
    Definir sobrecargas de los siguientes operadores:
    ++ y – incrementa o decrementa la fecha en 1 día.
    + y – suma a una fecha un cierto número de días.
    Definir getters y setters para los datos miembros.
*/

class Fecha{
private:
    int dia;
    int mes;
    int anio;
public:

    int getDia();
    int getMes();
    int getAnio();
    void setDia(int d);
    void setMes(int m);
    void setAnio(int a);
    Fecha(int d, int m, int a);
    Fecha();
    Fecha operator++(int);
    Fecha operator--(int);
    Fecha operator+(int d);
    Fecha operator-(int d);
    bool operator==(Fecha f) const;

};

#endif // EJ2_H
