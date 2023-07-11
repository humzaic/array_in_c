//7.	Write a program to sum all numbers of an array and display the sum :

#include<stdio.h>
main()
{
	int array[5];
	int sum = 0;
//Starter of 1st for loop:	
	for(int i = 0 ;i < 5 ;i++)
	{
		printf("Enter your number : ");
		scanf("%d",&array[i]);
		sum = sum + array[i];
	}
//End of first for loop:
printf("\nThe sum of your Numbers is : %d",sum);//output
}
