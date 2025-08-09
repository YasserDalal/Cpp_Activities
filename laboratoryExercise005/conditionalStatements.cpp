#include <iostream>

using namespace std;

const string lineBreak = "____________________________________________________________________________________";

int question1(){
  int numInput;
  string userInput;

  cout << lineBreak << endl;
  cout << endl;
  cout << "Question 1" << endl;
  cout << endl;

  cout << "Press a number from (0 - 4): "; getline(cin >> ws, userInput); 
  cout << endl; 

  numInput = stoi(userInput);

  if(numInput == 0) { cout << "Hello World" << endl << lineBreak << endl; return 0; }
  if(numInput == 1) { cout << "I am Groot" << endl << lineBreak << endl; return 0; }
  if(numInput == 2) { cout << "To the Top" << endl << lineBreak << endl; return 0; }
  if(numInput == 3) { cout << "Where is the horizon" << endl << lineBreak << endl; return 0; }
  if(numInput == 4) { cout << "I do not know" << endl << lineBreak << endl; return 0; }

  cout << "Yeah, I will." << endl << lineBreak << endl;
  
  return 0;
}

int question2(){
  int numInput;
  string userInput;

  cout << lineBreak << endl;
  cout << endl;
  cout << "Question 2" << endl;
  cout << endl;

  cout << "Press a number from (0 - 4): "; getline(cin >> ws, userInput);
  cout << endl;

  numInput = stoi(userInput);

  switch(numInput) {
    case 0: cout << "Hello World" << endl << lineBreak << endl; break;
    case 1: cout << "I am good" << endl << lineBreak << endl; break;
    case 2: cout << "To the Top" << endl << lineBreak << endl; break;
    case 3: cout << "Where is the horizon" << endl << lineBreak << endl; break;
    case 4: cout << "I do not know" << endl << lineBreak << endl; break;
    default: cout << "Yeah, I will." << endl << lineBreak << endl;
  }

  return 0;
}

int question3(){
  float num1, num2;
  string input1, input2;

  cout << lineBreak << endl;
  cout << endl;
  cout << "Question 3" << endl;
  cout << endl;

  cout << "Enter your first number: "; getline(cin >> ws, input1);
  cout << endl;
  cout << "Enter your second number: "; getline(cin >> ws, input2);
  cout << endl;

  num1 = stof(input1);
  num2 = stof(input2);

  cout << "Result of " << num1 << " ÷ " << num2 << " = " << num1 / num2 << endl;

  cout << lineBreak << endl;

  return 0;
}