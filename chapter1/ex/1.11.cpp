#include <iostream>

int main() {
  int v1 = 0, v2 = 0, i = 0;

  std::cout << "Enter two integer:" << std::endl;
  std::cin >> v1 >> v2;

  if (v1 > v2) {
    int tmp = v1;
    v2 = v1;
    v1 = tmp;
  }

  while (v1 < v2) {
    std::cout << v1 << " ";
    v1++;
  }
  std::cout << std::endl;

  return 0;
}
