#include <iostream>

using namespace std;

int question1() {
  string userSection;

  cout << "____________________________________________________________________________________" << endl;
  cout << "" << endl;
  
  cout << "Question 1" << endl;
  cout << "" << endl;

  cout << "What is your Section?: "; cin >> userSection;
  cout << "" << endl;

  cout << "Section: " << userSection;
  
  cout << "" << endl;
  cout << "____________________________________________________________________________________" << endl;

  return false;
}

int question2(){
  long long userBudget;
  cout << "____________________________________________________________________________________" << endl;
  cout << "" << endl;
  
  cout << "Question 2" << endl;
  cout << "" << endl;

  cout << "What is you Daily Budget?: "; cin >> userBudget;
  cout << "" << endl;

  cout << "The Product of " 
  << userBudget << " is ==> " 
  << userBudget << " x " << userBudget << " = " 
  << userBudget * userBudget;
  
  cout << "" << endl;
  cout << "____________________________________________________________________________________" << endl;

  return false;
}

int question3(){
  string userName, password, address;
  cout << "____________________________________________________________________________________" << endl;
  cout << "" << endl;

  cout << "Question 3" << endl;
  cout << "" << endl;

  cout << "What is your name?: "; cin >> userName;
  cout << "" << endl;

  cout << "Enter your password: "; cin >> password;
  cout << "" << endl;

  cout << "What is your address?: "; cin >> address;
  cout << "" << endl;
  cout << "" << endl;

  cout << "Hi, I am " << userName << "." << " I live at " << address;

  cout << "" << endl;
  cout << "____________________________________________________________________________________" << endl;

  return false;
}