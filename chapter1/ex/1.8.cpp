#include <iostream>

int main() {
  std::cout << "/*";
  std::cout << "*/";
  std::cout << /* "*/ " */ "; // mismatch the " and add the ";
  std::cout << /* "*/ " /* " /*" */;
}
