/*
  Exercise 9.28: Write a function that takes a forward_list<string> and two
  additional string arguments. The function should find the first string and
  insert the second immediately following the first. If the first string is not
  found, then insert the second string at the end of the list.
 */
#include <forward_list>
#include <iostream>
#include <string>

using namespace std;

void func(std::forward_list<std::string> &flst, const std::string s1,
          std::string s2) {
  auto prev = flst.before_begin();
  auto curr = flst.begin();

  while (curr != flst.end()) {
    if (*curr == s1) {
      flst.insert_after(curr, s2);
      return;
    } else {
      prev = curr;
      ++curr;
    }
  }
  flst.insert_after(prev, s2);
}

int main() {
  forward_list<string> flst = {"hello", "world"};

  func(flst, "hello", "你好");

  for (const auto &i : flst) {
    cout << i << " ";
  }
  cout << endl;
}
