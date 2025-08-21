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

  int getLegs(){
    return mLegs;
  };

  string getFur(){
    return mFur;
  };

  string getTail(){
    return mTail;
  };

  void setLegs(int legs){
    mLegs = legs;
  };

  void setFur(string fur){
    mFur = fur;
  };

  void setTail(string tail){
    mTail = tail;
  };
};

class Dog : public LeggedMammal{
  private:
    string mBreed = "";
    string mSize = "";
    string mIsRegistered = "";

  public:
    Dog(){}

    string getBreed(){
      return mBreed;
    };

    string getSize(){
      return mSize;
    };

    string getIsRegistered(){
      return mIsRegistered;
    };

    void setBreed(string breed){
      mBreed = breed;
    };

    void setSize(string size){
      mSize = size;
    };

    void setIsRegistered(bool isRegistered){
      mIsRegistered = isRegistered ? "Yes" : "No";
    };
};

#endif