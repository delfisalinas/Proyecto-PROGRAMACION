//
// Created by delfi on 23/5/2023.
//
#include <string>
#include <sstream>
#include "cliente.h"
#include "clientePlata.h"
#include "ClienteOro.h"
#include "ClienteBlack.h"
#include "Transaccion.h"
#include "SistemaGestion.h"

void Cliente::setNumero(int num) {
    numero=num;
}
int Cliente::getNumero() const {
    return numero;
}
void Cliente::setNombre(string n) {
    nombre=n;
}
string Cliente::getNombre() const {
    return nombre;
}
void Cliente::setApellido(string ap) {
    apellido=ap;
}
string Cliente::getApellido() const {
    return apellido;
}
void Cliente::setTipo(string t) {
    tipo=t;
}
string Cliente::getTipo() const {
    return tipo;
}
void Cliente::setAnio(int an) {
    anio=an;
}
int Cliente::getAnio() const {
    return anio;
}
void Cliente::setEstado(string e) {
    estado=e;
}
string Cliente::getEstado() const {
    return estado;
}