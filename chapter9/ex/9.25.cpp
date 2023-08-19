#include <iostream>
#include <list>
using namespace std;

int main() {
  list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto element1 = lst.begin();

  auto element2 = lst.erase(element1);

  cout << "element2: " << *element2 << endl;
  cout << "the list is ";
  for (auto i : lst) {
    cout << i << " ";
  }

  cout << endl;

  element1 = lst.end();

  element2 = lst.erase(element1, element1);

  cout << "the list is ";
  for (auto i : lst) {
    cout << i << " ";
  }
  cout << endl;
}
