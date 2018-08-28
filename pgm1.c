
#include <stdlib.h>
#include<stdio.h>


int main()
{
    char *x=NULL;
    if(x == NULL)
    {
        printf("X is NULL"); /* replace with cout and include 
                                iostream for C++ */
    }
    x =(char *) malloc(10); 
	printf("Hii");    
    
    x[9] = 'a';
	printf("Hoooo");
    return 0;
}
