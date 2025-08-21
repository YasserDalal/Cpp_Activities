#ifndef _CLASSES // directives
#define _CLASSES

#include <string>

using namespace std;

class LeggedMammal{
  public:
    int mLegs = 0;
    string mFur = "";
    string mTail = "";

  LeggedMammal(){}

  int getLegs(){ return mLegs; };

  string getFur(){ return mFur; };

  string getTail(){ return mTail; };

  void setLegs(int legs){ mLegs = legs; };

  void setFur(string fur){ mFur = fur; };

  void setTail(string tail){ mTail = tail; };
};

class Dog : public LeggedMammal{
  private:
    string mBreed = "";
    string mSize = "";
    string mIsRegistered = "";

  public:
    Dog(){}

    string getBreed(){ return mBreed; };

    string getSize(){ return mSize; };

    string getIsRegistered(){ return mIsRegistered; };

    void setBreed(string breed){ mBreed = breed; };

    void setSize(string size){ mSize = size; };

    void setIsRegistered(bool isRegistered){ 
      mIsRegistered = isRegistered ? "Yes" : "No"; 
    };
};

class Person{
  public:
    string mName;
    string mAddress;
    string mGender;
    int mAge;
    string mOccupation;

  Person(){}

  string getName(){ return mName; };

  string getAddress(){ return mAddress; };

  string getGender(){ return mGender; };

  int getAge(){ return mAge; };

  string getOccupation(){ return mOccupation; };

  void setName(string name){ mName = name; };

  void setAddress(string address){ mAddress = address; };

  void setGender(string gender){ mGender = gender; };

  void setAge(int age){ mAge = age; };

  void setOccupation(string occupation){ mOccupation = occupation; };
};

class Student : public Person{
  private:
    string mProgram = "";
    int mYearLevel = 0;
    string mUniversity = "";

  public:
    Student(){};

    string getProgram(){ return mProgram; };

    int getYearLevel(){ return mYearLevel; };

    string getUniversity(){ return mUniversity; };

    void setProgram(string program){ mProgram = program; };

    void setYearLevel(int year){ mYearLevel = year; };

    void setUniversity(string university){ mUniversity = university; };
  
};

#endif