#include <iostream>
#include <queue>

int main() {

    // Creation
    std::queue<int> q;


    // Insertion (Push)
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);


    // Display Front Element
    if (!q.empty()) {
        std::cout << "Front Element: "
                  << q.front()
                  << '\n';
    }


    // Display Rear Element
    if (!q.empty()) {
        std::cout << "Rear Element: "
                  << q.back()
                  << '\n';
    }


    // Size
    std::cout << "Queue Size: "
              << q.size()
              << '\n';


    // Check Empty
    std::cout << "Is Empty: "
              << std::boolalpha
              << q.empty()
              << '\n';


    // Deletion (Pop)
    if (!q.empty()) {
        std::cout << "Removing: "
                  << q.front()
                  << '\n';

        q.pop();
    }


    // Insert Multiple Elements
    q.emplace(60);
    q.emplace(70);


    // Traverse Queue (Using Copy)
    std::cout << "\nQueue Elements:\n";

    std::queue<int> temp = q;

    while (!temp.empty()) {
        std::cout << temp.front() << '\n';
        temp.pop();
    }


    // Another Queue
    std::queue<int> other;

    other.push(100);
    other.push(200);


    // Swap
    q.swap(other);

    std::cout << "\nAfter Swap, Front: ";

    if (!q.empty()) {
        std::cout << q.front() << '\n';
    }


    // Final State
    std::cout << "Final Size: "
              << q.size()
              << '\n';

}