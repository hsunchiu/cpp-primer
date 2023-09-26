/*
  Exercise 8.4: Write a function to open a file for input and read its contents
  into a vector of strings, storing each line as a separate element in the
  vector.
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void ReadFileToVec(const string &fileName, vector<string> &vec) {
  ifstream in(fileName);

  if (in) {
    string buf;
    while (in >> buf)
      vec.push_back(buf);
  }
}

int main() {
  vector<string> vec;

  ReadFileToVec("./data.txt", vec);

  for (const auto &str : vec)
    cout << str << endl;
  return 0;
}
