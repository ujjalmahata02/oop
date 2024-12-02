#include<iostream>
using namespace std;
class animal
{
 

     public:
     void eat()
     {
        cout<<"jeban eating:";
    

     }
};
class cat:public animal
{
    public:

    void voice()
    {
        
        cout<<"mew..mew..."<<endl;

    }
};
    
class dog:public animal
{

    public:
    void bark()

    {
       
        cout<<"hu......hu.....hu....hu";

    }
};
int main()
{
   cat c;
   c.eat();
   c.voice();
   dog d;
   d.eat();
   d.bark();
    return 0;
}