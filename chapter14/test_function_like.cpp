#include <iostream>

int add(int i, int j) { return i + j; }

auto mod = [](int i, int j) { return i % j; };
auto lambda = [](int, int) -> int { return 0; };

int main() {
  std::cout << std::string(typeid(mod).name()) << std::endl;
  std::cout << std::string(typeid(lambda).name()) << std::endl;
}
