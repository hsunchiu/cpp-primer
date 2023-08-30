

#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;
  v[0] = 1;
  for (auto const e : v) {
    cout << e << " ";
  }
  cout << endl;
}
