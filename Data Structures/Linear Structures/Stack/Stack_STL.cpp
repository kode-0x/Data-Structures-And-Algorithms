#include <iostream>
#include <stack>

int main() {

    // Creation
    std::stack<int> st;


    // Insertion (Push)
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);


    // Display Top Element
    if (!st.empty()) {
        std::cout << "Top Element: "
                  << st.top()
                  << '\n';
    }


    // Size
    std::cout << "Stack Size: "
              << st.size()
              << '\n';


    // Check Empty
    std::cout << "Is Empty: "
              << std::boolalpha
              << st.empty()
              << '\n';


    // Deletion (Pop)
    if (!st.empty()) {
        std::cout << "Removing: "
                  << st.top()
                  << '\n';

        st.pop();
    }


    // Insert Multiple Elements
    st.emplace(60);
    st.emplace(70);


    // Traverse Stack (Using Copy)
    std::cout << "\nStack Elements:\n";

    std::stack<int> temp = st;

    while (!temp.empty()) {
        std::cout << temp.top() << '\n';
        temp.pop();
    }


    // Another Stack
    std::stack<int> other;

    other.push(100);
    other.push(200);


    // Swap
    st.swap(other);

    std::cout << "\nAfter Swap, Top: ";

    if (!st.empty()) {
        std::cout << st.top() << '\n';
    }


    // Final State
    std::cout << "Final Size: "
              << st.size()
              << '\n';

}