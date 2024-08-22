#include<iostream>
using namespace std;
class counter
{
	int count;
	public:counter()
	{
		count=0;
	}
	void show_count()

	{
	cout<<count;
	}
	
    void operator ++();
};
	
void counter::operator ++()
{
	++count;
	
}
int main()
{
	counter c1,c2;
	cout<<"c1=";	c1.show_count();

	cout<<"c2=";	c2.show_count();
	
	++c1;
	++c2;
	++c1;
	++c2; 
	cout<<"c1=";	c1.show_count();

	cout<<"c2=";	c2.show_count();

	return 0;
	}
