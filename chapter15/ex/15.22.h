/*
  Exercise 15.22: For the class you chose in the previous exercise, identify
  some of the likely virtual functions as well as public and protected
  members.
 */
#ifndef _15_22_H
#define _15_22_H
#include <iostream>

struct GraphicalFileFormats {
public:
  virtual void read(std::istream &is) = 0;
  virtual void write(std::ostream &os) = 0;
  virtual void show() = 0;
};

struct gif : public GraphicalFileFormats {};
struct tiff : public GraphicalFileFormats {};
struct jpeg : public GraphicalFileFormats {};
struct bmp : public GraphicalFileFormats {};
#endif
