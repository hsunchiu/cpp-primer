/*
  Exercise 3.25: Rewrite the grade clustering program from § 3.3.3 (p. 104)
  using iterators instead of subscripts.
 */

#include <iostream>
#include <iterator>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<unsigned> scores(11, 0);

  cout << "please enter the scores:" << endl;

  unsigned grade;
  while (cin >> grade) {

    decltype(scores.begin()) it = scores.begin();

    if (grade <= 100)
      // ++*(it + grade/10);
      ++it[grade / 10];
    // ++(*(scores.begin() + grade / 10));
  }

  for (auto i : scores) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
