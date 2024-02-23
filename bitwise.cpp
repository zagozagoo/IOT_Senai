#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

// 1. Utilizando operadores bitwise, crie uma classe Binario que gerencie a impressão de
// números no formato binário. A construtora da classe deve receber um número inteiro como
// parâmetro. Por exemplo:
// Binario b1(10);
// b1.print(); // imprimir o número 10 em formato binário ou seja "1010".
// Internamente o número deve ser armazenado como um atributo do tipo unsigned char.

class Binario
{
private:
    unsigned char numero;

public:
    Binario(int num)
    {
        if (num < 0)
            num = 0;
        else if (num > 255) //o maximo de unsigned char eh 255
            num = 255;

        numero = static_cast<unsigned char>(num); // garante que vai ser unsigned
    }

    void print()
    {
        for (int i = 7; i >= 0; --i)
        {
            cout << ((numero >> i) & 1);
        }
    }
};

int main()
{
    Binario b1(10);
    b1.print();  // deve dar 00001010
    return 0;
}
