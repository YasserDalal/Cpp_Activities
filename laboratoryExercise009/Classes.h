#ifndef _CLASSES
#define _CLASSES

#include <string>

using namespace std;

class LeggedMammal{
  public:
    string mLegs;
    string mFur;
    string mTail;

  LeggedMammal(string mLegs, string mFur, string mTail){
    this->mLegs = mLegs;
    this->mFur = mFur;
    this->mTail = mTail;
  };
};

#endif