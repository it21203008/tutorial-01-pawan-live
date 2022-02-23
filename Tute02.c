#include<stdio.h>
int main()
{
	int x;//distance
	float amount;
	printf("input the distance the vehicle has travelled :");
	scanf("%d",&x);
	
	if(x>=30)
	{
		amount=(30*50)+(x-30)*40;
	}
	else
	{
		amount=x*50;
	}
	
	printf("paid for a rented vehicle :%.2f",amount);
	
	return 0;
}
