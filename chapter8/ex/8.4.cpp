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
    while (getline(in, buf))
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
