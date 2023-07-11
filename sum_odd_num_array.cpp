//8.	Write a program to find sum of all odd numbers in the array.

#include<stdio.h>
main()
{
	int array[10];
	int sum = 0;
//Starter of for loop:	
	for(int i = 0 ;i < 10 ; i++)
	{
		printf("Enter your numbers : ");
		scanf("%d",&array[i]);
		if(array[i]%2 !=0)
		{
			sum = sum + array[i];
		}
	}
//End of first for loop:
printf("Sum of your Odd Numbers is : %d",sum);//Output	
}
