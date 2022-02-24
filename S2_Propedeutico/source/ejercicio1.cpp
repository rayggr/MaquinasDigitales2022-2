#include <iostream>
using namespace std;

int main(){
    float entrada;
    cout << "Igresa un dato: ";
    cin >> entrada;

    if(entrada > 0) {
        cout << "El valor es mayor que 0";
    }else{
        cout << "El numero + 10 es " << entrada + 10 << endl;
    }

    return 0;
}