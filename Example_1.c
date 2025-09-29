#include<stdio.h>
int main()
{
	int x,y,z;
	
	printf("Enter first number as x= ");
	scanf("%d",&x);
	
	printf("Enter second number as y= ");
	scanf("%d",&y);
  
    printf("Enter third number as z= ");
	scanf("%d",&z);
	
	if(x>y)
	{
		if(x>z)
		{
			printf("x=%d is a greater number",x);
		}
		else
		{
			printf("z=%d is a greter number",z);
		}
	}
	
	else if (y>z)
	{
			printf("y=%d is a greater number",y);
	}
		else 
		{
			printf("z=%d is a greater number",z);
		} 	


		return 0;
		}
