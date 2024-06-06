#include <iostream>                  // Inclui a biblioteca para operações de entrada e saída
#include "FuncionarioRegular.hpp"    // Inclui a definição da classe FuncionarioRegular
#include "Gerente.hpp"               // Inclui a definição da classe Gerente
#include "Estagiario.hpp"            // Inclui a definição da classe Estagiario

int main() {
    // Criação de objetos para os diferentes tipos de funcionários

    // Criando um funcionário regular com nome "Alice", id 1 e salário base 3000.0
    FuncionarioRegular fr("Alice", 1, 3000.0);

    // Criando um gerente com nome "Rodrigo", id 2, salário base 5000.0 e bônus anual de 2000.0
    Gerente g("Rodrigo", 2, 5000.0, 2000.0);

    // Criando um estagiário com nome "Elaine", id 3 e salário base 2000.0 (ajustado para 80%)
    Estagiario e("Elaine", 3, 2000.0);

    // Imprimindo os salários totais dos funcionários
    std::cout << "Funcionário Regular Salário Total: " << fr.calcularSalarioTotal() << "\n";
    std::cout << "Gerente Salário Total: " << g.calcularSalarioTotal() << "\n";
    std::cout << "Estagiário Salário Total: " << e.calcularSalarioTotal() << "\n";

    return 0;
}
