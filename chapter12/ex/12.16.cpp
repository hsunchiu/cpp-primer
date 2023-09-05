/*
  Exercise 12.16: Compilers don’t always give easy-to-understand error
  messages if we attempt to copy or assign a unique_ptr. Write a program
  that contains these errors to see how your compiler diagnoses them.
 */

#include <memory>

int main() {
  std::unique_ptr<int> p1;

  //  use of deleted function ‘std::unique_ptr<_Tp, _Dp>::unique_ptr(const
  //  std::unique_ptr<_Tp, _Dp>&) [with _Tp = int; _Dp =
  //  std::default_delete<int>]’
  //   18 |   std::unique_ptr<int> p2 = p1;
  //      |                             ^~

  std::unique_ptr<int> p2 = p1;

  //   error: use of deleted function ‘std::unique_ptr<_Tp,
  //   _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&) [with _Tp = int; _Dp =
  //   std::default_delete<int>]’ 23 |   std::unique_ptr<int> p3(p1);
  //      |                                                        ^

  std::unique_ptr<int> p3(p1);
}
