#include <iostream>

using namespace std;

int main() {

    int idade, categoria;
    double valorIngresso, valorMeia;

    cout << "Entre com o valor do ingresso (R$): ";
    cin >> valorIngresso;

    cout << "Entre com a idade: ";
    cin >> idade;

    cout << "Selecione a categoria:\n"
         << "1 - Estudante\n"
         << "2 - Professor\n"
         << "3 - Nenhuma das anteriores\n"
         << "Opcao: ";
    cin >> categoria;

    valorMeia = valorIngresso / 2;

    if (idade >= 60 || categoria == 1 || categoria == 2) {
        cout << "Direito a meia-entrada confirmado!" << endl;
        cout << "Valor a pagar: R$ " << valorMeia << endl;
    }
    else {
        cout << "Ingresso inteiro." << endl;
        cout << "Valor a pagar: R$ " << valorIngresso << endl;
    }
}