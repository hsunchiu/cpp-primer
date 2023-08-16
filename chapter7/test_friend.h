class A {

  // friend not include `this`, it just limit the access permission by code.
  friend void func1();

private:
  int a, b;
};

void func1() { return; }
