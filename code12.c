#include<stdio.h>
enum hello
{
    a='a',b,c
};
int main()
{
    enum hello m;
    printf("%d",sizeof(m));//
}
