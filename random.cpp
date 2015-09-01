#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void adivina (int num, int num1, int n) {

  if (num1 == num){
    cout << "Felicidades has adivinado el numero que estaba pensando." << endl;

    if (n > 1) {
      cout << "Lo lograste en ";
      cout << n << " intentos, juega de nuevo para mejorar tu puntaje.";
      cout << endl;
    } else {
      cout << "Lo lograste en tu primer intento.";
      cout << endl;
    }

  } else if (num1 <= num){
    cout << "Lo siento, el numero que estoy pensando es mayor a ese, intenta de nuevo: ";
    cin >> num1 ;
    n = n + 1;
    adivina (num, num1, n);

  } else {
    cout << "Lo siento, el numero que estoy pensando es menor a ese, intenta de nuevo: ";
    cin >> num1;
    n = n + 1;
    adivina (num, num1, n);
  }
}

int main (){

srand (time (0));
int num = 1 + (rand () % 100);
int n = 1;
int num1;

cout << "Adivina el numero que estoy pensando (entre 1 y 100): ";
cin >> num1;

adivina (num, num1, n);

return 0 ;
}
