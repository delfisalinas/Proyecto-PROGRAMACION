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

int main() {
    SistemaGestion sistema;
    sistema.cargarClientes("clientes.txt");
    sistema.cargarTransacciones("transacciones.txt");

    // Ejemplo de uso
    sistema.imprimirClientes();
    sistema.imprimirTransacciones();

    // Liberar memoria
    sistema.eliminarCliente(2);

    return 0;
}

