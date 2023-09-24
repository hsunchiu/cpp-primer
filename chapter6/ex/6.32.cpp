/*
  Exercise 6.32: Indicate whether the following function is legal. If so,
  explain what it does; if not, correct any errors and then explain it.
  int &get(int *arry, int index) { return arry[index]; }
  int main() {
        int ia[10];
        for (int i = 0; i != 10; ++i)
        get(ia, i) = i;
   }
 */

// legal, assign the array for the index number.
#include <iostream>
using namespace std;
int &get(int *array, int index) { return array[index]; }

int main() {
  int ia[10];
  for (int i = 0; i != 10; ++i)
    get(ia, i) = i;

  for (auto i = 0; i != 10; ++i) {
    cout << i << endl;
  }
}
