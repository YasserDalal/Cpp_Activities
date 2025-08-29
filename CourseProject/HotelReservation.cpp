#include <iostream> // enables cout, cin

// declare std to use cout, cin, and other data types without using the prefix 'std::'
using namespace std;

// reusable line break
const string lineBreak = "__________________________________________________________";

int main(){
  // variables for user input
  string name;
  int age, guests;
  float days;

  // line break
  cout << lineBreak << endl << endl;

  // name input
  cout << "Customer Name: "; getline(cin >> ws, name);

  do {
    // check if it's minor age
    if(age <= 17 && to_string(age).length()){
      cout << endl << "Minors are not allowed" << endl;
      cout << "Please enter a legal age (18 y/o above)" << endl << endl;
    }
    // age input
    cout << "Age: "; cin >> age;
  } while(age <= 17 || !age);

  do{
    // cleanup 
    guests;
    // check if the number of guests is invalid
    if(guests <= 0 && to_string(guests).length()){
      cout << endl << "Invalid Number!: " << guests << endl; 
      cout << "Please enter a number greater than 0" << endl << endl; 
    }
    // guests input
    cout << "Number of guests : "; cin >> guests;
  } while(guests <= 0 || !guests);

  do{
    // check if the number of days is invalid
    if(days <= 0 && to_string(days).length()){
      cout << endl << "Invalid Number!: " << days << endl; 
      cout << "Please enter a number greater than 0" << endl << endl; 
    }
    // days input
    cout << "Number of days: "; cin >> days;
  } while(days <= 0 || !days);

  // variables for calculations
  double totalPayment, downPayment, balance;
  int dailyRate;

  // calculate daily rate
  if(guests == 1){
    dailyRate = 1000;
  } else if(guests == 2){
    dailyRate = 1800;
  } else if(guests == 3){
    dailyRate = 2700;
  } else if(guests == 4){
    dailyRate = 3600;
  } else if(guests >= 5){
    dailyRate = 4500;
  }

  // calculate total payment, down payment, and balance
  totalPayment = dailyRate * days;
  downPayment = totalPayment * 0.40;
  balance = totalPayment - downPayment;

  // line break
  cout << lineBreak << endl << endl;
  
  // show the output
  cout << "            Hotel Reservation Slip" << endl << endl;
  cout << "Customer Name       : " << name << endl;
  cout << "Age                 : " << age << endl;
  cout << "Number of guests    : " << guests << endl;
  cout << "Number of days      : " << days << endl;
  cout << "Total Payment       : " << totalPayment << endl;
  cout << "Down Payment        : " << downPayment << endl;
  cout << "Balance             : " << balance << endl;

  cout << endl;
  return 0;
}