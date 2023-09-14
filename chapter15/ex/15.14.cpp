#include <iostream>

using namespace std;

class base {
public:
  base(std::string basename = "base") : basename(basename) {}
  string name() { return basename; }
  virtual void print(ostream &os = std::cout) { os << basename << endl; }

private:
  string basename;
};
class derived : public base {
public:
  derived(std::string basename = "derived", int i = 0) : base(basename) {}
  void print(ostream &os = std::cout) override {
    base::print(os);
    os << i << endl;
  }

private:
  int i = 0;
};

int main() {
  base bobj;
  base *bp1 = &bobj;
  base &br1 = bobj;
  derived dobj;
  base *bp2 = &dobj;
  base &br2 = dobj;

  bobj.print();
  dobj.print();
  bp1->name();
  bp2->name();
  br1.print();
  br2.print();
}
