/*
  Exercise 7.32: Define your own versions of Screen and Window_mgr in
  which clear is a member of Window_mgr and a friend of Screen.
 */

#ifndef SCREEN_H
#define SCREEN_H

#include <string>
#include <vector>

#ifndef NDEBUG
#include <iostream>
#endif

class Screen;

class Window_mgr {
public:
  // location ID for each screen on the window
  using ScreenIndex = std::vector<Screen>::size_type;
  // reset the Screen at the given position to all blanks
  void clear(ScreenIndex);

private:
  std::vector<Screen> screens;
};

class Screen {
  friend void Window_mgr::clear(ScreenIndex);

public:
  using pos = std::string::size_type;

  // tell the compiler to synthesize the default constructor
  Screen() = default;

  // takes values for height and width and initilizes contents to hold the given
  // number of blanks
  Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}

  // cursor initialized toe 0 by its in-class initializer
  Screen(pos ht, pos wd, char c)
      : height(ht), width(wd), contents(ht * wd, c) {}

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

  Screen::pos size() const;

private:
  pos cursor = 0, height = 0, width = 0;
  std::string contents;

  void do_display(std::ostream &os) const { os << contents; }
};

inline void Window_mgr::clear(ScreenIndex i) {
  // s is a reference to the Screen we want to clear
  Screen &s = screens[i];
  // reset the contents of that Screen to all blanks
  s.contents = std::string(s.height * s.width, ' ');
}

inline Screen &Screen::move(pos r, pos c) {
  pos row = r * width; // compoute the row location
  cursor = row + c;    // move curser to the column within that row

  return *this; // return this object as an lvaue
}

char Screen::get(pos r, pos c) const { // declared as inline in the class
  pos row = r * width;                 // compute row location
  return contents[row + c];            // return character at the given column
};

inline Screen::pos Screen::size() const { return height * width; }

#endif
