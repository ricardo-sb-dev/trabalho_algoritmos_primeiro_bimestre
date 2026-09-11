#include <iostream>

using namespace std;

int main() {

    double rendaFamiliar, rendaPorPessoa;
    int numeroDePessoas;

    cout << "Entre com a renda familiar (R$): ";
    cin >> rendaFamiliar;

    cout << "Entre com o numero de pessoas: ";
    cin >> numeroDePessoas;

    rendaPorPessoa = rendaFamiliar / numeroDePessoas;

    cout << "Renda por pessoa: R$ " << rendaPorPessoa << endl;

    if (rendaPorPessoa <= 218) {
        cout << "A familia atende ao criterio de renda do Bolsa Fam1ilia.";
    }
    else {
        cout << "A familia nao atende ao criterio de renda do Bolsa Familia.";
    }
}