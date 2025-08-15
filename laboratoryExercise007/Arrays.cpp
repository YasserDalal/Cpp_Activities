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

int question2(){
  int input;
  const string integers[10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};

  cout << endl;
  cout << lineBreak << endl;
  cout << endl;

  cout << "Question 2" << endl;
  cout << endl;

  do {

    cout << "Enter a number from (1 - 10): "; cin >> input;

  } while(input > 10 || input <= 0);

  cout << endl;

  for(int i = 0; i < input; i++){
    i > 0 ? cout << string(input - i, ' ') : cout << string(input, ' ');
    for(int j = 0; j <= i; j++){
      cout << " " << integers[i];
    }
    cout << endl;
  }
  cout << endl;

  return 0;
}