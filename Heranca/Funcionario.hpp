#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

// Inclui a biblioteca de strings para manipulação de nomes
#include <string>

// Declaração da classe Funcionario
class Funcionario {
protected:
    // Atributos protegidos que podem ser acessados pelas classes derivadas
    std::string nome;  // Nome do funcionário
    int id;            // Identificação do funcionário
    double salarioBase; // Salário base do funcionário

public:
    // Construtor da classe Funcionario
    Funcionario(const std::string& nome, int id, double salarioBase);

    // Método virtual puro para calcular o salário total
    // Torna a classe Funcionario abstrata
    virtual double calcularSalarioTotal() const = 0;

    // Destrutor virtual
    // Permite a destruição correta de objetos derivados
    virtual ~Funcionario() {}
};

// Finaliza a proteção contra inclusões múltiplas
#endif // FUNCIONARIO_HPP

