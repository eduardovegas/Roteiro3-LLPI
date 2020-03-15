#ifndef CORRENTE_H
#define CORRENTE_H

#include "Conta.h"

class ContaCorrente : public Conta
{

    protected:

        double salarioMensal;
        double limite;

    public:

        ContaCorrente(std::string nome, double salario, int num, double sld);
        virtual void definirLimite();
        void depositar(double);

        double getSalario();
        double getLimite();
        void setSalario(double sal);
};



#endif