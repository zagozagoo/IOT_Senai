#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

// //Criar uma classe Data, para armazenar: dia, mês e ano. Implementar o
// controle de dados de entrada. Faça um método que apareça o dia, mês e o ano.
class Data
{
private:
  int m_dia;
  int m_mes;
  int m_ano;

public:
  void setDia(int dia)
  {
    if (dia < 1 & dia > 31)
      cout <<"Número de dia inválido" << endl;
    else
      m_dia = dia;
  }
  void setMes(int mes)
  {
    if (mes < 1 & mes > 12)
      cout <<"Número de mês inválido" << endl;
    else
      m_mes = mes;
  }
  void setAno(int ano) { m_ano = ano;}
  int getDia() { return m_dia; }
  int getMes() { return m_mes; }
  int getAno() { return m_ano; }
};

int main()
{
  Data data1;
  data1.setDia(18);
  data1.setMes(02);
  data1.setAno(2024);
  cout << "Dia: " << data1.getDia() << endl;
  cout << "Mês: " << data1.getMes() << endl;
  cout << "Ano: " << data1.getAno() << endl;
  return 0;
}
