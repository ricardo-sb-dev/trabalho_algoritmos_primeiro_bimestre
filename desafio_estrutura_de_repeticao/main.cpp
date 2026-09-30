#include <iostream>

using namespace std;

int main() {

    int numeroDeFuncionarios;

    cout << "Entre com o numero de funcionarios: ";
    cin >> numeroDeFuncionarios;

    for (int i = 1; i <= numeroDeFuncionarios; i++) {

        double salarioMensal, decimoTerceiro;
        int mesesTrabalhados;

        cout << "Funcionario " << i << ":" << endl;

        cout << "Entre com o salario mensal: ";
        cin >> salarioMensal;

        cout << "Entre com os meses trabalhados: ";
        cin >> mesesTrabalhados;

        decimoTerceiro = (salarioMensal / 12) * mesesTrabalhados;

        cout << "Valor do 13 salario: R$ " << decimoTerceiro << endl;
    }
}