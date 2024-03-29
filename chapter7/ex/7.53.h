/*
  Exercise 7.53: Define your own version of Debug.
 */
class Debug {
public:
  constexpr Debug(bool b = true) : hw(b), io(b), other(b) {}
  constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o) {}
  constexpr bool any() { return hw || io || other; }
  void set_io(bool b) { io = b; }
  void set_hw(bool b) { hw = b; }
  void set_other(bool b) { hw = b; }

private:
  bool hw;    // hardware errors other than IO errors
  bool io;    // IO errors
  bool other; // other errors
};
