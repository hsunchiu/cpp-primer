/*
  Exercise 6.38: Revise the arrPtr function on to return a reference to the
  array.
 */
int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

decltype(odd) &arrRefer(int i) { return (i % 2) ? odd : even; }
