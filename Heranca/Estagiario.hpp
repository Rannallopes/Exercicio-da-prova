#ifndef ESTAGIARIO_HPP
#define ESTAGIARIO_HPP

#include "Funcionario.hpp"

class Estagiario : public Funcionario {
public:
    // Construtor da classe Estagiario
    Estagiario(const std::string& nome, int id, double salarioBase);
    // Função para calcular o salário total do estagiário
    double calcularSalarioTotal() const override;
};

#endif // ESTAGIARIO_HPP
