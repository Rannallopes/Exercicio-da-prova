    
    
    
## Instalação

Para interagir com o 'Exercicio-da-prova', clone este repositório usando o Git:

```bash
git clone https://github.com/Rannallopes/Exercicio-da-prova.git

    
    Para gerar a imagem do Grafo utilizei Graphviz.
    Certifique-se de ter o graphviz instalado. No Ubuntu, você pode instalá-lo usando:
    sudo apt-get install graphviz
    Em seguida compile os arquivos digitando:
    g++ -o grafo main.cpp Grafo.cpp
    Execute digitando:
    ./grafo

    Observações:
    Linha de Código
    std::string comando = "dot -Tpng " + filename + " -o grafo.png";
    Detalhando o codigo
    std::string comando: Declara uma variável do tipo std::string chamada comando.
    "dot -Tpng " + filename + " -o grafo.png": Cria uma string que representa um comando a ser executado no terminal.
    "dot -Tpng ": Esta parte da string é o comando inicial que será usado para converter o arquivo .dot para uma imagem PNG. Aqui está o que cada parte do comando significa:
    dot: É o comando do Graphviz para processar arquivos .dot.
    -Tpng: Especifica o formato de saída, que neste caso é PNG.
    filename: Esta é a variável que contém o nome do arquivo .dot gerado anteriormente pelo método gerarImagem.
    " -o grafo.png": Esta parte do comando especifica o arquivo de saída.
    -o: Especifica o nome do arquivo de saída.
    grafo.png: O nome do arquivo de saída, que será a imagem PNG do grafo.
    O comando dot -Tpng grafo.dot -o grafo.png é usado para converter o arquivo .dot em uma imagem PNG.
    A função system(comando.c_str()) executa esse comando no sistema operacional. Ela é uma função da biblioteca padrão C/C++ que permite executar comandos no sistema operacional a partir do programa.
    O comando passado para system é executado como se fosse digitado no terminal/linha de comando.