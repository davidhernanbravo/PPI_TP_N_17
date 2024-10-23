#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "articulo.hpp"
#include "cliente.hpp"

#include <list>
#include <string>

using namespace std;

class Pedido 
    {
    private:
        string codigo;
        Cliente* cliente;
        list<Articulo*> articulos;  // Usamos una lista en lugar de un vector

    public:
        Pedido(string codigo, Cliente* cliente);

        string obtenerCodigo();
        void adjuntar(Articulo* articulo);
        void mostrar();
    };

#endif