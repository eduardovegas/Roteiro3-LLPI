#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(std::string nome, double salario, int num, double sld)
    : Conta(nome, num, sld)
{

    salarioMensal = salario;

}

void ContaCorrente::definirLimite(){

    limite = 2*salarioMensal;
}

void ContaCorrente::depositar(double valor){

    if(saldo + valor > limite){

        std::cout << "Ultrapassa o limite" << std::endl;
        return;
    }

    saldo = saldo + valor;

    std::cout << "Deposito realizado com sucesso" << std::endl;
}

double ContaCorrente::getSalario(){

    return salarioMensal;
}

double ContaCorrente::getLimite(){

    return limite;
}

void ContaCorrente::setSalario(double sal){

    salarioMensal = sal;
    definirLimite();
}