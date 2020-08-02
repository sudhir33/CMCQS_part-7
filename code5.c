#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct details{
	int id;
	float per;
	char name[14];	
};
typedef struct details det;
det *s1;
int main()
{
	s1=(det *)malloc(sizeof(det));
	s1->id=12;
	s1->per=70.3;
	strcpy(s1->name,"sudhir");
	printf("%d  %.1f  %s",s1->id,s1->per,s1->name);
	return 0;
}
