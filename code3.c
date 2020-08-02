#include<stdio.h>
struct details{	
	int id;
	float per;
	char name[14];	
};
struct details s1;
int main()
{
	s1.id=12;
	s1.per=70.3;
	s1.name="sudhir";
	printf("%d  %.1f  %s",s1.id,s1.per,s1.name);
	return 0;
}
