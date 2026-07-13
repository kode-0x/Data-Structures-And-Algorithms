#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>& arr, int key) {
    for (int index = 0; index < arr.size(); index++) {
        if (arr[index] == key) {
            if (index > 0) {
                swap(arr[index], arr[index - 1]); // Transposition
            }
            // Another Method: Move To Front/Head
            // swap(arr[index], arr[0]);
            return (index > 0) ? index - 1 : index;
        }
    }
    return -1;
}

int main() {}