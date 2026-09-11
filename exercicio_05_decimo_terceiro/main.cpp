#include <iostream>

using namespace std;

int main() {

    double salarioMensal, decimoTerceiro;
    int mesesTrabalhados;

    cout << "Entre com o salario mensal: ";
    cin >> salarioMensal;

    cout << "Entre com os meses trabalhados: ";
    cin >> mesesTrabalhados;

    decimoTerceiro = (salarioMensal / 12) * mesesTrabalhados;

    cout << "Valor do 13 salario: R$ " << decimoTerceiro;
}