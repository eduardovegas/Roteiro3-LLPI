#include <iostream>

#include "Conta.cpp"
#include "ContaCorrente.cpp"
#include "ContaEspecial.cpp"
#include "Poupanca.cpp"

int main(){

    Poupanca p1("Jorge", 222, 250, 1, 10.0);
    ContaEspecial e1("Matheus", 3500, 789, 100);
    ContaCorrente cr1("Pedro", 2000, 99, 350);

    e1.definirLimite();
    cr1.definirLimite();
    
    std::cout << "\nSaldo de Jorge antes: " << p1.getSaldo() << std::endl;
    p1.depositar(1000);
    p1.sacar(500);
    std::cout << "Saldo de Jorge depois: " << p1.getSaldo() << std::endl;
    std::cout << "Taxa: " << p1.getTaxa() << " , Variacao: " << p1.getVariacao() << std::endl;
    std::cout << "Rendimento: " << p1.render() << std::endl;
    getchar();

    std::cout << "\nSaldo de Matheus antes: " << e1.getSaldo() << std::endl;
    p1.depositar(3000);
    p1.sacar(9000);
    std::cout << "Saldo de Matheus depois: " << e1.getSaldo() << std::endl;
    std::cout << "Limite: " << e1.getLimite() << std::endl;
    getchar();

    std::cout << "\nSaldo de Pedro antes: " << cr1.getSaldo() << std::endl;
    p1.depositar(50);
    p1.sacar(9000);
    std::cout << "Saldo de Pedro depois: " << cr1.getSaldo() << std::endl;
    std::cout << "Limite: " << cr1.getLimite() << std::endl;
    getchar();


    return 0;
}