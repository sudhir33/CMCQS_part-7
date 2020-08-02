#include<stdio.h> 

enum year{Jan=1, Feb, Mar, Apr, May, Jun, Jul, 
		Aug, Sep, Oct, Nov, Dec}; 

int main() 
{ 
	int i; 
	for (i=Jan; i<=Dec; i++)//1... 12	 
		printf("%d ", i); 
			
	return 0; 
} 

