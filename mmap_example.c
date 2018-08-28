#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <string.h>

int main()
{
	int x=100;
	int y=100;	
    
	printf("%d",x);
	printf("%d",y);
    
	
        
    
    x=200;
	printf("%d",x);
 /*   const char *filepath = "mmapped.bin";

    int fd = open(filepath, O_RDWR | O_CREAT | O_TRUNC, (mode_t)0600);
    
    if (fd == -1)
    {
        perror("Error opening file for writing");
        
    }

    

    //size_t textsize = strlen(text) + 1; // + \0 null character
    
    lseek(fd, textsize-1, SEEK_SET);
   
    
   
    if (write(fd, "", 1) == -1)
    {
        close(fd);
        perror("Error writing last byte of the file");
       
    }
    

   
    char *map = mmap(0, textsize, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if (map == MAP_FAILED)
    {
        close(fd);
        perror("Error mmapping the file");
        
    }
    
    for (size_t i = 0; i < textsize; i++)
    {
        printf("Writing character %c at %zu\n", text[i], i);
        map[i] = text[i];
    }
	
    close(fd);
    
    if (msync(map, textsize, MS_SYNC) == -1)
    {
        perror("Could not sync the file to disk");
    }
    
   
    if (munmap(map, textsize) == -1)
    {
        close(fd);
        perror("Error un-mmapping the file");
        
    }


    close(fd);
    */
    return 0;
}
