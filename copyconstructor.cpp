#include<iostream>
using namespace std;

class student {
    int id; // private by default
public:
    // Default constructor
    student() {}

    // Parameterized constructor
    student(int a) : id(a) {}

    // Copy constructor
    student(const student &s) {
        id = s.id;
    }

    // Function to display the id
    int display() {
        return id;
    }
};

int main() {
    student s1(200);       // Creating an object with id 200
    student s2(s1);        // Copy constructor, s2 copies s1
    student s3 = s2;       // Copy constructor, s3 copies s2
    student s4 = s1;       // Copy constructor, s4 copies s1

    // Displaying the IDs
    cout << "id of student s1 = " << s1.display() << endl;
    cout << "id of student s2 = " << s2.display() << endl;
    cout << "id of student s3 = " << s3.display() << endl;
    cout << "id of student s4 = " << s4.display() << endl;

    return 0;
}
