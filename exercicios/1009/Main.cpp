#include <iostream>

using namespace std;

int main() {
    char nome[50];
    double vendas, salario, total;

    cin >> nome;
    cin >> salario;
    cin >> vendas;

    total = ((vendas*0.15)+salario);

    printf("TOTAL = R$ %.2f\n", total);
    return 0;
}