#include<iostream>
using namespace std;

void func(int var) {
	if (var > 0) {
		func(var - 1);
		cout << var << endl;
	}
}

int main() {
	func(5);
}
