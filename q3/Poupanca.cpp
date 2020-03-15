#include "Poupanca.h"

Poupanca::Poupanca(std::string nome, int num, double sld, int var, double taxa)
    : Conta(nome, num, sld)
{

    variacao = var;
    taxaRendimento = taxa;

}

double Poupanca::render(){

    if(variacao == 51)
        return (saldo*taxaRendimento)/100.00;

    if(variacao == 1)
        return (saldo*(taxaRendimento+0.5))/100.00;
    else
        return 0;
    
}

int Poupanca::getVariacao(){

    return variacao;
}

double Poupanca::getTaxa(){

    return taxaRendimento;
}

void Poupanca::setVariacao(int val){

    variacao = val;
}

void Poupanca::setTaxa(double taxa){

    taxaRendimento = taxa;
}