void swapPoint(const int *&p1, const int *&p2) {
  const int *p;
  p = p1;
  p1 = p2;
  p2 = p;
}
