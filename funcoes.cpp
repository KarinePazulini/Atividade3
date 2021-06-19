#include <iostream>
#include <math.h>

using namespace std;

struct tTriangulos{
  int lado1;
  int lado2;
  int lado3;

  void perimTri(tTriangulos t){
   cout << "perimetro: " << t.lado1 + t.lado2 + t.lado3 << endl;
  }

  void areaTri(tTriangulos t){
    if(t.lado1 > t.lado2 && t.lado1 > t.lado3){
      cout << " area eh: " << (t.lado2*t.lado3)/2;
    }
    if(t.lado2 > t.lado1 && t.lado2 > t.lado3){
     cout << " area eh: " << (t.lado1*t.lado3)/2; 
    }
    if(t.lado3 > t.lado1 && t.lado3 > t.lado2){
     cout << " area eh: " << (t.lado1*t.lado2)/2;
    }
    cout << "\n";   
  }

  void hipoTri(tTriangulos t){
    if(t.lado1 > t.lado2 && t.lado1 > t.lado3){
      cout << "hipotenusa eh: " << sqrt(pow(t.lado2,2)+pow(t.lado3,2));
    }
    if(t.lado2 > t.lado1 && t.lado2 > t.lado3){
      cout << "hipotenusa eh: " << sqrt(pow(t.lado1,2)+pow(t.lado3,2));
    }
    if(t.lado3 > t.lado1 && t.lado3 > t.lado2){
      cout << "hipotenusa eh: " << sqrt(pow(t.lado1,2)+pow(t.lado2,2));
    }
  }
}; 
