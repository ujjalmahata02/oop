#include<iostream>
using namespace std;
class theif
{
    private:
     string name,adress;
     int mob;
     
     public:
     void input()
     {
        name="jeban";
        adress="lal kila Bajhang";
        mob=9847567672;
    }
     void output()
     {
        cout<<name<<endl;
        cout<<adress<<endl;
        cout<<mob;

     }

};
int main()
{
    theif t;
    t.input();
    t.output();
    return 0;


}

