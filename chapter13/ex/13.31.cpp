#include "13.31.h"

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// TODO: can't show the result.

int main() {
  vector<HasPtr> vhs{string("hello"), string("world"), string("nihao"),
                     string("shijie")};

  sort(vhs.begin(), vhs.end());

  for (auto &hp : vhs) {
    hp.show();
  }
}
