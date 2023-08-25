/*
  Exercise 10.20: The library defines an algorithm named count_if. Like
  find_if, this function takes a pair of iterators denoting an input range
  andC++ Primer, Fifth Edition a predicate that it applies to each element in
  the given range. count_if returns a count of how often the predicate is true.
  Use count_if to rewrite the portion of our program that counted how many words
  are greater than length 6.
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// https://www.quora.com/What-could-be-an-alternative-to-The-Quick-Brown-Fox-Jumps-Over-The-Lazy-Dog

int main() {
  vector<string> vs{"the",    "swift", "gray", "rabbit", "hopped",
                    "across", "the",   "lazy", "bear"};

  cout << "in the string:` ";
  for_each(vs.begin(), vs.end(), [](const string &s) { cout << s << " "; });
  cout << "` have "
       << count_if(vs.begin(), vs.end(),
                   [](const string &s) { return s.size() >= 6; })
       << " element(s) greater than(include) the length 6." << endl;
}
