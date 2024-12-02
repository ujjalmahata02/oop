#include<iostream>
using namespace std;
class dad
{
    protected:
     int amount;
     public:
     void input()
     {
        amount=1000;

     }
};
class son:public dad
{
    public:
    void show()
    {
        cout<<amount;
    }
};
int main()
{
    son s;
    s.input();
    s.show();
    return 0;
}