#include <iostream>
#include <string>
using namespace std;
int main() {
   cout << "Name: ";
   string name;
   cin >> name;
   cout << "Dear " << name << ", \n";
   cout << "How are you?, I�m fine, and I miss you \n";
   cout << "Other name :v : ";
   string name2;
   cin >> name2;
   int age;
   cout <<"Age: ";
   cin >> age;
   cout << "Have you seen " << name2 << "? \n";
   cout <<"F/M: ";
   char fm;
   cin >> fm;
   char a;
   if (fm == 'F')

      a = "her";
   if (fm == 'M')
      a = "him";

  cout << "If you see " << name2 << " please tell " << a << " to call me \n";
  int x;
  if (age<=12)
    x = age+1;
    cout <<"Next year you�ll be " << x << "\n";
  if (age==18)
    cout <<"You can to vote\n";
  if (age>70)
    cout <<"I hope you enjoying your retirement\n";

  cout <<"Your sincerely " << "\n" ;
  string name3;
  cin >> name3;
  return 0;

}
