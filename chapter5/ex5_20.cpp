#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;


int main(int argc, char **argv)
{
  string read, tmp;
  while(cin >> read){
    if(read == tmp){
      break;
    }else{
      tmp = read;
    }
  }
  if (cin.eof())
    cout << "no words was repeated." << endl;
  else
    cout << read << " occurs twice in succession." << endl;
  
  return 0;    

}
