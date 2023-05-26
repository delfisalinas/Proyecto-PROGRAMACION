//
// Created by delfi on 26/5/2023.
//

#ifndef PROYECTO_SALINAS_OJEDA_BUGLIOTTI_SISTEMAGESTION_H
#define PROYECTO_SALINAS_OJEDA_BUGLIOTTI_SISTEMAGESTION_H
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
using namespace std;

class SistemaGestion {
private:
    vector<Cliente*> clientes;
    vector<Transaccion> transacciones;

public:
    SistemaGestion() {} //constructor vacio

    ~SistemaGestion() { // Liberar la memoria de los clientes
        for (Cliente* cliente : clientes) {
            delete cliente;
        }
    }

    void cargarClientes(const string& archivoClientes) {
        ifstream archivo(archivoClientes);
        if (archivo.is_open()) {
            string linea;
            while (getline(archivo, linea)) {
                stringstream ss(linea);
                int numero;
                string nombre, apellido, tipo, estado;
                int anio;

                ss >> numero >> nombre >> apellido >> tipo >> anio >> estado;

                Cliente* cliente = nullptr;
                if (tipo == "plata") {
                    cliente = new ClientePlata(numero, nombre, apellido, anio, estado);
                } else if (tipo == "oro") {
                    cliente = new ClienteOro(numero, nombre, apellido, anio, estado);
                } else if (tipo == "black") {
                    cliente = new ClienteBlack(numero, nombre, apellido, anio, estado);
                }

                if (cliente != nullptr) {
                    clientes.push_back(cliente);
                }
            }

            archivo.close();
        }
    }

    void cargarTransacciones(const string& archivoTransacciones) {
        ifstream archivo(archivoTransacciones);
        if (archivo.is_open()) {
            string linea;
            while (getline(archivo, linea)) {
                stringstream ss(linea);
                int numero;
                double cantidad;
                string tipo;
                int dia, mes, anio;

                ss >> numero >> cantidad >> tipo >> dia >> mes >> anio;

                Transaccion transaccion(numero, cantidad, tipo, dia, mes, anio);
                transacciones.push_back(transaccion);
            }

            archivo.close();
        }
    }

    void agregarCliente(Cliente* cliente) {
        clientes.push_back(cliente);
    }

    void eliminarCliente(int numeroCliente) {
        for (auto it = clientes.begin(); it != clientes.end(); ++it) {
            if ((*it)->getNumero() == numeroCliente) {
                delete *it;
                clientes.erase(it);
                break;
            }
        }
    }

    Cliente* buscarCliente(int numeroCliente) {
        for (Cliente* cliente : clientes) {
            if (cliente->getNumero() == numeroCliente) {
                return cliente;
            }
        }
        return nullptr;
    }

    void imprimirClientes() const {
        for (const Cliente* cliente : clientes) {
            cliente->imprimir();
            cout << endl;
        }
    }

    void imprimirTransacciones() const {
        for (const Transaccion& transaccion : transacciones) {
            transaccion.imprimir();
            cout << endl;
        }
    }
};


#endif //PROYECTO_SALINAS_OJEDA_BUGLIOTTI_SISTEMAGESTION_H
