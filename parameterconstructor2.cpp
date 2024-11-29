#include<iostream>
using namespace std;
class A
{
    
    public:
       A(int a,int b) //parameterize constructor
       {
        
        cout<<a<<endl;

        cout<<b<<endl;

       }
};
int main()
{
    A obj(100,200);//A obj=A(100,200)

    return 0;
}