#include <iostream>
using namespace std;
int x, y;
int suma, resta, mult, div_;
int main() {

  cout << "Ingrese X: " << "\n";
  cin >> x;
  cout << "Ingrese Y: "<< "\n";
  cin >> y;
  cout <<"+,-,*,/   "<<"�Qu� desea hacer? \n";
  char o;
  cin >> o;
  if (o=='+')
    suma=x+y;
    cout << "La suma es: "<< suma << "\n";
  if (o=='-')
    resta=x-y;
    cout << "La resta es: " << resta << "\n";
  if (o=='*')
    mult=x*y;
    cout << "La multiplicaci�n es: "<< mult << "\n";
  if (o=='/')
    div_=x/y;
    cout <<"El resultado es: " << div_ << "\n";


  return 0;

}
