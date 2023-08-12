#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char **argv)
{
  const vector<string> scores = {"F", "D", "E", "B", "A", "A++"};

  int score;
  
  while(cin >> score && score >= 0 && score <= 100){
    string letterscore;
    if(score < 60){
      letterscore = scores[0];
    }
    else{
      letterscore = scores[(score - 50)/10];
      if(score != 100){
	if(score % 10 > 7){
	  letterscore += "+";
	}
	else if(score %10 < 3){
	  letterscore += "-";
	}
      }
    }
    
    cout << score << " is " << letterscore << endl;
    letterscore = "";
  }
  

  return 0;



}
