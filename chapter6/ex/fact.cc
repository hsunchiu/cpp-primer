#include "Chapter6.h"

int fact(int val) {
  auto sum = 1;
  while (val > 1) {
    sum *= val--;
  }

  return sum;
}
