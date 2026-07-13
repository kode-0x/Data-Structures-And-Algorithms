#include <bits/stdc++.h>
using namespace std;
int linearSearch(vector<int>& arr, int key) {
    for (int index = 0; index < arr.size(); index++) {
        if (arr[index] == key) {
            if (index > 0)
                swap(arr[index], arr[index - 1]);
            return index - (index > 0 ? 1 : 0);
        }
    }
    return -1;
}

int main() {}