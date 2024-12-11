#include <iostream>
using namespace std;

// Inline function for addition
inline int fun(int a, int b) {
    return a + b;
    
}

int main() {
    int value = fun(34, 67); // Call the inline function
    cout << value;          // Print the result
    return 0;
}
