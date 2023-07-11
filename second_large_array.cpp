#include<stdio.h>
main()
{
	int array[5];
	int second_large=0;
	for(int i = 0 ;i < 5 ;i++)
	{
		printf("Enter any number:");
		scanf("%d",&array[i]);
	}
	int large = array[0];
	for(int j = 1 ;j < 5 ; j++)
	{
		if(array[j] > large)
		{
			second_large = large;
			large = array[j];
		}
		else if(array[j] > second_large)
		{
			second_large = array[j];
		}
		else 
		continue;
	}
	printf("\nSecond Large Number is: %d",second_large);
}
