#include <iostream>

using namespace std;

/*
  Write a program that accepts user’s section, and display them back with the format “ Section: user’s section ”.
*/
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

/*
  Write a program that accepts user’s daily budget and display the product of the daily budget and itself.
*/
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

/*
  Write a program that accepts user’s name, password and address and display them back using the format “Hi, I am user’s name. I live at user’s address.”.

    Restrictions:
      -Use only three variables.
      -Make sure you support spaces.
*/
int question3(){
  string userName, password, address;

  cout << "____________________________________________________________________________________" << endl;
  cout << "" << endl;

  cout << "Question 3" << endl;
  cout << "" << endl;

  cout << "What is your name?: "; getline(cin >> ws, userName);
  cout << "" << endl;

  cout << "Enter your password: "; getline(cin >> ws, password);
  cout << "" << endl;

  cout << "What is your address?: "; getline(cin >> ws, address);
  cout << "" << endl;
  cout << "" << endl;

  cout << "Hi, I am " << userName << "." << " I live at " << address;

  cout << "" << endl;
  cout << "____________________________________________________________________________________" << endl;

  return false;
}

int main(){
  question1();
  question2();
  question3();
  
  return false;
}