#include "FuncionarioRegular.hpp" // Inclui a definição da classe FuncionarioRegular

// Implementação do construtor da classe FuncionarioRegular
FuncionarioRegular::FuncionarioRegular(const std::string& nome, int id, double salarioBase)
    : Funcionario(nome, id, salarioBase) {}

// Implementação do método para calcular o salário total do funcionário regular
double FuncionarioRegular::calcularSalarioTotal() const {
    return salarioBase; // O salário total é igual ao salário base
}
