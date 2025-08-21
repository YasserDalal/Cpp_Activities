#include "ParentClasses.h"
#include <iostream>

using namespace std;

const string lineBreak = "__________________________________________________";

int main() {
  cout << lineBreak << endl << endl;

  Dog firstDog;

  cout << "Child Class 1: Dog" << endl << endl;

  firstDog.setBreed("Golden Retriever");
  firstDog.setSize("Big");
  firstDog.setIsRegistered(true);

  firstDog.setLegs(4);
  firstDog.setFur("Golden Fur");
  firstDog.setTail("Long Tail");

  cout << "           Breed: " << firstDog.getBreed() << endl;
  cout << "            Size: " << firstDog.getSize() << endl;
  cout << "      Registered: " << firstDog.getIsRegistered() << endl;

  cout << "  Number of Legs: " << firstDog.getLegs() << endl;
  cout << "     Kind of Fur: " << firstDog.getFur() << endl;
  cout << "Presence of Tail: " << firstDog.getTail() << endl;

  cout << endl;
  return 0;
}