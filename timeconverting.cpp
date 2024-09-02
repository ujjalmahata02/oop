//wap to convert 20704 second into hour minutes & drcond//
#include<iostream>
using namespace std;
class Time
{
    int hh,mm,ss;
    public:Time()
    {
       hh=0;
       mm=0;
       ss=0;

    }
    Time(int s)
    {
        hh=s/3600;
        s=s/3600;
        mm=s/60;
        ss=s/60;

    }
    void show()
    { cout<<hh<<":"<<mm<<":"<<ss<<endl;}
   
};
int main()
{
    Time t1,t2;
    t1=207041;
    t2=Time(308034);
    cout<<"time t1=";t1.show();
    cout<<"time t2=";t2.show();
    return 0;
}