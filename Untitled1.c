#include<stdio.h>
#include<stdlib.h>
struct std{
	int rollno;
	float per;
	char name[100];
};
struct std *s1;
int main()
{
	s1=(struct std *)malloc(sizeof(struct std));
	scanf("%d%f",&s1->rollno,&s1->per);
	scanf("%s",&s1->name);
	
	printf("%d %f %s",s1->rollno,s1->per,s1->name);
	return 0;
}

