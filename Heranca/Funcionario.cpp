#include "Funcionario.hpp" // Inclui a definição da classe Funcionario

// Implementação do construtor da classe Funcionario
Funcionario::Funcionario(const std::string& nome, int id, double salarioBase)
    : nome(nome), id(id), salarioBase(salarioBase) {}
