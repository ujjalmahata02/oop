#include<iostream>
using namespace std;

class madhab; // Forward declaration

class jeban {
    private:
        int a;
    public:
        void i_have() 
        { // Corrected function name to follow valid naming rules
            a = 10;
        }
        friend void ujjal(jeban p1, madhab p2); // Declared friend function
};

class madhab {
    private:
        int b;
    public:
        void i_have() { // Corrected function name
            b = 100;
        }
        friend void ujjal(jeban p1, madhab p2); // Declared friend function
};

// Definition of friend function
void ujjal(jeban p1, madhab p2) 
{
    int c = p1.a + p2.b; // Accessing private members using the friend function
    cout << "total amount gives my friend: " << c << endl;
}

int main() {
    jeban a;
    madhab b;

    a.i_have(); // Call the method to initialize a
    b.i_have(); // Call the method to initialize b

    ujjal(a, b); // Call the friend function

    return 0;
}
