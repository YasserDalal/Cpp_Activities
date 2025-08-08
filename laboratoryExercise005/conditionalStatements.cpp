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