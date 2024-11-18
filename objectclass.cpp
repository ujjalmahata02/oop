#include<iostream>
using namespace std;
class person
{
    private:
     int run;
     string msg;

 public:
 void play()
 {
    run=50;

    cout<<"today i scored run"<<run<<endl;
 }
 void walk()
 {
    msg="today i walk 3 km";
    cout<<msg<<endl;
 }
};

 int main()
{
 person obj;
 obj.play();
 obj.walk();

return 0;
}