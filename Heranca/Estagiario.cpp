#include "Estagiario.hpp"

// Construtor da classe Estagiario
Estagiario::Estagiario(const std::string& nome, int id, double salarioBase)
    : Funcionario(nome, id, salarioBase * 0.8) {}

// Implementação do método para calcular o salário total do estagiário
double Estagiario::calcularSalarioTotal() const {
    return salarioBase;
}

