//3.	Write a program to ask user to enter 5 numbers in a array, and find the maximum value in array
#include<stdio.h>
main()
{
	int array[5];
	for(int j=0 ;j<5 ;j++)
	{
	printf("Enter your number:");
	scanf("%d",&array[j]);	
	}
	int max = array[0];
	int min = array[0];
	for(int i=1 ; i<5 ;i++)
	{
		if(array[i] > max)
		max = array[i];
		else if(array[i] < min)
		min=array[i];
		else
		continue;
	}
	printf("Maximum Number is : %d ",max);
	printf("\nMinimum Number is : %d ",min);
}
