#include<iostream>
using namespace std;
class ujjal
{
    private:
    string tv;
    public:
       void show()
        {
            tv="NPL final 2081";

        }
     friend void madhab(ujjal r);


};
 void madhab(ujjal r)
 {
    cout<<" hello i am madhab bhatt friend of ujjal sing mahata and i am watching for ujjals home "<<r.tv;
 }

int main()
   {
     ujjal a;
     a.show();
     madhab(a);
     return 0;
   }