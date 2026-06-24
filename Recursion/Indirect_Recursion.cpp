#include <iostream>
using namespace std;

void funcOne(int var);
void funcTwo(int var);

void funcOne(int var) {
    if (var > 0) {
        cout << "A: " << var << endl;
        funcTwo(var - 1);
    }
}

void funcTwo(int var) {
    if (var > 0) {
        cout << "B: " << var << endl;
        funcOne(var - 1);
    }
}

int main() {
    funcOne(5);
}
