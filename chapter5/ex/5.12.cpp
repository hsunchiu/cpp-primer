/*
  Exercise 5.12: Modify our vowel-counting program so that it counts the number
  of occurrences of the following two-character sequences: ff, fl, and fi.
 */
#include <iostream>
using namespace std;

int main() {
  size_t aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, vowelCnt = 0,
         otherCnt = 0, spaceCnt = 0, tabCnt = 0, newlineCnt = 0, ffCnt = 0,
         flCnt = 0, fiCnt = 0;

  string line;
  //  char ch;
  while (getline(cin, line)) {
    ++newlineCnt;
    char preChar = '\n';

    for (auto const ch : line) {
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
      } else if (ch == ' ') {
        ++spaceCnt;
      } else if (ch == '\t')
        ++tabCnt;
      else {
        ++otherCnt;
      }
      // check fj fl fi
      if (preChar == 'f' && ch == 'f') {
        ++ffCnt;
      } else if (preChar == 'f' && ch == 'l') {
        ++flCnt;
      } else if (preChar == 'f' && ch == 'i') {
        ++fiCnt;
      }

      preChar = ch;
    }
  }

  vowelCnt = aCnt + eCnt + iCnt + oCnt + uCnt;

  // print results
  cout << "Number of vowel a: \t" << aCnt << '\n'
       << "Number of vowel e: \t" << eCnt << '\n'
       << "Number of vowel i: \t" << iCnt << '\n'
       << "Number of vowel o: \t" << oCnt << '\n'
       << "Number of vowel u: \t" << uCnt << endl;

  cout << "Number of spaces: \t" << spaceCnt << endl;
  cout << "Number of tabs: \t" << tabCnt << endl;
  cout << "Number of newlines: \t" << newlineCnt << endl;

  cout << "Number of vowels :\t" << vowelCnt << endl;
  cout << "Number of others:\t" << otherCnt << endl;

  cout << "Number of ff: \t" << ffCnt << '\n';
  cout << "Number of fl: \t" << flCnt << '\n';
  cout << "Number of fi: \t" << fiCnt << endl;
}
