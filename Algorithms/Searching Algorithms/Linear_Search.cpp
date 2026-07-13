#include <bits/stdc++.h>
using namespace std;
int linearSearch(const vector<int>& arr, int key) {
    for (int index = 0; index < arr.size(); index++) {
        if (arr[index] == key)
            return index;
    }
    return -1;
}

int main() {}