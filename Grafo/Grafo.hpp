#ifndef GRAFO_HPP
#define GRAFO_HPP

// Inclui as bibliotecas necessárias
#include <vector>    // Biblioteca para utilizar o container vector
#include <iostream>  // Biblioteca para operações de entrada e saída
#include <fstream>   // Biblioteca para operações de arquivo
#include <string>    // Biblioteca para utilizar o tipo de dado string

// Declaração da classe Grafo
class Grafo {
public:
    // Construtor que inicializa o grafo com um número especificado de vértices
    Grafo(int vertices);

    // Método para adicionar uma aresta entre dois vértices v e w
    void adicionarAresta(int v, int w);

    // Método para verificar se dois vértices são vizinhos
    bool saoVizinhos(int v, int w);

    // Método para obter a lista de vizinhos de um vértice v
    std::vector<int> obterVizinhos(int v);

    // Método para imprimir a lista de adjacência do grafo
    void imprimirListaAdjacencia();

    // Método para gerar uma imagem do grafo e salvá-la em um arquivo
    void gerarImagem(const std::string &filename);

private:
    // Número de vértices no grafo
    int V;

    // Lista de adjacência do grafo, onde cada vértice possui uma lista de vértices adjacentes
    std::vector<std::vector<int>> listaAdjacencia;
};


#endif // GRAFO_HPP
