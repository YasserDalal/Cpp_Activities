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

int question3(){
  int sortedIntegers[6], num = 0;

  cout << endl;
  cout << lineBreak << endl;
  cout << endl;

  cout << "Question 3" << endl;
  cout << endl;

  do {

    cout << "Enter a number [" << num + 1 << "]: "; cin >> sortedIntegers[num];
    num++;

  } while(num < 6);

  for(num = 0; num < sizeof(sortedIntegers) / sizeof(sortedIntegers[0]); num++){
    for(int j = 0; j < num; j++){
      if(sortedIntegers[j] > sortedIntegers[num]){
        int temp = sortedIntegers[num];
        sortedIntegers[num] = sortedIntegers[j];
        sortedIntegers[j] = temp;
      }
    }
  }
  cout << endl;

  cout << "Sorted array: [ " 
  << sortedIntegers[0] << ", " << sortedIntegers[1] << ", " 
  << sortedIntegers[2] << ", " << sortedIntegers[3] << ", "
  << sortedIntegers[4] << ", " << sortedIntegers[5] << " ]" << endl;

  cout << endl;
  return 0;
}