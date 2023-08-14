#include <string>
using namespace std;

typedef string r1[10];
r1 &func1();
using r2 = string[10];
r2 &func2();

auto func3() -> string (&)[10];

string as[10];

decltype(as) &func4();

// test, I like the second one. it's simple
r1 &func1() {}
r1 &func2() {}
r1 &func3() {}
r1 &func4() {}
