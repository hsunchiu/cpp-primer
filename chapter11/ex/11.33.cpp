/*
  Exercise 11.33: Implement your own version of the word-transformation
  program.
 */
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <stdexcept>
#include <string>
#include <strstream>

using namespace std;

// TODO: Why the return type is not the reference type .
map<string, string> buildMap(ifstream &map_file) {
  map<string, string> trans_map;
  string key, value;

  while (map_file >> key && getline(map_file, value)) {
    if (value.size() > 1)
      trans_map[key] = value.substr(1); // skip leading sapce
    else
      throw runtime_error("no rule for" + key);
  }

  return trans_map;
}

const string &transform(const string &s, const map<string, string> &m) {
  auto map_it = m.find(s);

  if (map_it != m.cend())
    return map_it->second;
  else
    return s;
}

void word_transform(ifstream &map_file, ifstream &input) {
  auto trans_map = buildMap(map_file); // store the transformations
  string text;                         // hold each line from the input
  while (getline(input, text)) {       // read a line of input
    istringstream stream(text);        // read each word
    string word;
    bool firstword = true; // controls whether a space is printed
    while (stream >> word) {
      if (firstword)
        firstword = false;
      else
        cout << " "; // print a space between words

      // transform returns its first argument or its transformation
      cout << transform(word, trans_map); // print the output
    }
    cout << endl; // done with this line of input
  }
}
