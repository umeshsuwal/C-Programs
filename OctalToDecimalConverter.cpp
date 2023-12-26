#include<stdio.h>
#include<math.h>
int main()
{
	int dec = 0;
	int x,y,z;
	int i = 1;
	int n = 0;
	printf("Enter the Octal Value:");
	scanf("%d",&x);
	if((x % 10) <= 7)
	{
		printf("\nHere are the following Steps : ");
	while(x != 0)
	{
		y = x % 10;
		x = x / 10;
		i = pow(8,n);
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
