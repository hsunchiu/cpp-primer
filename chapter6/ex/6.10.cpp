#include <iostream>
using namespace std;

void swap(int *a, int *b) {
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

int main() {
  for (auto i = 0; i < 10; ++i)
    for (auto j = 10; j > 0; --j) {
      int _i = i;
      int _j = j;
      cout << "i = " << _i << " ,"
           << "j = " << _j << " after swap: ";
      swap(&_i, &_j);
      cout << "i = " << _i << " ,"
           << "j = " << _j << endl;
    }
}
