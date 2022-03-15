#include <iostream>
#include <string>

using namespace std;

class TarjetaBancaria{
    public:
        string numTarjeta;
        string nombreTarjeta;
        string bancoEmisor;
        int mesVig;
        int anioVig;
        int nipTarjeta;

        TarjetaBancaria(string numTarjeta, string nombreTarjeta, string bancoEmisor,
                        int mesVig, int anioVig, int nipTarjeta){
            
            this->numTarjeta = numTarjeta;
            this->nombreTarjeta = nombreTarjeta;
            this->bancoEmisor = bancoEmisor;
            this->mesVig = mesVig;
            this->anioVig = anioVig;
            this->nipTarjeta = nipTarjeta;

        }

        void activarTarjeta(){
            cout << "La tarjeta: " << numTarjeta <<" ha sido activdada\n";
        }

        void anularTarjeta(){
            cout << "Tarjeta con terminacion: " << numTarjeta.substr(12,4) << " ha sido anulada\n";
        }

        void Pagar(float cantdiadPagada, int nip) {
            if( nip == nipTarjeta) {
                cout << "Pagado: $" << cantdiadPagada << endl;
            }else {
                cout << "Pago rechazado" << endl;
            }
        }
};


int main() {
    TarjetaBancaria tarjetaPrueba = TarjetaBancaria("5468789525435489","Raymundo Gonzalez","BBVA",02,22,1234);
    tarjetaPrueba.activarTarjeta();
    tarjetaPrueba.anularTarjeta();
    return 0;
}