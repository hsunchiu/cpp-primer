/*
  Exercise 11.13: There are at least three ways to create the pairs in the
  program for the previous exercise. Write three versions of that program,
  creating the pairs in each way. Explain which form you think is easiest to
  write and understand, and why.
 */

#include <string>
#include <utility>

using namespace std;

int main() {
  // I like p1
  pair<string, int> p1("hello", 1);
  pair<string, int> p2 = {"hello", 1};
  pair<string, int> p3 = make_pair("hello", 1);
}
