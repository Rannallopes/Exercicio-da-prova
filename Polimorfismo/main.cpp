#include <iostream>
#include <vector>
#include "Caminhao.hpp"
#include "Van.hpp"

int main() {
    // Criando objetos de Caminhao e Van
    Caminhao caminhao("Volvo", "FH", 20, 3);
    Van van("Mercedes", "Sprinter", 3, 12);

    // Armazenando os objetos em um vetor de ponteiros para Veiculo
    std::vector<Veiculo*> veiculos = { &caminhao, &van };

    // Exibindo os dados dos veículos
    for (const auto& veiculo : veiculos) {
        veiculo->exibirDados();
    }

    return 0;
}
