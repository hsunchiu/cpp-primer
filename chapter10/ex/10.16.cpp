/*
  Exercise 10.16: Write your own version of the biggies function using
  lambdas.
 */

#include <cstdarg>
#include <cstdio>
#include <variant>

int main() {
  auto biggest = [](int v, ...) {
    int max = v;
    va_list arg;

    va_end(arg);
  };
}
