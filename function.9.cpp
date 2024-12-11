#include<stdio.h>
#include<conio.h>
int fact(int);
 int main()
{
	int n,f;
	printf("enter a number:");
	scanf("%d",&n);
	f=fact(n);
	printf("\n factriol is =%d",f);
	getch();
	
}
int fact(int k)
{
	if(k==1)

	return(1);
	else
	return(k*fact(k-1));
	
	
}