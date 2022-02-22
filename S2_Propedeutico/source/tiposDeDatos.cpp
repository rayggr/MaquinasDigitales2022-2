#include <iostream>
using namespace std;

int myFunc(int a){
  return 5+a;
}

int main(){
  cout << "Tamanio en bytes de <char>:" << sizeof(char) << endl;
  cout << "Tamanio en bytes de <bool>:" << sizeof(bool) << endl;
  cout << "Tamanio en bytes de <int>:" << sizeof(int) << endl;
  cout << "Tamanio en bytes de <float>:" << sizeof(float) << endl;
  cout << "Tamanio en bytes de <long>:" << sizeof(long) << endl;
  cout << "Tamanio en bytes de <double>:" << sizeof(double) << endl;
  cout << myFunc(5) << endl;
  return 0;
}
