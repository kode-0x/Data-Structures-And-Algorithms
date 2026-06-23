#include <iostream>
using namespace std;

int func(int var) {
    if (var > 100) {
        return var - 10;
    } else {
        return func(func(var + 11));
    }
}

int main() {
    cout << func(100) << endl;
}