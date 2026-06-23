#include <iostream>
using namespace std;

void func(int var) {
    if (var > 0) {
        cout << var << endl;
        func(var - 1);
        func(var - 1);
    }
}

int main() {
    func(5);
}