#include<stdio.h>
int max(x,y)
int x,y;
{
	return (x>y?x:y);

}

int main()
{
	int x,y;	
	printf("%d",max(10,20));


}