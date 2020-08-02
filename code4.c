#include<stdio.h>
#include<string.h>
union details{
	int id;
	float per;
	char name[14];	
};
union details s1;
int main()
{
	s1.per=70.3;
	strcpy(s1.name,"sudhir");
	s1.id=12;
	printf("%d  %.1f  %s",s1.id,s1.per,s1.name);
	return 0;
}
