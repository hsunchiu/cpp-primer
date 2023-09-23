/*
  Exercise 5.19: Write a program that uses a do while loop to repetitively
  request two strings from the user and report which string is less than the
  other.
 */

#include <iostream>
#include <string.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char **argv) {
  string rsp;
  do {
    cout << "Please enter two strings:";
    string str1, str2;
    cin >> str1 >> str2;
    cout << (str1 <= str2 ? str1 : str2) << " is less than the other." << endl
         << "More? Enter yes or no: ";
    cin >> rsp;
  } while (!rsp.empty() && rsp[0] == 'y');
  return 0;
}
