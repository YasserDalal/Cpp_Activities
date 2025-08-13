#include <iostream>

using namespace std;

const string lineBreak = "____________________________________________________________________________________";

int question1(){
  int integer = 5, i = 0, j;

  cout << lineBreak << endl << endl;
  cout << "Question 1 (While loop)" << endl;
  cout << endl;

  cout << "Enter a number: "; cin >> integer;
  cout << endl;

  while(i < integer){
    j = 0;
    while(j <= i){
      cout << "*";
      j++;
    }
    cout << endl;
    i++;
  }

  return 0;
}