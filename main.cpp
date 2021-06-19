#include <iostream>
#include "funcoes.cpp"

using namespace std;

int main() {

  tTriangulos tri;

  cout << "Digite: " << endl;

  cin >> tri.lado1;
  cin >> tri.lado2;
  cin >> tri.lado3;

  tri.perimTri(tri);
  tri.areaTri(tri);
  tri.hipoTri(tri);
  
}