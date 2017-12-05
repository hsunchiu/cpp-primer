#include <iostream>
#include <vector>

using std::vector;

int main()
{
  vector<int> ivec1(10,42);
  vector<int> ivec2{42,42,42,42,42,42,42,42,42,42};
  vector<int> ivec3;
  for(decltype(ivec3.size()) i = 0; i < 10; i++){
    ivec3.push_back(i);
  }
 
  std::cout << "The first approach is better ! I think" << std::endl;
  
  return 0;

}
