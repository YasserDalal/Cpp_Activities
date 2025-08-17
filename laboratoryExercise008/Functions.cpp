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

int question2(short num = 0){
  short input;
  string stringNum, stringInput, answer;
  cout << lineBreak << endl << endl;

  if(num == 0){
    cout << "Question 2 (User Input)" << endl << endl;

    do {
      cout << "Enter a number from (10 - 99): "; cin >> input;
      
    } while(input > 99 || input < 10);
    cout << endl;
    
    stringInput = to_string(input);

    cout << "Separated: " << stringInput[0] << " " << stringInput[1] << endl;
    
    return 0;
  }

  cout << "Question 2 (Only Arguments)" << endl << endl;

  do {
    answer == "no" && cout << "Go to the caller and put some numbers from 10 to 99" << endl << endl;
    answer == "yes" && cout << "Please double check the arguments again" << endl << endl;

    cout << "Did you pass an argument from 10 to 99 (yes/no): "; cin >> answer;

  } while(num > 99 || num < 10 || answer == "no");
  cout << endl;

  stringNum = to_string(num);

  cout << "Argument: " << stringNum  << endl << endl;
  cout << "Separated: " << stringNum[0] << " " << stringNum[1] << endl << endl;

  return 0;
}

void calculateFibb(int num, vector<int> arrayNum, int num1, int num2){
  for(int i = 0; i < num; i++){
    arrayNum.push_back(num1);
    int nextNum = num1 + num2;
    num1 = num2;
    num2 = nextNum;
  }

  cout << "Fibonacci of " << num << ":  ";
  for(int j = 0; j < arrayNum.size(); j++){
    if(j == arrayNum.size() - 1){
      cout << arrayNum[j] << endl;
    } else {
      cout << arrayNum[j] << ", ";
    }
  }
}

int question3(int num = 0){
  int num1 = 0, num2 = 1;
  vector<int> arrayNum;

  if(num > 0){
    cout << lineBreak << endl << endl;
    cout << "Question 3 (Only Arguments)" << endl << endl;
    calculateFibb(num, arrayNum, num1, num2);
    return 0;
  }

  cout << lineBreak << endl << endl;
  cout << "Question 3 (User Input)" << endl << endl;

  do {
    cout << "Enter a number greater than 0: "; cin >> num;
  } while(num <= 0);
  cout << endl;

  calculateFibb(num, arrayNum, num1, num2);

  cout << endl;
  return 0;
}