#include <iostream>

using namespace std;

int main() {
   double media, nota1, nota2, nota3;

    cin >> nota1;
    cin >> nota2;
    cin >> nota3;
    media = ((nota1*2)+(nota2*3)+(nota3*5))/10;


    printf("MEDIA = %.1f\n", media);
    return 0;
}