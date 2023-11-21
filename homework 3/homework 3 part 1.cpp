#include <iostream>
#include <cmath>

using namespace std;

int main() {

  cout << "in order to use this, you must enter one number press enter than " << endl << "enter another." << endl << endl;

  //declaration of the two number variables
  int num1, num2;

  //counter
  int count = 0;

  
  while (true) {
    if (count == 0) {
      cout << "first number: ";
      cin >> num1;
      count++;
    } else if (count == 1) {
      cout << "second number: ";
      cin >> num2;
      count--;

      //sum
     cout << "sum: " << num1 + num2 << endl; 
      //---

      //difference
      cout << "difference: "<< abs(num1 - num2) << endl;
      //---

      //quotient
      if (num1 == 0 || num2 == 0) {
        cout << "sorry it looks like one of your integers is 0 :(" << endl;
        break;
      } else {
        cout << "quotient: " << (double) num1 / (double) num2 << endl;
      }
      //---
      
      num1 = 0;
      num2 = 0;
    }
  }

  return 0;
}