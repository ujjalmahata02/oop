#include<iostream>
using namespace std;

class A
{
    int a,b;
    public:
    friend class B;
};

class B

 {
     int c;
        public:
         void add(A.r)
        {
            c=r.a+r.b;
            cout<<c;
        }
    
};

int main()
{
    B.obj1;
    obj.add();

    
    return 0;
}
