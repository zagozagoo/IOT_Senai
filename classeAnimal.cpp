#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

//usando métodos privados e encapsulados

class Animal
{
  private:
    int m_idade; //main nome
    float m_peso;
    string m_nome;

  public:
    void SetIdade(int idade)
    {
      m_idade = idade;
    }

    void SetPeso(float peso)
    {
      m_peso = peso;
    }

    void SetNome(string nome)
    {
      m_nome = nome;
    }

    void Exibir() // nao tem parâmetro nos () porque eu quero exibir algo que já está no objeto
    {
      cout << "Nome: " << m_nome << endl;
      cout << "Idade: " << m_idade << endl;
      cout << "Peso: " << m_peso << endl;
    }

    int GetIdade()
    {
      return m_idade;
    }

    float GetPeso()
    {
      return m_peso;
    }

    string GetNome()
    {
      return m_nome;
    }
};

int main()
{
  Animal meuanimal;
  meuanimal.SetIdade(5);
  meuanimal.SetPeso(7.5);
  meuanimal.SetNome("Cici");
  meuanimal.Exibir();
}
