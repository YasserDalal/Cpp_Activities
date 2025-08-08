#include <iostream>

using namespace std;

int question1(){
  int numInput;
  string userInput;

  cout << "Press a number from (0 - 4): "; getline(cin >> ws, userInput); 

  numInput = stoi(userInput);

  if(numInput == 0) { cout << "Hello World" << endl; return 0; }
  if(numInput == 1) { cout << "I am Groot" << endl; return 0; }
  if(numInput == 2) { cout << "To the Top" << endl; return 0; }
  if(numInput == 3) { cout << "Where is the horizon" << endl; return 0; }
  if(numInput == 4) { cout << "I do not know" << endl; return 0; }

  cout << "Yeah, I will." << endl;
  
  return 0;
}

int question2(){
  int numInput;
  string userInput;

  cout << "Press a number from (0 - 4): "; getline(cin >> ws, userInput);

  numInput = stoi(userInput);

  switch(numInput) {
    case 0: cout << "Hello World" << endl; break;
    case 1: cout << "I am good" << endl; break;
    case 2: cout << "To the Top" << endl; break;
    case 3: cout << "Where is the horizon" << endl; break;
    case 4: cout << "I do not know" << endl; break;
    default: cout << "Yeah, I will." << endl;
  }

  return 0;
}

int question3(){
  float num1, num2;
  string input1, input2;

  cout << "Enter your first number: "; getline(cin >> ws, input1);
  cout << "Enter your second number: "; getline(cin >> ws, input2);

  num1 = stof(input1);
  num2 = stof(input2);

  cout << "Result of " << num1 << " ÷ " << num2 << " = " << num1 / num2 << endl;

  return 0;
}