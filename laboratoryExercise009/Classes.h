#ifndef _CLASSES
#define _CLASSES

#include <string>

using namespace std;

class LeggedMammal{
  public:
    int mLegs;
    string mFur;
    string mTail;

  LeggedMammal(int mLegs, string mFur, string mTail){
    this->mLegs = mLegs;
    this->mFur = mFur;
    this->mTail = mTail;
  };
};

class Person{
  public:
    string mName;
    string mAddress;
    string mGender;
    int mAge;
    string mOccupation;

  Person(string mName, string mAddress, string mGender, int mAge, string mOccupation){
    this->mName = mName;
    this->mAddress = mAddress;
    this->mGender = mGender;
    this->mAge = mAge;
    this->mOccupation = mOccupation;
  };
};

class Polygon{
  public:
    string mName;
    int mSides;
    string mColor;

  Polygon(string mName, int mSides, string mColor){
    this->mName = mName;
    this->mSides = mSides;
    this->mColor = mColor;
  };
};

#endif