//find second last minimum
#include<stdio.h>
main()

{
int array[5];
//Take numbers from user:
for(int i = 0 ; i < 5 ; i++)
{
	printf("Enter any number:");
	scanf("%d",&array[i]);
}//End of loop where we get numbers from user:
	
//Deceleration:
int minimum = array[0];
int second_minimum = array[1];

//Loop of Operation to find second minimum:
for(int j = 0 ; j < 5 ;j++)
{
	if( array[j] < minimum)
	{
	second_minimum=minimum;
	minimum=array[j];	
	}
	else if( array[j] < second_minimum )
	{
		second_minimum=array[j];
	}
	continue;	
}//End of operation loop:

printf("Second Minimum is : %d",second_minimum);
//Output:
}
