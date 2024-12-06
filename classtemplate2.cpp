#include<iostream>
using namespace std;
template <class A>
class print
{

    public:
       print(A x,A y)
       {
        cout<<x<<ends<<y<<endl;

       }
};
int main()
{
    print<int>obj(100, 200);
    return 0;
}