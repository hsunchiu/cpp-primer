/*
  Exercise 11.7: Define a map for which the key is the family’s last name and
  the value is a vector of the children’s names. Write code to add new families
  and to add new children to an existing family.
 */

#include <map>
#include <vector>

using namespace std;

void addFamily(map<string, vector<string>> &m, string &lastName,
               vector<string> &children) {
  m[lastName] = children;
}

int main() {
  map<string, vector<string>> family;

  return 0;
}
