#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(std::string nome, double salario, int num, double sld)
    : ContaCorrente(nome, salario, num, sld)
{
}

void ContaEspecial::definirLimite(){

    limite = 4*salarioMensal;
}