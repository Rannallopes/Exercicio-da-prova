#include "Gerente.hpp" // Inclui a definição da classe Gerente

// Implementação do construtor da classe Gerente
Gerente::Gerente(const std::string& nome, int id, double salarioBase, double bonusAnual)
    : Funcionario(nome, id, salarioBase), bonusAnual(bonusAnual) {}

// Implementação do método para calcular o salário total do gerente
double Gerente::calcularSalarioTotal() const {
    return salarioBase + bonusAnual; // O salário total é a soma do salário base e do bônus anual
}
