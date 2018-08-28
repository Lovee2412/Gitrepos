/*
* this C Program to Capitalize First Letter of every Word in a File
* author lavanya balla
* careted 20/07/2018
 */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

//int to_initcap_file(FILE *); 
int main(int argc, char * argv[])
{

    FILE *fp1;
    char fp[10];
    int p;
    fp1 = fopen("input.txt", "r+");
    if (fp1 == NULL)
    {
        printf("cannot open the file ");
        exit(0);
    }
    char c;
    c = fgetc(fp);
    if (c >= 'a' && c <= 'z')
    {
        fseek(fp, -1L, 1);
        fputc(c - 32, fp);
    }
    while(c != EOF)    
    {
        if (c == ' ' || c == '\n')
        {
            c = fgetc(fp);
            if (c >= 'a' && c <= 'z')
            {
                fseek(fp, -1L, 1);
                fputc(c - 32, fp);
            }
        }
        else
        {

            c = fgetc(fp);

        }
    }
    fclose(fp1);
	return 0;
}

 

/* capitalizes first letter of every word 

int to_initcap_file(FILE *fp)

{

    char c;
    c = fgetc(fp);

    if (c >= 'a' && c <= 'z')

    {

        fseek(fp, -1L, 1);

        fputc(c - 32, fp);

    }

    while(c != EOF)    

    {

        if (c == ' ' || c == '\n')

        {

            c = fgetc(fp);

            if (c >= 'a' && c <= 'z')

            {

                fseek(fp, -1L, 1);

                fputc(c - 32, fp);

            }

        }

        else

        {

            c = fgetc(fp);

        }

    }

    return 1;

}*/
