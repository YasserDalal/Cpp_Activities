#include <iostream>

using namespace std;

const string lineBreak = "_________________________________________________________________";

int enrollSlip(){
  const float thirtyPercent = 0.30;

  long tuitionFee, balance, downPayment;
  int yearLevel, ratePerUnit;
  float units;
  string studentName, course, yearString, unitString, yearName;

  cout << "Student Name	        "   << ": "; getline(cin >> ws, studentName);
  cout << "Program/Course	        " << ": "; getline(cin >> ws, course);
  cout << "Year Level	        "     << ": "; getline(cin >> ws, yearString);
  cout << "No. of Units	        "   << ": "; getline(cin >> ws, unitString);
  cout << endl;
  
  yearLevel = stoi(yearString);
  units = stof(unitString);

  if(yearLevel == 1) {
    yearName = "Freshman";
    ratePerUnit = 1500;
  } else if(yearLevel == 2) {
    yearName = "Sophomore";
    ratePerUnit = 1800;
  } else if(yearLevel == 3) {
    yearName = "Junior";
    ratePerUnit = 2000;
  } else if(yearLevel == 4 || yearLevel == 5) {
    yearName = "Senior";
    ratePerUnit = 2300;
  } else {
    cout << "Invalid year level: " << yearLevel << endl;
    cout << endl;
    cout << "Please enter a valid year level (1 - 5)";
  }

  tuitionFee = units * ratePerUnit;
  downPayment = thirtyPercent * tuitionFee;
  balance = tuitionFee - downPayment;

  cout << lineBreak << endl;
  cout << endl;
  cout << "                    ENROLLMENT SLIP" << endl;
  cout << endl;

  cout << "Student Name	           " << ":" << studentName << endl;
  cout << "Program/Course	           " << ":" << course << endl;
  cout << "Year Name	           " << ":" << yearName << endl;
  cout << "No. of Units	           " << ":" << units << endl;
  cout << "Tuition Fee	           " << ":" << tuitionFee << endl;
  cout << "Down Payment	           " << ":" << downPayment << endl;
  cout << "Balance	                   " << ":" << balance << endl;

  return 0;
}

int main(){
  enrollSlip();

  return 0;
}