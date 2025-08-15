#include <iostream>

using namespace std;

const string lineBreak = "_________________________________________________________________";

int question1(){
  int input, integer[5];

  cout << endl;
  cout << lineBreak << endl;
  cout << endl;
  
  cout << "Question 1" << endl;
  cout << endl;

  for(int i = 0; i < 5; i++){
    cout << "Enter a number[" << i + 1 << "]" << ": "; cin >> input;
    integer[i] = input;
  }

  cout << endl;
  cout << "Array contains 5 elements: [ " << 
  integer[0] << ", " << integer[1] << ", " << integer[2] << ", " << integer[3] << ", " << integer[4] << " ]" << endl;

  cout << endl;
  return 0;
}