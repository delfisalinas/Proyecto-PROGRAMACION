//
// Created by delfi on 26/5/2023.
//

#ifndef PROYECTO_SALINAS_OJEDA_BUGLIOTTI_CLIENTEPLATA_H
#define PROYECTO_SALINAS_OJEDA_BUGLIOTTI_CLIENTEPLATA_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "cliente.h"

using namespace std;

class ClientePlata : public Cliente {
public:
    ClientePlata(int numero, const string& nombre, const string& apellido, int anio, const string& estado) //constructor
            : Cliente(numero, nombre, apellido, "plata", anio, estado) {}



    double getLimiteCredito() const override {
        return 0.0; // No tiene tarjeta de crédito
    }

    void imprimir() const override {
        cout << "Cliente: " << nombre << " " << apellido << endl;
        cout << "Tipo: Plata" << endl;
        cout << "Año: " << anio << endl;
        cout << "Estado: " << estado << endl;
    }
};


#endif //PROYECTO_SALINAS_OJEDA_BUGLIOTTI_CLIENTEPLATA_H
