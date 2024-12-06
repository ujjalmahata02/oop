#include<iostream>
using namespace std;
template <class A>
class print
{

    public:
       print(A x,A y)
       {
        cout<<x<<endl;
        cout<<y<<endl;

       }
};
int main()
{
    print<double>obj(10.30, 20.40);
    return 0;
}