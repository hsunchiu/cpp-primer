#include <iostream>
using namespace std;

class Base {
public:
  int basePublicValue = 0;
  void basePublicFunc() { cout << "basePublicFunc" << endl; };

protected:
  int baseProtectedValue = 0;
  void baseProtectedFunc() { cout << "baseProtectedFunc()" << endl; };

private:
  int basePrivateValue = 0;
  void basePrivateFunc() { cout << "basePrivateFunc()" << endl; };
};

class PublicDerived : public Base {

  friend void TryPublicDerivedFriendship(Base &base,
                                         PublicDerived &publicderived);

public:
  int publicDerivedPublicValue = 0;
  void publicDerivedPublicFunc() {
    cout << "publicDerivedPublicFunc()" << endl;
  }

protected:
  int publicDerivedProtectedValue = 0;
  void publicDerivedProtectedFunc() {
    cout << "publicDerivedProtectedFunc()" << endl;
  }

private:
  int privateDerivedPrivateValue = 0;
  void privateDerivedPrivateFunc() {
    cout << "privateDerivedPrivateFunc()" << endl;
  }
};

void TryPublicDerivedFriendship(Base &base, PublicDerived &publicderived) {
  // PublicDerived is not friend of Base, so the friend can only access the
  // public members
  base.basePublicValue;
  base.basePublicFunc();

  // more, freind function can access the friend's protected and public
  // members
  publicderived.publicDerivedProtectedFunc();
  publicderived.publicDerivedProtectedValue;
  publicderived.publicDerivedPublicFunc();
  publicderived.publicDerivedPublicValue;

  // more, freind functiona can access the friend's private mumbers
  publicderived.privateDerivedPrivateValue;
  publicderived.privateDerivedPrivateFunc();
};

class ProtectedDerived : protected Base {
  friend void
  TryProtectedDerivedFriendship(Base &base,
                                ProtectedDerived &protectedderived) {}

public:
protected:
private:
};

class PrivateDerived : private Base {};
