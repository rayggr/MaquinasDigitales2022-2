#include <iostream>

using namespace std;

int main(){

  int arreglo[] = {5,8,6,3,11,1,9,7};

  for(int i = 0; i < 8; i++) {
    if(arreglo[i] % 2 == 0){
      cout << "Par: " << arreglo[i] << endl;
    }else {
      cout << "Impar: " << arreglo[i] << endl;
    }
  }

  return 0;
}
