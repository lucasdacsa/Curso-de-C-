#include <iostream>    //→ Permite usar cin e cout para entrada e saída no console.
#include <string>     //→ Permite trabalhar com strings (getline, texto com espaços).
#include <vector>    // → Permite usar vetores dinâmicos (vector), que são listas que podem crescer.
#include <limits>   // → Usado para limpar o buffer do teclado com cin.ignore().

using namespace std;

/*struct é como um molde para criar objetos. Aqui, cada Filme terá um título e um ano.
É como se fosse uma "ficha de cadastro" para um filme, Onde pode colocar as variaveis  */ 
struct Filme { 
    string titulo;
    string ano;
};

// Função para cadastrar filme
void cadastrarFilme(vector<Filme> &listaDeFilmes) {
    Filme novoFilme; // Cria uma "ficha" temporária para preencher.

    cout << "Digite o titulo do filme: ";
    getline(cin, novoFilme.titulo); // Pede ao usuario o titulo

    cout << "Digite o ano do filme: "; 
    getline(cin, novoFilme.ano);

    listaDeFilmes.push_back(novoFilme); // adiciona no vector

    cout << "=> Filme cadastrado com sucesso!" << endl;
}

// Função para listar filmes
void listarFilmes(const vector<Filme> &listaDeFilmes) {
    cout << "\n--- Filmes Cadastrados ---" << endl;

    if (listaDeFilmes.empty()) { 
        cout << "A lista esta vazia." << endl; 
    } else {
        for (const Filme &filme : listaDeFilmes) {
            cout << "-> Titulo: " << filme.titulo << " | Ano: " << filme.ano << endl;
        }
    }
}

// Função do menu principal
void menu() {
    vector<Filme> listaDeFilmes;  
    int opcao;

    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1 - Cadastrar Filme" << endl;
        cout << "2 - Listar Filmes" << endl;
        cout << "3 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // limpa o buffer

        if (opcao == 1) {
            cadastrarFilme(listaDeFilmes);
        } else if (opcao == 2) { 
            listarFilmes(listaDeFilmes);
        } else if (opcao == 3) { 
            cout << "Saindo..." << endl;
        } else {
            cout << "Opcao invalida!" << endl;
        }

    } while (opcao != 3);
}

int main() {
    menu();
    return 0;
}
