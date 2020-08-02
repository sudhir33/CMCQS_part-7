#include<stdio.h>
union details{	
	int id;
	double per;
	char name[10];	
};
//1111
//1111
//1111
//1100
union details s1;
int main()
{
	printf("%d",sizeof(s1));
	return 0;
}
