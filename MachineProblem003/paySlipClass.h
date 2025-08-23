#ifndef _PAYSLIP
#define _PAYSLIP

#include <string>

using namespace std;

class PaySlip {
  private:
    string mName;
    string mPayGrade;
    float mTaxRate;
    double mBasicSalary;
    int mOvertimeHours;
    double mOvertimePay;
    double mGrossPay;
    double mNetPay;
    double mWithholdingTax;

    const double SSS = 500.00;
    const double PagIbig = 200.00;
    const double PhilHealth = 100.00;
  public:
    PaySlip(){}

    void setName(string name){ mName = name; };
    void setBasicSalary(double salary){ mBasicSalary = salary; };
    void setOvertimeHours(int overtimeHours){ mOvertimeHours = overtimeHours; };

    string getName(){ return mName; };
    string getPayGrade(){ return mPayGrade; };
    double getBasicSalary(){ return mBasicSalary; };
    int getOvertimeHours(){ return mOvertimeHours; };
    double getOvertimePay(){ return mOvertimePay; };
    double getGrossPay(){ return mGrossPay; };
    double getNetPay(){ return mNetPay; };
    double getWithholdingTax(){ return mWithholdingTax; };

    void determinePayGradeAndTaxRate(){
      if(mBasicSalary >= 10000 && mBasicSalary < 15000){
        mPayGrade = "A";
        mTaxRate = 0.10;
      } else if(mBasicSalary >= 15000 && mBasicSalary < 20000){
        mPayGrade = "B";
        mTaxRate = 0.10;
      } else if(mBasicSalary >= 20000 && mBasicSalary < 25000){
        mPayGrade = "A";
        mTaxRate = 0.15;
      } else if(mBasicSalary >= 25000 && mBasicSalary < 30000){
        mPayGrade = "B";
        mTaxRate = 0.15;
      } else if(mBasicSalary >= 30000 && mBasicSalary < 35000){
        mPayGrade = "A";
        mTaxRate = 0.20;
      } else if(mBasicSalary >= 35000 && mBasicSalary < 40000){
        mPayGrade = "B";
        mTaxRate = 0.20;
      } else if(mBasicSalary >= 40000 && mBasicSalary < 45000){
        mPayGrade = "A";
        mTaxRate = 0.25;
      } else if(mBasicSalary >= 45000 && mBasicSalary < 50000){
        mPayGrade = "B";
        mTaxRate = 0.25;
      } else if(mBasicSalary >= 50000 && mBasicSalary < 55000){
        mPayGrade = "A";
        mTaxRate = 0.30;
      } else if(mBasicSalary >= 55000) {
        mPayGrade = "B";
        mTaxRate = 0.30;
      }
    };

    void compute(){
      mOvertimePay = mOvertimeHours * (mBasicSalary * 0.01);
      mGrossPay = mBasicSalary + mOvertimePay;
      mWithholdingTax = mGrossPay * mTaxRate;
      mNetPay = mGrossPay - mWithholdingTax - (SSS + PagIbig + PhilHealth);
    }
};

#endif