#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(int argc,char **argv)
{
  int grade;
  while(cin >> grade && grade >= 0 && grade <= 100){
    string finalgrade = (grade > 90) ? "high pass" 
      :(grade < 60) ? "fail" : "pass";
    cout << grade << " " << finalgrade << endl;

    if(grade > 90){
      finalgrade = "high pass";
    }
    else if(grade < 60){
      finalgrade = "fail";
    }
    else{
      finalgrade = "pass";
    }
    cout << grade << " " << finalgrade << endl;

  }
  
  return 0;
}
