#include <iostream>
using namespace std;
int a[3];
int i=0;

int main() {
  a[0]= 4;
  a[1]= 1;
  a[2]= 2;

  cout <<a[0]<<"," << a[1] << "," << a[2] << "\n";
  if (a[0]>a[1] && a[0]>a[2]);
     if (a[1]>a[2])
         cout << a[2] << "\n" << a[1] << "\n" << a[0] << "\n";
      else
         cout << a[1] << "\n" << a[2] << "\n" << a[0];
  if (a[1]>a[0] && a[1]>a[2])
     if (a[0]>a[2])
        cout << a[2] << "\n" << a[0] << "\n" << a[1];
     else
        cout << a[0] << "\n" << a[2] << "\n" << a[1];
  if (a[2]>a[0] &&  a[2]>a[1])
    if (a[0]>a[1])
        cout << a[1] << "\n" << a[0] << "\n" << a[3];
    else
        cout << a[0] << "\n" << a[1] << "\n" << a[2];
  return 0;
}
