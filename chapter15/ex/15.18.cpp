/*
  Exercise 15.18: Given the classes from page 612 and page 613, and
  assuming each object has the type specified in the comments, determine
  which of these assignments are legal. Explain why those that are illegal
  aren’t allowed:
  Base *p = &d1; //  d1 has type Pub_Derv
  p = &d2;      //  d2 has type Priv_Derv
  p = &d3;		//	d3 has type Prot_Derv
  p = &dd1;		//	dd1 has type Derived_from_Public
  p = &dd2;		//  dd2 has type Derived_from_Private
  p = &dd3;		//	dd3 has type Derived_from_Protected
 */
class Base {
public:
  void pub_mem(); // public member
protected:
  int prot_mem; // protected member
private:
  char priv_mem; // private member
};
class Sneaky : public Base {
  friend void clobber(Sneaky &); // can access Sneaky::prot_mem
  friend void clobber(Base &);   // can't access Base::prot_mem
  int j;                         // j is private by default
};
// ok: clobber can access the private and protected members in Sneaky objects
void clobber(Sneaky &s) { s.j = s.prot_mem = 0; }
// error: clobber can't access the protected members in Base
//! void clobber(Base &b) { b.prot_mem = 0; }
void clobber(Base *b) {}

struct Pub_Derv : public Base {
  // ok: derived classes can access protected members
  int f() { return prot_mem; }
  // error: private members are inaccessible to derived classes
  //! char g() { return priv_mem; }
  char g() { return '\0'; };
};

struct Prot_Derv : protected Base {};

struct Priv_Derv : private Base {
  // private derivation doesn't affect access in the derived class
  int f1() const { return prot_mem; }
};

struct Derived_from_Public : public Pub_Derv {
  // ok: Base::prot_mem remains protected in Pub_Derv
  int use_base() { return prot_mem; }
};
struct Derived_from_Private : public Priv_Derv {
  // error: Base::prot_mem is private in Priv_Derv
  // int use_base() { return prot_mem; }
  int use_base() { return 0; }
};

struct Derived_from_Protected : protected Prot_Derv {};

int main() {
  Pub_Derv d1;
  Priv_Derv d2;
  Prot_Derv d3;

  Derived_from_Public dd1;
  Derived_from_Private dd2;
  Derived_from_Protected dd3;

  Base *p = &d1;
  //// can't cast Priv_Derv to its private base class `Base`
  //! p = &d2;
  //// can't cast Prot_Derv to its protected base class `Base`
  //! p = &d3;

  p = &dd1;
  //// can't cast `Derived_from_Private` to its private base class `Base`
  //! p = &dd2;

  //// can't cast `Derived_from_Protected` to its protected base class `Base`
  //! p = &dd3;
}
