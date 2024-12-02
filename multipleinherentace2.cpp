#include<iostream>
using namespace std;
class A
{
    protected:
     int a,b;

     public:
     void input()
     {
        cout<<"enter two number:";
        cin>>a>>b;


     }
};
class B:public A
{
    public:
    int c;
    void add()
    {
        c=a+b;
        cout<<"addtion"<<c<<endl;

    }
    void sub()
    {
        c=a-b;
        cout<<"substraction"<<c<<endl;
    }
};
class C:public B
{
    int c;
    public:
    void mult()
    {
        c=a*b;
        cout<<"multiplaction"<<endl<<c;

    }
};
int main()
{
    C obj;
    obj.input();
    obj.add();
    obj.sub();
    obj.mult();

    return 0;
}