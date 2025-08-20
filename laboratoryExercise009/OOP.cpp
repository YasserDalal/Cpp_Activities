#include "Classes.h"
#include <iostream>

using namespace std;

const string lineBreak = "________________________________________________________________";

void question1(){
  LeggedMammal Zebra(4, "Black and White stripes fur", "Has a short tail");
  
  cout << lineBreak << endl << endl;
  cout << "Class 1: LeggedMammal" << endl << endl;

  cout << "Zebra's number of legs: " << Zebra.mLegs << endl;
  cout << "Zebra's Fur: " << Zebra.mFur << endl;
  cout << "Zebra's Tail: " << Zebra.mTail << endl << endl;
}

void question2(){
  Person LonelyGuy("Yasser Dalal", "Manama City", "Male", 21, "Student");
  
  cout << lineBreak << endl << endl;
  cout << "Class 2: Person" << endl << endl;

  cout << "Person's name: " << LonelyGuy.mName << endl;
  cout << "Person's address: " << LonelyGuy.mAddress << endl;
  cout << "Person's gender: " << LonelyGuy.mGender << endl;
  cout << "Person's age: " << LonelyGuy.mAge << endl;
  cout << "Person's occupation: " << LonelyGuy.mOccupation << endl << endl;
}

void question3(){
  Polygon Triangle("Triangle", 3, "Blue");
  
  cout << lineBreak << endl << endl;
  cout << "Class 3: Polygon" << endl << endl;

  cout << "Polygon's name: " << Triangle.mName << endl;
  cout << "Polygon's number of sides: " << Triangle.mSides << endl;
  cout << "Polygon's color: " << Triangle.mColor << endl << endl;
}