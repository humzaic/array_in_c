//9.	Find sum of all numbers on even indexes of the array. 
#include<stdio.h>
main()
{
	int array[10];
	int sum = 0;
//Starter of 1st for loop:
for(int i = 0 ; i < 10 ;i++)
{
	printf("Enter Your number :");
	scanf("%d",&array[i]);
	if(i % 2 == 0 && array[i] % 2 == 0)
		sum = sum + array[i];
}
//End of 1st for loop:
printf("\nSum of all even numbers on even idexes is : %d ",sum);
}
