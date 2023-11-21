#include <iostream>

using namespace std;

int main() {

bool loop = false;
int num1, num2;

  while (loop == false) {
    cout << "input the fat percentage: ";
    
    cin >> num1;
    
    cout << "input protein percentage: ";

    cin >> num2;

    if (num1 < 18 && num2 >= 23) {
      cout << endl << "this dog food is super premium." << endl << endl;
    } else if (num1 < 20 && num1 >= 18 && num2 > 20 && num2 <= 23) {
      cout << endl << "this dog food is premium" << endl << endl;
    } else if (num1 < 25 && num1 >= 20 && num2 > 16 && num2 <= 20) {
      cout << endl << "this dog food is normal" << endl << endl;
    } else if (num1 < 40 && num1 >= 25 && num2 > 8 && num2 <= 16) {
      cout << endl << "this dog food is \"not so great\"" << endl << endl;
    } else {
      cout << endl << "sorry, incorrect inputs added" << endl << endl;
    }
    
  }
  
  return 0;
}