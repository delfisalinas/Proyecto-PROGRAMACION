//
// Created by delfi on 23/5/2023.
//

#ifndef PROYECTO_SALINAS_OJEDA_BUGLIOTTI_CLIENTE_H
#define PROYECTO_SALINAS_OJEDA_BUGLIOTTI_CLIENTE_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

class Cliente {
protected:
    int numero;
    string nombre;
    string apellido;
    string tipo;
    int anio;
    string estado;

public:
    Cliente(int num, const string& n, const string& ap, const string& t, int an, const string& e){ //constructor
        numero=num;
        nombre=n;
        apellido=ap;
        tipo=t;
        anio=an;
        estado=e;
    }

    virtual ~Cliente() {}

    void setNumero (int num);
    int getNumero() const;
    void setNombre (string n);
    string getNombre() const;
    void setApellido (string ap);
    string getApellido() const;
    void setTipo (string t);
    string getTipo() const;
    void setAnio (int an);
    int getAnio() const;
    void setEstado (string e);
    string getEstado() const;

    virtual double getLimiteCredito() const = 0;
    virtual void imprimir() const = 0;
};



#endif //PROYECTO_SALINAS_OJEDA_BUGLIOTTI_CLIENTE_H
