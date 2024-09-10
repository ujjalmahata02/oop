//wap to add two number by using dma
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int *pa; *pb; *psum;
    pa=new int;
    pb=new int;
    psum=new int;
    cout<<"enter two intiger"<<endl;
    cin>>*pa>>*pb;
    *psum=*pa+*pb;
    cout<<"sum="<<*psum;
    delete pa;
    delete pb;
    return 0;



}

