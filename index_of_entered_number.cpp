/*6.	Write a program to assign 10 random numbers in an array and then ask user 
to enter a number to find whether that number exists in the array or not using 
functions. (search number in the array). Display index of the number of found else display -1.
a.	Arr = [2,7,9,3,6]: Input = 7. Answer: 1*/

#include<stdio.h>
main()
{
	int array[5] = {2,7,9,3,6};
	int index,num,count=0;
	//Stater of 1st for loop:
	printf("Enter your number:");
	scanf("%d",&num);
	printf("\nYou Entered number is : %d",num);//Output:
	for(int i = 0 ; i < 5 ;i++ )
	{
		if(array[i] == num)
		{
		index = i;
		count++;	
		}	
		else 
		continue;
	}
//End of 1st for loop:
if(count == 1)
printf("\nAnd the Index of you number is : %d ",index);//Output:
else
printf("\nYour number is not in array 'Try Again' ");	
}
