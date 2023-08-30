/*
  Exercise 11.8: Write a program that stores the excluded words in a vector
  instead of in a set. What are the advantages to using a set?
 */

/*
  set have more fast index.
 */

#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> exclude{"the", "but", "and", "or", "an", "a",
                         "The", "But", "And", "Or", "An", "A"};
}
