#include <iostream>
#include <vector>

using namespace std;

const string lineBreak = "_______________________________________________________________";

int question1(vector<int> arrayNum = {}){
  int input, lengthOfArray = arrayNum.size();

  cout << lineBreak << endl;
  cout << endl;

  if(!arrayNum.size()){
    cout << "Question 1 (User Input)" << endl;
    cout << endl;

    for(int i = 0; i < 6; i++){
      cout << "Enter a number[" << i+1 << "]: "; cin >> input;
      arrayNum.push_back(input);
    }

    cout << endl;
    for(int i = 0; i < 6; i+=2){
      cout << "Division of ";

      arrayNum[i] < 10 ? 
        cout << " " << arrayNum[i] << " ÷ " << arrayNum[i+1] << " = " << arrayNum[i] / arrayNum[i+1] << endl
        :
        cout << arrayNum[i] << " ÷ " << arrayNum[i+1] << " = " << arrayNum[i] / arrayNum[i+1] << endl;
    }
    return 0;
  }
  cout << "Question 1 (Only Arguments)" << endl;
  cout << endl;

  for(int i = 0; i < lengthOfArray; i+=2){
    cout << "Division of ";

    arrayNum[i] < 10 ?
      cout << " " << arrayNum[i] << " ÷ " << arrayNum[i+1] << " = " << arrayNum[i] / arrayNum[i+1] << endl
      :
      cout << arrayNum[i] << " ÷ " << arrayNum[i+1] << " = " << arrayNum[i] / arrayNum[i+1] << endl;
  }
  return 0;
}