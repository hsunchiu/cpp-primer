#ifndef SCREEN_H
#define SCREEN_H
#include <string>

class Screen {
public:
  using pos = std::string::size_type;

  Screen() = default;
  Screen(pos h, pos w, int n) : height(h), width(w), contents(n, ' '){};
  Screen(pos h, pos w, char c) : height(h), width(w), contents(1, c){};

private:
  pos cusor = 0, height = 0, width = 0;
  std::string contents;
};

#endif
