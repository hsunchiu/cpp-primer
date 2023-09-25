#include "7.27.h"

#include <iostream>

using std::cout;

int main() {

  Screen myScreen(5, 5, 'X');
  myScreen.move(4, 0).set('#').display(cout);
  cout << "\n";
  myScreen.display(cout);
  cout << "\n";

  const Screen constScreen(5, 5, 'A');

  constScreen.display(cout) /*.set(4.0)*/;
}
