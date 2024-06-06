#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp" // Inclui o cabeçalho da classe base Funcionario

// Declaração da classe Gerente que herda da classe Funcionario
class Gerente : public Funcionario {
private:
    double bonusAnual; // Atributo privado para armazenar o bônus anual do gerente

public:
    // Construtor da classe Gerente
    Gerente(const std::string& nome, int id, double salarioBase, double bonusAnual);

    // Implementação do método virtual puro da classe base
    double calcularSalarioTotal() const override;
};

#endif // GERENTE_HPP
