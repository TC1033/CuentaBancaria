#pragma once // previene múltiples definiciones (lo mismo que poner guardas)
#include <iostream>
// Definición de la clase, no la cambies POR FAVOR

class CuentaBancaria{
    public:
        // Constructores
        CuentaBancaria();
        CuentaBancaria(std::string, std::string, double);
        // Metodos de acceso
        std::string getNombre();
        std::string getNumCuenta();
        double getSaldo();
        // Metodos modificadores
        void setNombre(std::string);
        void setNumCuenta(std::string);
        void setSaldo(double);
        //Adicionales
        void imprime();
        int retira(double);
        void deposita(double);
        int transfiere(CuentaBancaria&, double);
    private:
        std::string nombre;
        std::string numCuenta;
        double saldo;
};