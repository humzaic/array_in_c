//5.	Write a program to ask user to enter 5 numbers in a array, and find the index of maximum value in array
#include<stdio.h>
main()
{
	int array[5];
	int index;
//Take numbers for user:
for(int i = 0 ; i < 5 ; i++)
{
	printf("Enter any number:");
	scanf("%d",&array[i]);
}
//End of for 1st loop:

int max = array[0];

//Starer of 2nd for loop:
for(int j = 0 ; j < 5 ; j++)
{
if(array[j] > max)
{
max = array[j];
index = j;		
}
} 
//End of 2nd for loop:
printf("Index of maximum Number is : %d",index);//Output:
}
