/*
  Exercise 5.20: Write a program to read a sequence of strings from the standard
  input until either the same word occurs twice in succession or all the words
  have been read. Use a while loop to read the text one word at a time. Use the
  break statement to terminate the loop if a word occurs twice in succession.
  Print the word if it occurs twice in succession, or else print a message
  saying that no word was repeated.
 */

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char **argv) {
  string read, tmp;
  while (cin >> read) {
    if (read == tmp) {
      break;
    } else {
      tmp = read;
    }
  }
  if (cin.eof())
    cout << "no words was repeated." << endl;
  else
    cout << read << " occurs twice in succession." << endl;

  return 0;
}
