#include <iostream>

using namespace std;

const string lineBreak = "_____________________________________________________________";

int main(){

  string name;
  int age = 0, guests = 0;
  float days = 0;

  cout << lineBreak << endl << endl;

  cout <<  "Customer Name: "; getline(cin >> ws, name);

  do {
    cout <<  "Age: "; cin >> age;

    if(age <= 0){
      cout << endl << "Invalid Age: " << age << endl << endl; 
    } else if(age <= 17){
      cout << endl << "You're still a minor" << endl;
      cout << "Please enter a legal age (18 y/o & above)" << endl << endl;
    }
  } while(age <= 17);

  do {
    cout <<  "Number of guests: "; cin >> guests;

    if(guests <= 0){
      cout << endl << "Invalid number of Guests: " << guests << endl;
      cout << "Please enter a number greater than 0"<< endl << endl;
    } 
  } while(guests <= 0);
  
  do {
    cout <<  "Number of days: "; cin >> days;

    if(days <= 0){
      cout << endl << "Invalid number of Days: " << days << endl;
      cout << "Please enter a number greater than 0"<< endl << endl;
    } 
  } while(days <= 0);

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
  
  cout << "Customer Name      : " << name << endl; 
	cout << "Age                : " << age << endl; 
	cout << "Number of guests   : " << guests << endl; 
	cout << "Number of days     : " << days << endl; 
	cout << "Total Payment      : " << totalPayment << endl; 
	cout << "Down Payment       : " << downPayment << endl;  
	cout << "Balance            : " << balance << endl; 

  cout << endl;
  return 0;
}