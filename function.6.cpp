#include<stdio.h>
void swapp(int*,int*);
int main()
{
	int x=10,y=15;
	printf("value before swapp x=%d and y=%d",x,y);
	swapp(&x,&y);
	printf("value after swapp x=%d and y=%d",x,y);
	getch();
	
}
void swap(int a, int b)
{
	int t;
	t=a;
	b=t;
	
	
}