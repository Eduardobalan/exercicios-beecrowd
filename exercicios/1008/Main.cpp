#include <iostream>

using namespace std;

int main() {
    int idFun, hora;
    float salario;
    cin >> idFun;
    cin >> hora;
    cin >> salario;

    cout << "NUMBER = " << idFun << endl;
    printf("SALARY = U$ %.2f\n", (hora*salario));

    return 0;
}