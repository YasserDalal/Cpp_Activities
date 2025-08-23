#include "paySlipClass.h"
#include <iostream>
#include <iomanip>

using namespace std;

const string lineBreak = "____________________________________________________________________";

string formatNumber(double num){
  stringstream fixedNum;

  fixedNum << fixed << setprecision(2) << num;

  string lengthOfNum = fixedNum.str();
  int decimalPlace = lengthOfNum.find(".");

  for(int i = lengthOfNum.length() - 3; i > 0; i-=3){
    if(i == decimalPlace){ continue; }
    lengthOfNum.insert(i, ",");
  }

  return "Php " + lengthOfNum;
}

int main(){
  PaySlip paySlip;

  string name;
  double salary;
  int overtimeHours;

  cout << lineBreak << endl << endl;

  cout << "Enter your Name: "; getline(cin >> ws, name);

  paySlip.setName(name);
  do {
    cout << "Enter your Salary (not less than 10000): "; cin >> salary;
  } while (salary < 10000);
  
  paySlip.setBasicSalary(salary);

  do {
    cout << "Enter your Overtime Hours (not less than 1): "; cin >> overtimeHours;
  } while (overtimeHours < 1);

  paySlip.setOvertimeHours(overtimeHours);

  paySlip.determinePayGradeAndTaxRate();
  paySlip.compute();

  cout << lineBreak << endl << endl;
  
  cout << "Employee Name		  : " << paySlip.getName() << endl;
  cout << "Basic Salary		  : " << formatNumber(paySlip.getBasicSalary()) << endl;
  cout << "Pay Grade		  : " << paySlip.getPayGrade() << endl;
  cout << "No. of OT Hours		  : " << paySlip.getOvertimeHours() << endl;
  cout << "OT Pay		          : " << formatNumber(paySlip.getOvertimePay()) << endl;
  cout << "Gross Pay		  : " << formatNumber(paySlip.getGrossPay()) << endl;
  cout << "Withholding Tax		  : " << formatNumber(paySlip.getWithholdingTax()) << endl;
  cout << "Net Pay		          : " << formatNumber(paySlip.getNetPay()) << endl; 

  cout << endl;
  return 0;
}