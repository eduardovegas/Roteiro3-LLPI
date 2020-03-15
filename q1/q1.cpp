#include <iostream>

#include <vector>

#include "Assalariado.cpp"
#include "Horista.cpp"
#include "Comissionado.cpp"
#include "Funcionario.cpp"

int main(){

    std::vector<Funcionario*> funcionarios;
    Funcionario* h1 = new Horista("Ian", 9090, 2, 23, 60); // Horista é Funcionario

    funcionarios.push_back(new Assalariado("Fatima", 333, 1, 3000)); // Assalariado é Funcionario
    funcionarios.push_back(h1);
    funcionarios.push_back(new Comissionado("Claudio", 686, 3, 700, 60)); // Comissionado é Funcionario

    for(int i = 0; i < funcionarios.size(); i++){

        std::cout << "Funcionario: '" << funcionarios[i]->getNome() << "'" << std::endl; 
        std::cout << "Salario: " << funcionarios[i]->calcularSalario() << std::endl;
        getchar();
        
    }

    return 0;

}