#include <list>
using namespace std;

int wrong() {
  list<int> lst1;
  list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();
  while (iter1 < iter2) /* ... */
    ;
}

int right() {
  list<int> lst1;
  list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();

  while (iter1 != iter2) {
  }
}
