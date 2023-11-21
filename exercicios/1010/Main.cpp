#include <iostream>

using namespace std;

int main() {

 int fab1, fab2, quant1, quant2;
    double valor1, valor2, total;

    scanf("%d %d %lf",&fab1, &quant1, &valor1);
    scanf("%d %d %lf",&fab2, &quant2, &valor2);

    total = (quant1*valor1)+ (quant2*valor2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}