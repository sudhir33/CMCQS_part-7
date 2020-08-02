#include<stdio.h>
int main()
{
	int a=10,i=1;
	X:
		printf("%d ",i++);//1 2
		if(a>i)//10>3
		{
			goto X;
		}
	return 0;
}
