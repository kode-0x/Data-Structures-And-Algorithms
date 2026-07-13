#include <iostream>
#include <vector>

int main() {

    // Creation
    std::vector<int> vec;


    // Insertion
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);


    // Display First Element
    if (!vec.empty()) {
        std::cout << "First Element: "
                  << vec.front()
                  << '\n';
    }


    // Display Last Element
    if (!vec.empty()) {
        std::cout << "Last Element: "
                  << vec.back()
                  << '\n';
    }


    // Size
    std::cout << "Vector Size: "
              << vec.size()
              << '\n';


    // Capacity
    std::cout << "Vector Capacity: "
              << vec.capacity()
              << '\n';


    // Check Empty
    std::cout << "Is Empty: "
              << std::boolalpha
              << vec.empty()
              << '\n';


    // Access Element
    std::cout << "Element At Index 2: "
              << vec.at(2)
              << '\n';


    // Deletion
    std::cout << "Removing Last Element: "
              << vec.back()
              << '\n';

    vec.pop_back();


    // Insert Using emplace_back
    vec.emplace_back(60);
    vec.emplace_back(70);


    // Traverse Vector
    std::cout << "\nVector Elements:\n";

    for (int element : vec) {
        std::cout << element << '\n';
    }


    // Another Vector
    std::vector<int> other;

    other.push_back(100);
    other.push_back(200);


    // Swap
    vec.swap(other);

    std::cout << "\nAfter Swap:\n";

    for (int element : vec) {
        std::cout << element << '\n';
    }


    // Final Size
    std::cout << "Final Size: "
              << vec.size()
              << '\n';

}