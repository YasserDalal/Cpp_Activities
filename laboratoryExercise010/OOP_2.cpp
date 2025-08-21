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
  cout << "      Registered: " << firstDog.getIsRegistered() << endl << endl;

  cout << "  Number of Legs: " << firstDog.getLegs() << endl;
  cout << "     Kind of Fur: " << firstDog.getFur() << endl;
  cout << "Presence of Tail: " << firstDog.getTail() << endl;

  cout << lineBreak << endl << endl;

  Student student;
  
  cout << "Child Class 2: Student" << endl << endl;

  student.setProgram("BSCPE");
  student.setYearLevel(1);
  student.setUniversity("AMA Online Education");

  student.setName("Yasser Dalal");
  student.setAddress("Manama City");
  student.setGender("Male");
  student.setAge(21);
  student.setOccupation("Student");

  cout << "         Program: " << student.getProgram() << endl;
  cout << "      Year/Level: " << student.getYearLevel() << endl;
  cout << "      University: " << student.getUniversity() << endl << endl;

  cout << "            Name: " << student.getName() << endl;
  cout << "         Address: " << student.getAddress() << endl;
  cout << "          Gender: " << student.getGender() << endl;
  cout << "             Age: " << student.getAge() << endl;
  cout << "      Occupation: " << student.getOccupation() << endl;

  cout << endl;
  return 0;
}