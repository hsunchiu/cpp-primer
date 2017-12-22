#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main(int argc, char **argv)
{
	vector<int> ivec1{0, 1, 1, 2};
	vector<int> ivec2{0, 1, 1, 2, 3, 5};

	auto size = ivec1.size() < ivec2.size() ? ivec1.size() : ivec2.size();
	for(decltype(ivec1.size()) i = 0; i != size; ++i){
		if(ivec1[i] != ivec2[i]){
			cout << "false" << endl;
			return 0;
		}
	}

	cout << "true" << endl;
	return 0;

}
