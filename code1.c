#include<stdio.h>
struct details{	
	int id;//4
	double per;//8
	char name[17];//18
};

struct details s1;
int main()
{
	printf("%d",sizeof(s1));
	return 0;
}

