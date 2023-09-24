/*
  Exercise 6.22: Write a function to swap two int pointers.
 */

void swapPoint(int *&p1, int *&p2) {

  auto p = p1;
  p1 = p2;
  p2 = p;
}
