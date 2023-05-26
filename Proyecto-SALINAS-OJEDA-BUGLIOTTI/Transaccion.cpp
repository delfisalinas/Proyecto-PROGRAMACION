//
// Created by delfi on 26/5/2023.
//
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

void Transaccion::setNumero (int num){
    numero=num;
}
int Transaccion::getNumero() const {
    return numero;
}
void Transaccion::setCantidad (double cant){
    cantidad=cant;
}
double Transaccion::getCantidad() const{
    return cantidad;
}
void Transaccion::setTipo (string t){
    tipo=t;
}
string Transaccion::getTipo() const{
    return tipo;
}
void Transaccion::setDia (int d){
    dia=d;
}
int Transaccion::getDia() const{
    return dia;
}
void Transaccion::setMes (int m){
    mes=m;
}
int Transaccion::getMes() const{
    return mes;
}
void Transaccion::setAnio (int a){
    anio=a;
}
int Transaccion::getAnio() const{
    return anio;
}

void Transaccion::imprimir() const {
    cout << "Transacción: " << numero << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Tipo: " << tipo << endl;
    cout << "Fecha: " << dia << "/" << mes << "/" << anio << endl;
}