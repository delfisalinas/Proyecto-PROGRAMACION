//
// Created by delfi on 26/5/2023.
//

#ifndef PROYECTO_SALINAS_OJEDA_BUGLIOTTI_CLIENTEORO_H
#define PROYECTO_SALINAS_OJEDA_BUGLIOTTI_CLIENTEORO_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "cliente.h"
#include "ClienteOro.h"
using namespace std;

class ClienteOro : public Cliente {
public:
    ClienteOro(int numero, const string& nombre, const string& apellido, int anio, const string& estado)
            : Cliente(numero, nombre, apellido, "oro", anio, estado) {}

    double getLimiteCredito() const override {
        return 50000.0;
    }

    void imprimir() const override {
        cout << "Cliente: " << nombre << " " << apellido << endl;
        cout << "Tipo: Oro" << endl;
        cout << "Año: " << anio << endl;
        cout << "Estado: " << estado << endl;
    }
};


#endif //PROYECTO_SALINAS_OJEDA_BUGLIOTTI_CLIENTEORO_H
