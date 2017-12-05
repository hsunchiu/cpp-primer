#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char ** argv)
{
  int i;
  while(cin >> i && i !=  42){
    cout << i << " ";
  }

  cout << endl;
  cout << i << endl;
  cout << endl;
  return 0;
}
