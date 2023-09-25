/*
  Exercise 7.27: Add the move, set, and display operations to your
  version of Screen. Test your class by executing the following code:

  Screen myScreen(5, 5, 'X');
  myScreen.move(4,0).set('#').display(cout);
  cout << "\n";
  myScreen.display(cout);
  cout << "\n";
 */

#ifndef SCREEN_H
#define SCREEN_H

#include <string>

#ifndef NDEBUG
#include <iostream>
#endif

class Screen {
public:
  using pos = std::string::size_type;

  // tell the compiler to synthesize the default constructor
  Screen() = default;

  // takes values for height and width and initilizes contents to hold the given
  // number of blanks
  Screen(pos ht, pos wd) : heigth(ht), width(wd), contents(ht * wd, ' ') {}

  // cursor initialized toe 0 by its in-class initializer
  Screen(pos ht, pos wd, char c)
      : heigth(ht), width(wd), contents(ht * wd, c) {}

  Screen &set(char c) {
    contents[cursor] = c;
    return *this;
  }

  Screen &set(pos r, pos col, char c) {
    contents[r * width + col] = c;
    return *this;
  }

  char get() const { return contents[cursor]; } // implicity inline

  inline char get(pos ht, pos wd) const; // explicitly inline

  Screen &move(pos r, pos c); // can be made inline later

  // display overloaded on whether the object is const or not
  Screen &display(std::ostream &os) {
#ifndef NDEBUG
    os << "call non-const version of display" << std::endl;
#endif
    do_display(os);
    return *this;
  }

  const Screen &display(std::ostream &os) const {
#ifndef NDEBUG
    os << "call const version of dispaly" << std::endl;
#endif
    do_display(os);
    return *this;
  }

private:
  pos cursor = 0, heigth = 0, width = 0;
  std::string contents;

  void do_display(std::ostream &os) const { os << contents; }
};

inline Screen &Screen::move(pos r, pos c) {
  pos row = r * width; // compoute the row location
  cursor = row + c;    // move curser to the column within that row

  return *this; // return this object as an lvaue
}

char Screen::get(pos r, pos c) const { // declared as inline in the class
  pos row = r * width;                 // compute row location
  return contents[row + c];            // return character at the given column
}

#endif
