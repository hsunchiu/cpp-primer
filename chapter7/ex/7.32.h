#ifndef SCREEN_H
#define SCREEN_H

class Window_mgr {
public:
  void clear();
};

class Screen {
  friend void Window_mgr::clear();
};

inline void Window_mgr::clear(){};

#endif
