/*
 * Exercise 2.10: What are the initial values, if any, of each of the following
 * variables?
 */

// initial value is that an object that is initialized gets the specified value
// at the moment it is created.
#include <string>

std::string global_str; // empty string ""
int global_int;         // zero
int main() {
  int local;             // undifined value
  std::string local_str; // empty string
}
