#include <iostream>

using namespace std;

// reusable line break
const string lineBreak = "_______________________________________________________________________";

void Question1(int &num){
  int *pNum = &num;
  *pNum = 27946;
}

int main(){
  // -----------------------------   Question 1   ----------------------------------------------
  cout << lineBreak << endl << endl;
  int num = 654321;

  cout << "Question 1" << " ( num" << " = " << num << " )" << endl << endl;

  cout << "Previous Value of num: " << num << endl << endl;

  Question1(num);

  cout << "Current Value of num: " << num << endl << endl;

  return 0;
}