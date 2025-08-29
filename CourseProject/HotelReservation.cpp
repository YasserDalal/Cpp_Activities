#include <iostream>

using namespace std;

const string lineBreak = "__________________________________________________________";

int main(){
  string name;
  int age, guests;
  float days;

  cout << lineBreak << endl << endl;

  cout << "Customer Name: "; getline(cin >> ws, name);
  do {
    if(age <= 17 && to_string(age).length()){
      cout << endl << "Minors are not allowed" << endl;
      cout << "Please enter a legal age (18 y/o above)" << endl << endl;
    }
    cout << "Age: "; cin >> age;
  } while(age <= 17 || !age);

  do{
    guests;
    if(guests <= 0 && to_string(guests).length()){
      cout << endl << "Invalid Number!: " << guests << endl; 
      cout << "Please enter a number greater than 0" << endl << endl; 
    }
    cout << "Number of guests : "; cin >> guests;
  } while(guests <= 0 || !guests);

  do{
    if(days <= 0 && to_string(days).length()){
      cout << endl << "Invalid Number!: " << days << endl; 
      cout << "Please enter a number greater than 0" << endl << endl; 
    }

    cout << "Number of days: "; cin >> days;
  } while(days <= 0 || !days);


  double totalPayment, downPayment, balance;
  int dailyRate;

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

  totalPayment = dailyRate * days;
  downPayment = totalPayment * 0.40;
  balance = totalPayment - downPayment;

  cout << lineBreak << endl << endl;
  
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