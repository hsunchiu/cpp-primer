/*
  Exercise 5.9: Write a program using a series of if statements to count the
  number of vowels in text read from cin.
 */
#include <iostream>
using namespace std;

int main() {
  size_t aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, vowelCnt = 0,
         otherCnt = 0;

  char ch;
  while (cin >> ch) {
    if (ch == 'a' || ch == 'A') {
      ++aCnt;
    } else if (ch == 'e' || ch == 'E') {
      ++eCnt;
    } else if (ch == 'i' || ch == 'I') {
      ++iCnt;
    } else if (ch == 'o' || ch == 'O') {
      ++oCnt;
    } else if (ch == 'u' || ch == 'U') {
      ++uCnt;
    } else {
      ++otherCnt;
    }
  }

  vowelCnt = aCnt + eCnt + iCnt + oCnt + uCnt;

  // print results
  cout << "Number of vowel a: \t" << aCnt << '\n'
       << "Number of vowel e: \t" << eCnt << '\n'
       << "Number of vowel i: \t" << iCnt << '\n'
       << "Number of vowel o: \t" << oCnt << '\n'
       << "Number of vowel u: \t" << uCnt << endl;

  cout << "Number of vowels :\t" << vowelCnt << endl;
  cout << "Number of others:\t" << otherCnt << endl;
}
