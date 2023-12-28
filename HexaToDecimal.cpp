#include<stdio.h>
#include<math.h>
int main()
{
	int dec = 0;
	int x,y,z;
	int i = 1;
	int n = 0;
	printf("Enter the following values for Alphbetical representation\n");
	printf(" A \t=\t 10 \n");
	printf(" B \t=\t 11 \n");
	printf(" C \t=\t 12 \n");
	printf(" D \t=\t 13 \n");
	printf(" E \t=\t 14 \n");
	printf(" F \t=\t 15 \n");
	printf("Enter the Hexadecimal Value:");
	scanf("%d",&x);
	if((x % 10) <= 15)
	{
		printf("\nHere are the following Steps : ");
	while(x != 0)
	{
		y = x % 10;
		x = x / 10;
		i = pow(16,n);
		z = dec;
		dec = dec + (y * i);
		printf("\n%d + (%d * %d) = %d",z,y,i,dec);
		n = n + 1;
	}
	printf("\n \nThe Decimal Representation is %d",dec);
	}
	else
	{
		printf("Wrong input !!!");
	}
	return 0;
}
