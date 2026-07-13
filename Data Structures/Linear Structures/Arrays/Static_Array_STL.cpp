#include <iostream>
#include <array>

int main() {

    // Creation
    std::array<int, 5> arr;

    // Insertion
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;


    // Display First Element
    std::cout << "First Element: "
              << arr.front()
              << '\n';


    // Display Last Element
    std::cout << "Last Element: "
              << arr.back()
              << '\n';


    // Size
    std::cout << "Array Size: "
              << arr.size()
              << '\n';


    // Check Empty
    std::cout << "Is Empty: "
              << std::boolalpha
              << arr.empty()
              << '\n';


    // Access Using Index
    std::cout << "Element At Index 2: "
              << arr.at(2)
              << '\n';


    // Traverse Array
    std::cout << "\nArray Elements:\n";

    for (int element : arr) {
        std::cout << element << '\n';
    }


    // Fill
    arr.fill(100);

    std::cout << "\nAfter Fill:\n";

    for (int element : arr) {
        std::cout << element << '\n';
    }

}