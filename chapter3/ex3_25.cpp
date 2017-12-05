#include <iostream>
#include <vector>
#include <iterator>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  vector<unsigned> scores(11,0);

  cout << "please enter the scores:" << endl;

  unsigned grade;
  while(cin >> grade){
    
    decltype(scores.begin()) it = scores.begin();

    if(grade <= 100)
      // ++*(it + grade/10);
     ++it[grade/10];
    // ++(*(scores.begin() + grade / 10));
  }
  
  for (auto i: scores){
    cout << i << " ";
  }
  cout << endl;

  return 0;

}
