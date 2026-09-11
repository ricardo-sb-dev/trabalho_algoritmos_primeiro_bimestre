#include <iostream>

using namespace std;

int main() {

    int idade;

    cout << "Entre com a idade: ";
    cin >> idade;

    if (idade < 16) {
        cout << "A pessoa ainda nao pode votar.";
    }
    else if (idade < 18) {
        cout << "A pessoa pode votar, mas o voto e facultativo.";
    }
    else if (idade <= 70) {
        cout << "A pessoa deve votar.";
    }
    else {
        cout << "A pessoa pode votar, mas o voto e facultativo.";
    }
}