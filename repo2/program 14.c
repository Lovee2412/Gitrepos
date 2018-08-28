/*
* This program is to caculate electricity bill amount 
* Author :- Lavanya Balla
* created :- 119/07/2018
*/
//Required Header Files
#include<stdio.h>

int main()
{
	int consumerId,unit;
	double amount,surcharge,netAmount,rate;
	char name[30]	;
	printf("Enter a Consumer ID:")
	Scanf("%d", &consumerId);
	printf("Enter  a name:");
	scanf("%s",name);
	printf("Enter  a consumed unit:");
	scanf("%d",&unit);
	swtch(unit)
	{
		case 1 ... 199: amount=unit*1.20;
				surcharge=0;rate=1.20;
				netAmount=amount;
				break;
		case 200 ... 399: amount=unit*1.50;
				surcharge=0;rate=1.50;
				netAmount=amount;
				break;
		case 400 ... 599:amount=unit*1.80; rate=1.80;
				surcharge=amount*(15/100);
				netAmount=amount+surcharge;
				break;
		case 600 ... 1000: amount=unit*2.00;rate=2.00;
				   surcharge=amount*(15/100);
				   netAmount=amount+surcharge;
				   break;
		
	}
	printf("\nConsumer ID==%d",consumerID);
	printf("\nconsumer Name==%s",name);
	printf("\n Consumed Units==%d"unit);
	printf("\n Amount @ %lf per unit ::%lf",lf,amount)
	printf("\n Surchage Amount:%lf",surcharge);
	printf("\n Net amount paid by consumer: %lf",netAmount);
	return 0;
}
