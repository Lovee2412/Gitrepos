/*
* This program count the no.of lines in input file
* Author: LAvanya Balla
* created: 20/07/2018 
*/

#include <stdio.h>

int main()
{
	char c[1000];
    	FILE *fptr;

    if ((fptr = fopen("input.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);         
    }

    // reads text until newline 
    fscanf(fptr,"%[^\n]", c);

    printf("Data from the file:\n%s", c);
    fclose(fptr);
	return 0;
}
