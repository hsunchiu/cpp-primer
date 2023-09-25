#include <string>

#include <vector>

class NoDefault {
public:
  NoDefault(const std::string &);
  // additional members follow, but no other constructors
};

int main() { std::vector<NoDefault> vec(10); }
