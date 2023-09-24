/*
  Exercise 6.33: Write a recursive function to print the contents of a vector.
 */

#include <iostream>
#include <vector>
using namespace std;

void print(std::vector<std::string> s) {
  if (!s.empty()) {
    string tmp = *(s.end() - 1);
    s.pop_back();
    print(s);
    cout << tmp << endl;
  }
}

int main() {

  vector<string> vs = {"hello", "world", "ni", "hao", "wo", "de", "shi", "jie"};

  print(vs);

  return 0;
}
