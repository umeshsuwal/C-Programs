#include<stdio.h>
int main()
{
	int bin = 0;
	int rem,x,y;
	int i = 1;
	int step = 1;
	printf("Enter the Decimal Value:");
	scanf("%d",&x);
	while(x != 0)
	{
		rem = x % 2;
		y = x;
		x = x / 2;
		printf("\n %d / 2 = %d \t Rem = %d",y,x,rem);
		bin = bin + (rem * i);
		i = i * 10;
	}
	printf("\n \nThe binary Representation is %d",bin);
	printf("\n \nNote : In Binary , The Rem is placed from down to up.");
	return 0;
}
