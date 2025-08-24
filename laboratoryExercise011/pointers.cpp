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
  
  // -----------------------------   Question 2   ----------------------------------------------
  char array[10];
  char *pArray = array;

  cout << lineBreak << endl << endl;
  cout << "Question 2 " << "( array[10] )" << endl << endl;

  cout << "Value: " << (int)*pArray << endl;
  cout << "Address: " << (string*)pArray << endl << endl;

  return 0;
}