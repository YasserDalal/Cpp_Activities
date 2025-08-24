#include <iostream>

using namespace std;

const string lineBreak = "_________________________________________________________________";

int main() {
  // -----------------------------   Question 1   ----------------------------------------------
  int num = 900;
  int *pNum = &num;

  cout << lineBreak << endl << endl;
  cout << "Question 1 " << "( num" << " = " << num << " )" << endl << endl;

  cout << "Value: " << *pNum << endl;
  cout << "Address: " << pNum << endl << endl;
  
  return 0;
}