/*
  Exercise 9.13:How would you initialize a vector<double> from a list<int> ?
   From a vector<int>? Write code to check your answers.
 */
#include <list>
#include <vector>
using namespace std;

// use two iterators to inialize a container with differen underlay type.
int main() {
  list<int> ilst = {0, 1, 2, 3, 4, 5};

  vector<double> dv(ilst.cbegin(), ilst.cend());
}
