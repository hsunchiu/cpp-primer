/*
  Exercise 7.24: Give your Screen class three constructors: a default
  constructor; a constructor that takes values for height and width and
  initializes the contents to hold the given number of blanks; and a constructor
  that takes values for height, width, and a character to use as the contents of
  the screen.
 */

#ifndef SCREEN_H
#define SCREEN_H

#include <string>

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

  char get() const { return contents[cursor]; } // implicity inline

  inline char get(pos ht, pos wd) const; // explicitly inline

  Screen &move(pos r, pos c); // can be made inline later

private:
  pos cursor = 0, heigth = 0, width = 0;
  std::string contents;
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
