#ifndef POUPANCA_H
#define POUPANCA_H

#include "Conta.h"

class Poupanca : public Conta
{
    private:

        int variacao;
        double taxaRendimento;

    public:

        Poupanca(std::string nome, int num, double sld, int var, double taxa);
        double render();

        int getVariacao();
        double getTaxa();
        void setVariacao(int val);
        void setTaxa(double taxa);
};



#endif