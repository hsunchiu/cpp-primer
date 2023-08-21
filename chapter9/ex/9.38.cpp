/*
  Exercise 9.37: Why don’t list or array have a capacity member?
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> iv;

  for (auto i = 1; i < 100; ++i) {

    iv.push_back(i);

    cout << i << "'s push_back() "
         << "size: " << iv.size() << " capaticy:" << iv.capacity() << endl;
  }
}
