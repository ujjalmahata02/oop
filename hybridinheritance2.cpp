#include <iostream>
using namespace std;

class A {
    int n;
public:
    void input() {
        cout << "Enter value: ";
        cin >> n;
    }
    void show() {
        cout << "Value: " << n << endl;
    }
};

class B : virtual public A {
    public:
   int  sum;
    int a=10;
    int b=30;
    sum()
    {
        sum=a+b;
    }

    // No additional implementation needed for now
};

class C : virtual public A {
    public:
    sub;
    int sub()
    {
     sub=a-b;
    }
    // No additional implementation needed for now
};

class D : public B, public C {
   
    public:
    int multi;
    int milti()
    {
        multi=a*b;
    }
    
};

int main() {
    A obj;
    B obj1;
    C obj2;
    D obj3;

    obj.input();
    obj.show();

    // Using obj3 to demonstrate its functionality
    obj3.input();
    obj3.show();

    return 0;
}
