#include <iostream>
using namespace std;

// Inline function for addition
inline int fun(int a, int b,int c,int d) {
    return a-b+c*d;
    
}

int main() {
    int value = fun(34, 67,40,54); // Call the inline function
    cout << value;          // Print the result
    return 0;
}
