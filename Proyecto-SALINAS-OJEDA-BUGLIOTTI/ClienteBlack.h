//
// Created by delfi on 26/5/2023.
//

#ifndef PROYECTO_SALINAS_OJEDA_BUGLIOTTI_CLIENTEBLACK_H
#define PROYECTO_SALINAS_OJEDA_BUGLIOTTI_CLIENTEBLACK_H
#include <string>
#include <sstream>
#include "cliente.h"
#include "clientePlata.h"
#include "ClienteOro.h"
#include "ClienteBlack.h"
#include "Transaccion.h"
#include "SistemaGestion.h"
using namespace std;

class ClienteBlack : public Cliente {
public:
    ClienteBlack(int numero, const string& nombre, const string& apellido, int anio, const string& estado)
            : Cliente(numero, nombre, apellido, "black", anio, estado) {}

    double getLimiteCredito() const override {
        return 250000.0;
    }

    void imprimir() const override {
        cout << "Cliente: " << nombre << " " << apellido << endl;
        cout << "Tipo: Black" << endl;
        cout << "Año: " << anio << endl;
        cout << "Estado: " << estado << endl;
    }
};

#endif //PROYECTO_SALINAS_OJEDA_BUGLIOTTI_CLIENTEBLACK_H
