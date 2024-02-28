// 3) Acrescente no exercício 1 uma classe USANDO operador bitwise para verificar se o número é par ou ímpar.

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class Binario {
private:
    unsigned char numero;

public:
    Binario(int num) {
        if (num < 0)
            num = 0;
        else if (num > 255)
            num = 255;

        numero = static_cast<unsigned char>(num);
    }

    void print() const {
        for (int i = 7; i >= 0; --i) {
            cout << ((numero >> i) & 1);
        }
        cout << endl;
    }

    bool isPar() const {
        return (numero & 1) == 0;
    }
};

int main() {
    Binario b1(10);
    b1.print();  // Deve dar 00001010
    std::cout << "É par? " << (b1.isPar() ? "Sim" : "Não") << endl;

    return 0;
}
