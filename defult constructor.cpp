#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
       A() 
       {
        a=10; b=20;
        cout<<a<<ends<<b;

       }
};
int main()
{
    A obj; 
    return 0;
}