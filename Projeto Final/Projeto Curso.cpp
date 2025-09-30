#include <iostream>
#include <string>

using namespace std;



int main () {

string titulo, genero, ano;
float nota;

cout << "\n ---SISTEMA DE GERENCIAMENTO DE FILMES--- " << endl;

cout << "Digite o Titulo do Filme: " << endl;
cin >> titulo;

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

    return 0;
}

