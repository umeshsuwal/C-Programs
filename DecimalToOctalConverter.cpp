#include<stdio.h>
int main()
{
	int oct = 0;
	int rem,x,y;
	int i = 1;
	int step = 1;
	printf("Enter the Decimal Value:");
	scanf("%d",&x);
	while(x != 0)
	{
		rem = x % 8;
		y = x;
		x = x / 8;
		printf("\n %d / 8 = %d \t Rem = %d",y,x,rem);
		oct = oct + (rem * i);
		i = i * 10;
	}
	printf("\n \nThe Octal Representation is %d",oct);
	printf("\n \nNote : In Octal , The Rem is placed from down to up.");
	return 0;
}
