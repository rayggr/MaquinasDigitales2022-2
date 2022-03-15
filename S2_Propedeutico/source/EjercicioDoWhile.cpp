#include <iostream>

using namespace std;

int main() {
    int numero = 0;
    do {
        cout << "Ingresa un numero: ";
        cin >> numero;

    }while ((numero >= 0) && (numero <= 10));


    return 0;
}