#include "Classes.h"
#include <iostream>

using namespace std;

const string lineBreak = "________________________________________________________________";

void question1(){
  LeggedMammal Zebra("Four Legs", "Black and White stripes fur", "Has a short tail");
  
  cout << lineBreak << endl << endl;
  cout << "Class 1: LeggedMammal" << endl << endl;

  cout << "Zebra's Legs: " << Zebra.mLegs << endl;
  cout << "Zebra's Fur: " << Zebra.mFur << endl;
  cout << "Zebra's Tail: " << Zebra.mTail << endl << endl;
}