#include<stdio.h>

int main()
{
	int price=0;
	
	printf("Please enter price(yuan):");
	scanf("%d",&price);
	
	int change=100-price;
	
	printf("Change:%dYuan.\n",change);

}