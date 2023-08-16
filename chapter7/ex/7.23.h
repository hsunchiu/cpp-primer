#ifndef SCREEN_H
#define SCREEN_H

#include <string>

class Screen {
public:
  using pos = std::string::size_type;

private:
  pos cursor = 0, heigth = 0, width = 0;
  std::string contents;
};

#endif
