#include <iostream> 


using namespace std;

//voto obrigatorio:maior de 18
//voto facultativo::maior de 16 e menor de 18 ou maior de 60

int main() {
    cout << "---MENU---\n";
    cout << "Opção 1\n";
    cout << "Opção 2\n";
    cout << "Opção 3\n";

    int opcao;
    cout << "escolha uma opção: ";
    cin >> opcao; // 1, 2, 3

    switch (opcao){

        case 1: 
        cout << "voçê escolheu a primeira opção: \n";
        break;

        case 2:
        cout << "voçê escolheu a primeira opção: \n";
        break;

        case 3:
        cout << "voçê escolheu a primeira opção: \n";
        break;

        default: 
        cout << "opção invalida. Tente Novamente!\n";

    }


    return 0;

}