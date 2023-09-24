/*
  Exercise 6.9: Write your own versions of the fact.cc and factMain.cc files.
  These files should include your Chapter6.h from the exercises in the previous
  section. Use these files to understand how your compiler supports separate
  compilation.
 */

#include "Chapter6.h"

int fact(int val) {
  auto sum = 1;
  while (val > 1) {
    sum *= val--;
  }

  return sum;
}
