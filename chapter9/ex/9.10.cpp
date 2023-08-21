#include <string>
#include <vector>

int main() {
  std::vector<std::string> vs = {"hello", "world!"};

  vs.resize(-1);
}
