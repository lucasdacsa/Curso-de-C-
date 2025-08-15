#include <iostream>
#include <string>

using namespace std;

// Sem parâmetro e sem retorno
void mostrarMensagem() {
  cout << "Programação em c++\n"; 
}

// Sem parâmetro e com retorno
int obterNumero() {
  return 32;
}

// Com parâmetro e sem retorno
void mensagemDeBoasVindas(string nome) {
  cout << "Olá, " << nome << ", seja bem-vindo(a)!\n";
}

// Com parâmetro e com retorno (calcula a soma, não a subtração)
int somar(int n1, int n2) {
  return n1 + n2;
}

int main() {
  string nome; // Declara a variável nome

  mostrarMensagem();

  cout << obterNumero() << endl; // Exibe o resultado de obterNumero()

  cout << "Digite seu nome: ";
  cin >> nome; // Lê o nome do usuário
  mensagemDeBoasVindas(nome);

  return 0;
}