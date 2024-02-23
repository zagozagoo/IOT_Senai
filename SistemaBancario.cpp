#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

// Crie um sistema bancário simples com a classe ContaBancaria. As contas
// bancárias devem suportar dados agência e métodos consulta de saldo, depósitos
// e saques.
class ContaBancaria {
private:
  string m_agencia;
  int m_numero;
  float m_saldo;

public:
  void SetAgencia(string agencia) { m_agencia = agencia; }
  void SetNumero(int numero) { m_numero = numero; }
  void SetSaldo(float saldo) { m_saldo = saldo; }

  void Exibir() {
    cout << "Agencia: " << m_agencia << endl;
    cout << "Numero: " << m_numero << endl;
    cout << "Saldo: " << m_saldo << endl;
  }

  void ConsultarSaldo() { cout << "Saldo: " << m_saldo << endl; }

  void Depositar(float valor) { m_saldo += valor; }

  void Sacar(float valor) { m_saldo -= valor; }

  string GetAgencia() { return m_agencia; }
  int GetNumero() { return m_numero; }
  float GetSaldo() { return m_saldo; }
};

int main() {
  ContaBancaria minhaconta;
  minhaconta.SetAgencia("Bradesco");
  minhaconta.SetNumero(1234);
  minhaconta.SetSaldo(1000);
  minhaconta.Exibir();

  minhaconta.Depositar(500);
  minhaconta.ConsultarSaldo();
}
