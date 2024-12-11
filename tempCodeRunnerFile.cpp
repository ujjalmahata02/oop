#include<iostream>
using namespace std;
class A

int count=0

   {
    public:
       A()
       {
        
        cout<<"object"<<++count<<"created";

       }

    ~A()

       {
        cout<<"object"<<count--<<"deallocated"<<endl;

       }
};
int main()
{
    A obj,obj 2;
    return 0;
}