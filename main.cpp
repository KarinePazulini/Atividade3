#include <iostream>
#include "funcoes.cpp"

using namespace std;

int main() {

  tTriangulos t;

  cout << "Digite os valores dos 3 lados do triangulo: " << endl;

  cin >> t.lado1;
  cin >> t.lado2;
  cin >> t.lado3;

  t.perimTri(t);
  t.areaTri(t);
  t.hipoTri(t);
  
}