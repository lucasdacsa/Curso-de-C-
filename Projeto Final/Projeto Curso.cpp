#include <iostream>
#include <string>

using namespace std;



int main () {

string titulo, genero, ano; 
float nota;
int opcao;

cout << "\n ---SISTEMA DE GERENCIAMENTO DE FILMES--- " << endl;

cout << "\n--- MENU ---" << endl;
cout << "1 - Cadastrar Filme" << endl;
cout << "2 - Listar Filmes" << endl;
cout << "3 - Sair" << endl;
cin >> opcao;

cout << "Digite o Titulo do Filme: " << endl;
cin >> (titulo); // getline, aceita titulos com espaço sem ele imprimiria apenas ate o primeiro espaço da frase

cout << "Digite o Genero do filme: " << endl;
cin >> genero;

cout << "Digite o ano do filme: " << endl;
cin >> ano;

cout << "Digite sua nota de 0.0 a 10.0: " << endl;
cin >> nota;


if (nota >=0.0 and nota <=10.0) {

cout << "\n--- FILME CADASTRADO COM SUCESSO --" << endl;

cout << "O nome do titulo e: " << titulo << endl;

cout << "O genero do filme e: " << genero << endl;

cout << "O ano do filme e: " << ano << endl;

cout << "Sua nota e: " << nota << endl;

}

else {
    cout << "Dados Invalidos " << endl;
}

switch (opcao) {

case 1:
cout << "Digite 1 para Escolher um titulo: " << opcao << endl;

break;

case 2: cout << "Digite 2 para escolher um genero: " << opcao << endl;

break;

case 3: cout << "Digite 3 para escolher um genero: " << opcao << endl;

}



    return 0;
}

