#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr) {
    if (arr.empty()) return;
    
    bool swapped;
    int counter = 0;
    do {
        swapped = false;
        for (int index = 0; index < arr.size() - 1; index++) {
            if (arr[index] > arr[index + 1]) {
                swap(arr[index + 1], arr[index]);
                swapped = true;
                ++counter;
            }
        }
    } while (swapped);
}

int main() {}