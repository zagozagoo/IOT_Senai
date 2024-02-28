#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

// 2) Faça uma classe para permitir a impressão de objeitos da classe Binario.
// Exemplo: 
// Binario b1.bin(1010);
//b1.imprimiBin; //imprimindo o binário em forma de decimal ou seja "10"

class Binario
{
private:
    int valor;

public:
    // Construtor que recebe o binario
    Binario(int bin) : valor(bin) {}

    // Método para imprimir o valor binario em forma decimal
    void imprimeBin() const
    {
        cout << "Decimal: " << valor << endl;
    }
};

int main()
{
    Binario b1(1010);
    b1.imprimeBin();

    return 0;
}
