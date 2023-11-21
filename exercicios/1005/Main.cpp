#include <iostream>

using namespace std;

int main() {
    double media, nota1, nota2;

    cin >> nota1;
    cin >> nota2;
    media = ((nota1*3.5)+(nota2*7.5))/11;

    printf("MEDIA = %.5f\n", media);
    return 0;
}