#ifndef CONTAA_H
#define CONTAA_H

#include <iostream>

class Conta
{
    
    protected:
        
        std::string nomeCliente;
        int numConta;
        double saldo;

    public:

        Conta(std::string, int, double);
        void sacar(double);
        virtual void depositar(double);

        double getSaldo();
        int getNumConta();
        std::string getNomeCliente();


        

};



#endif