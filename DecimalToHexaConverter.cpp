#include<stdio.h>
int main()
{
	int hex = 0;
	int rem,x,y;
	char rep;
	int i = 1;
	printf("Enter the Decimal Value:");
	scanf("%d",&x);
	while(x != 0)
	{
		rem = x % 16;
		if(rem >= 10)
		{
			if(rem == 10)
		{
			rep = 'A';
		}
		else if(rem == 11)
		{
			rep = 'B';
		}
		else if(rem == 12)
		{
			rep = 'C';
		}
		else if(rem == 13)
		{
			rep = 'D';
		}
		else if(rem == 14)
		{
			rep = 'E';
		}
		else
		{
			rep = 'F';	
		}
		}
		else
		{
			rep = rem;
		}
		y = x;
		x = x / 16;
		printf("\n %d / 16 = %d \t Rem = %c",y,x,rep);
		hex = hex + (rem * i);
		i = i * 10;
	}
	printf("\n \nThe Hexadecimal Representation is %d",hex);
	printf("\n \nSorry for the error on the above representation.It shows the Character also in decimal.");
	printf("\n \nNote : In Hexadecimal , The Rem is placed from down to up.");
	return 0;
}
