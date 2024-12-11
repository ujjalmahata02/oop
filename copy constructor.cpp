#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
       A(int a,int b) //parameterize constructor
       {
        x=a;
        y=b;
        cout<<x<<endl;

        cout<<y<<endl;

       }
       A(A&ref)
       {
        x=ref.x;
        y=ref.y;
        cout<<x<<endl<<ends<<y;

       }
};
int main()
{
    A obj(100,200);//A obj=A(100,200)
    A obj2=obj;
    return 0;
}