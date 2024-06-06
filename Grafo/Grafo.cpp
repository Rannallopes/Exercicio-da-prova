#include "Grafo.hpp"  // Inclui o arquivo de cabeçalho do grafo
#include <vector>     // Inclui a biblioteca vector para usar vetores
#include <iostream>   // Inclui a biblioteca iostream para operações de entrada e saída
#include <fstream>    // Inclui a biblioteca fstream para operações de arquivo
#include <string>     // Inclui a biblioteca string para manipulação de strings
#include <cstdlib>    // Inclui a biblioteca cstdlib para a função system()

// Construtor da classe Grafo. Inicializa o número de vértices (V) e cria a lista de adjacência com 'vertices' elementos.
Grafo::Grafo(int vertices) : V(vertices), listaAdjacencia(vertices) {}

// Adiciona uma aresta entre os vértices v e w.
void Grafo::adicionarAresta(int v, int w) {
    listaAdjacencia[v-1].push_back(w);  // Adiciona w à lista de adjacência de v
    listaAdjacencia[w-1].push_back(v);  // Adiciona v à lista de adjacência de w
}

// Verifica se dois vértices v e w são vizinhos.
bool Grafo::saoVizinhos(int v, int w) {
    for (int vizinho : listaAdjacencia[v-1]) {  // Percorre a lista de adjacência de v
        if (vizinho == w) {  // Se encontrar w na lista, retorna true
            return true;
        }
    }
    return false;  // Se não encontrar w na lista, retorna false
}

// Retorna a lista de vizinhos do vértice v.
std::vector<int> Grafo::obterVizinhos(int v) {
    return listaAdjacencia[v-1];
}

// Imprime a lista de adjacência do grafo.
void Grafo::imprimirListaAdjacencia() {
    for (int i = 0; i < V; ++i) {  // Para cada vértice
        std::cout << i+1 << ": ";  // Imprime o número do vértice
        for (int vizinho : listaAdjacencia[i]) {  // Para cada vizinho
            std::cout << vizinho << " ";  // Imprime o vizinho
        }
        std::cout << std::endl;  // Nova linha após cada vértice
    }
}

// Gera uma imagem do grafo em formato PNG usando Graphviz.
void Grafo::gerarImagem(const std::string &filename) {
    std::ofstream arquivo(filename);  // Cria e abre um arquivo para escrita
    arquivo << "graph G {\n";  // Escreve o início da definição do grafo
    for (int i = 0; i < V; ++i) {  // Para cada vértice
        for (int vizinho : listaAdjacencia[i]) {  // Para cada vizinho
            if (i + 1 < vizinho) {  // Para evitar duplicação de arestas
                arquivo << "  " << i + 1 << " -- " << vizinho << ";\n";  // Escreve a aresta no arquivo
            }
        }
    }
    arquivo << "}\n";  // Escreve o fim da definição do grafo
    arquivo.close();  // Fecha o arquivo

    // Comando para gerar a imagem PNG do grafo usando o Graphviz
    std::string comando = "dot -Tpng " + filename + " -o grafo.png";
    system(comando.c_str());  // Executa o comando
}

