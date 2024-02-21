#include <iostream>
#include <stdio.h>
#include <string.h>

//Fazer um sistema de média de notas. Use cout e cin
using namespace std;
int main()
{
  cout <<"Digite a nota de 3 provas: ";

  int nota1, nota2, nota3;
  
  cin>>nota1>>nota2>>nota3;
  cout<<"Média:"<<((nota1+nota2+nota3) / 3);  

  return 0;
}
