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
    print<char>obj('r', 't');
    return 0;
}
