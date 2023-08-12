#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char **argv)
{
  const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
  
  int grade;
  while(cin >> grade){
    string lettergrade = grade < 60 ? scores[0] : scores[(grade - 50)/10];
    lettergrade += 
      (grade == 100 || grade < 60) 
      ? ""
      :(grade % 10 > 7) ? "+" : (grade % 10 < 3) ? "-" : "";
    
    cout << grade << " is " << lettergrade << endl;
    lettergrade = "";
    
  }
  return 0;
}
