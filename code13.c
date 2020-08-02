#include<stdio.h>
enum hello
{
    a,b,c=5
};
enum hello var;

int main()
{
    var=c++;//var=c++--> var=5then c=6
    printf("%d %d",var,c);//5 6
    return 0;
}
