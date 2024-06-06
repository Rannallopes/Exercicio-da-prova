#ifndef FUNCIONARIOREGULAR_HPP
#define FUNCIONARIOREGULAR_HPP

#include "Funcionario.hpp" // Inclui o cabeçalho da classe base Funcionario

// Declaração da classe FuncionarioRegular que herda da classe Funcionario
class FuncionarioRegular : public Funcionario {
public:
    // Construtor da classe FuncionarioRegular
    FuncionarioRegular(const std::string& nome, int id, double salarioBase);

    // Implementação do método virtual puro da classe base
    double calcularSalarioTotal() const override;
};

#endif // FUNCIONARIOREGULAR_HPP

