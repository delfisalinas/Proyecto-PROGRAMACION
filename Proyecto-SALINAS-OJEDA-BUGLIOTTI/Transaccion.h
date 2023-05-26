//
// Created by delfi on 26/5/2023.
//

#ifndef PROYECTO_SALINAS_OJEDA_BUGLIOTTI_TRANSACCION_H
#define PROYECTO_SALINAS_OJEDA_BUGLIOTTI_TRANSACCION_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "cliente.h"
#include "clientePlata.h"
#include "ClienteOro.h"
#include "ClienteBlack.h"
#include "Transaccion.h"
#include "SistemaGestion.h"
using namespace std;

class Transaccion {
private:
    int numero;
    double cantidad;
    string tipo;
    int dia;
    int mes;
    int anio;

public:
    Transaccion (int num, double cant, const string& t, int d, int m, int an){ //constructor
        numero=num;
        cantidad=cant;
        tipo=t;
        dia=d;
        mes=m;
        anio=an;
    }
    void setNumero (int num);
    int getNumero() const;
    void setCantidad (double cant);
    double getCantidad() const;
    void setTipo (string t);
    string getTipo() const;
    void setDia (int d);
    int getDia() const;
    void setMes (int m);
    int getMes() const;
    void setAnio (int a);
    int getAnio() const;

    void imprimir() const;
};


#endif //PROYECTO_SALINAS_OJEDA_BUGLIOTTI_TRANSACCION_H
