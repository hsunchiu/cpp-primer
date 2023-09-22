#include <iostream>
#include <string>

int main() {
  int _a = 10;
  int a;
  a = (1, _a + 1, 5);

  // the output is 5,The result of a comma expression is the value of the right
  // hand operand.
  std::cout << a << std::endl;
}
