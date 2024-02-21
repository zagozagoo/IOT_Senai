#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

//Fazer classes privadas sobre um carro usando cor(string), motor(string), rodas: quando for definido if < 4, deverá exibir "Quantidade errada de rodas". E um método "barulho" que exibe "Biiip

class Carro
{
  private:
    string m_cor;
    string m_motor;
    int m_rodas;

  public:
    void SetCor(string cor)
    {
      m_cor = cor;
    }
    void SetMotor(string motor)
    {
      m_motor = motor;
    }
    void SetRodas(int rodas)
    {
      if (rodas < 4)
        m_rodas -= 1;
      else
        m_rodas = rodas;
    }

    void Barulho()
    {
      cout << "Biiip" << endl;
    }

    void Exibir()
    {
      cout << "Cor: " << m_cor << endl;
      cout << "Motor: " << m_motor << endl;
      cout << "Rodas: " << m_rodas << endl;
    }

    string GetCor()
    {
      return m_cor;
    }

    string GetMotor()
    {
      return m_motor;
    }

    int GetRodas()
    {
      return m_rodas;
    }
};

int main()
{
  Carro carro1;
  carro1.SetCor("Rosa");
  carro1.SetMotor("V8");
  carro1.SetRodas(4);
  carro1.Barulho();
  carro1.Exibir();
  return 0;
}
