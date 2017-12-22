#include <string.h>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char **argv)
{
  string rsp;
  do{
    cout << "Please enter two strings:";
    string str1, str2;
    cin >> str1 >> str2;
    cout << (str1 <= str2 ? str1 : str2) << " is less than the other."
	 << endl
	 << "More? Enter yes or no: ";
    cin >> rsp;
  }while(!rsp.empty() && rsp[0] == 'y');
     return 0;
}
