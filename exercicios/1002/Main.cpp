#include <iostream>

using namespace std;

int main() {
    double PI = 3.14159;
    double raio;

    cin >> raio;

    double A = (raio*raio)*PI;

    printf("A=%.4f\n", A);

    return 0;
}