#include "../include/pedido.hpp"

#include <iostream>

using namespace std;

Pedido::Pedido(string codigo, Cliente* cliente)
    : codigo(codigo), cliente(cliente) {}

string Pedido::obtenerCodigo()
    {
        return codigo;
    }

void Pedido::adjuntar(Articulo* articulo) 
    {
        articulos.push_back(articulo);  // Insertamos el artículo en la lista
    }

void Pedido::mostrar()
    {
        cout << "Pedido Codigo Nro: " << codigo << endl;
        cout << "Cliente: " << cliente->obtenerNombre() << " (" << cliente->obtenerCodigo() << "), Domicilio: " << cliente->obtenerDomicilio() << endl;
        cout << "Articulos del pedido:" << endl;
        
        // Usamos for-range para iterar sobre la lista de artículos
        for (const auto& articulo : articulos) 
            {
                cout << "- " << articulo->obtenerNombre() << " (Codigo: " << articulo->obtenerCodigo() << "), Precio: $" << articulo->obtenerPrecio() << endl;
            }
        cout << endl;
        cout << "---------------------------------------------------------------" << endl;

    }