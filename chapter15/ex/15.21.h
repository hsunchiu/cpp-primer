/*
  Exercise 15.21: Choose one of the following general abstractions containing
  a family of types (or choose one of your own). Organize the types into an
  inheritance hierarchy:
  (a) Graphical file formats (such as gif, tiff, jpeg, bmp)
  (b) Geometric primitives (such as box, circle, sphere, cone)
  (c) C++ language types (such as class, function, member function)
*/
#ifndef _15_20_H
#define _15_20_H
#include <iostream>
#include <istream>
#include <ostream>

struct GraphicalFileFormats {
  /* virtual void read(std::istream &is) = 0; */
  /* virtual void write(std::ostream &os) = 0; */
  /* virtual void show() = 0; */
};

struct gif : public GraphicalFileFormats {};
struct tiff : public GraphicalFileFormats {};
struct jpeg : public GraphicalFileFormats {};
struct bmp : public GraphicalFileFormats {};

#endif
