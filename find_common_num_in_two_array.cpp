//11.	Find the common numbers in two arrays.
#include<stdio.h>
void store(int ary1[], int ary2[], int size);
void find_common(int ary1[], int ary2[], int size);
main()
//Body of main:
{
	int ary1[5],ary2[5];
	store(ary1, ary2, 5);
	find_common(ary1, ary2, 5);
}//End of main body:

//Take numbers from user:
void store(int ary1[],int ary2[],int size)
{
	printf("Fill the array:");
	for(int i = 0 ;i < size ; i++)
	{
		scanf("%d",&ary1[i]);
	}
	printf("Fill Second Array:");
	for(int j = 0 ; j < size ;j++)
	{
		scanf("%d",&ary2[j]);
	}
}
//End of first function body:
//SEcond function body:
void find_common(int ary1[], int ary2[], int size)
{
	int common;
	printf("Common: ");
	for(int i = 0 ;i < size ; i++)
	{
		for(int j = 0 ;j < 5 ;j++)
		{
		if(ary1[i] == ary2[j])
		{
		common = ary1[i];
		printf("%d ",common);	
		}	
		}
	}
}//End of Second function body:
