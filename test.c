#include<stdio.h>

int main()
{
	long long int i=1;
	while(1)
	{
		if(i%1000000000 == 0)
		{
			printf("--%lld--\n",i);
			if(i%2 !=0)
			{
				break;
			}
		}
		i++;
		
	}
	return 10;
}
