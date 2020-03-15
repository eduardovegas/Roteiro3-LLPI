#ifndef ESPECIAL_H
#define ESPECIAL_H

#include "ContaCorrente.h"

class ContaEspecial : public ContaCorrente
{

    public:

        ContaEspecial(std::string nome, double salario, int num, double sld);
        void definirLimite();

};


#endif