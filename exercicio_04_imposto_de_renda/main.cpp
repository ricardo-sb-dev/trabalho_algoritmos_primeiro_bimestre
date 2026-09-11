#include <iostream>

using namespace std;

int main() {

    double salarioBruto, imposto;

    cout << "Entre com o salario bruto (R$): ";
    cin >> salarioBruto;

    if (salarioBruto <= 5000) {
        cout << "Isento de imposto de renda";
    }
    else if (salarioBruto <= 7350) {
        imposto = salarioBruto * 0.15;

        cout << "Imposto a pagar: R$ " << imposto;
    }
    else {
        imposto = salarioBruto * 0.275;

        cout << "Imposto a pagar: R$ " << imposto;
    }
}