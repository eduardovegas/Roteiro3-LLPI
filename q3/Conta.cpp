#include "Conta.h"

Conta::Conta(std::string nome, int numero, double sld)
{

    nomeCliente = nome;
    numConta = numero;
    saldo = sld;

}

void Conta::sacar(double valor){

    if(saldo - valor < 0.0){

        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }

    saldo = saldo - valor;

    std::cout << "Saldo realizado com sucesso" << std::endl;
}

void Conta::depositar(double valor){


    saldo = saldo + valor;

    std::cout << "Deposito realizado com sucesso" << std::endl;
}

double Conta::getSaldo(){

    return saldo;
}

int Conta::getNumConta(){

    return numConta;
}

std::string Conta::getNomeCliente(){

    return nomeCliente;
}