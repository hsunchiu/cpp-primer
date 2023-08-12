#include <iostream>
#include <ostream>

int reused = 42;

int mian() {
  int unique = 0; // block scope for unique

  std::cout << reused << " " << unique << std::endl;

  int reused = 0; // block scope
  std::cout << reused << " " << unique
            << std::endl; // reusued is shadow, here is the inner reused.

  std::cout
      << ::reused << " " << unique
      << std::endl; // use global namespace to specify the outer scope's reused.

  return 0;
}
