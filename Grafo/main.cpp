#include "Grafo.hpp"  // Inclui a definição da classe Grafo
#include <vector>     // Inclui a biblioteca vector para usar vetores
#include <iostream>   // Inclui a biblioteca iostream para operações de entrada e saída

int main() {
    // Cria um grafo com 5 vértices
    Grafo g(5);
    
    // Adiciona arestas entre os vértices
    g.adicionarAresta(1, 2);
    g.adicionarAresta(1, 5);
    g.adicionarAresta(2, 5);
    g.adicionarAresta(2, 4);
    g.adicionarAresta(2, 3);
    g.adicionarAresta(3, 4);
    g.adicionarAresta(4, 5);
    
    // Imprime a lista de adjacência do grafo
    g.imprimirListaAdjacencia();

    // Verifica se os vértices 2 e 3 são vizinhos e imprime o resultado
    int v1 = 2, w1 = 3;
    std::cout << "Vértices " << v1 << " e " << w1 << " são vizinhos: " 
              << (g.saoVizinhos(v1, w1) ? "Sim" : "Não") << std::endl;

    // Verifica se os vértices 1 e 2 são vizinhos e imprime o resultado
    int v2 = 1, w2 = 2;
    std::cout << "Vértices " << v2 << " e " << w2 << " são vizinhos: " 
              << (g.saoVizinhos(v2, w2) ? "Sim" : "Não") << std::endl;

    // Verifica se os vértices 1 e 3 são vizinhos e imprime o resultado
    int v3 = 1, w3 = 3;
    std::cout << "Vértices " << v3 << " e " << w3 << " são vizinhos: " 
              << (g.saoVizinhos(v3, w3) ? "Sim" : "Não") << std::endl;

    // Obtém e imprime a lista de vizinhos do vértice 2
    std::vector<int> vizinhos = g.obterVizinhos(v1);
    std::cout << "Vizinhos do vértice " << v1 << ": ";
    for (int vizinho : vizinhos) {
        std::cout << vizinho << " ";
    }
    std::cout << std::endl;

    // Gera uma imagem do grafo e salva no arquivo "grafo.dot"
    g.gerarImagem("grafo.dot");

    return 0;
}
