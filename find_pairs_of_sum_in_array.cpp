#include<stdio.h>
void find_pairs(int a[], int num, int size);
main()
{
	int num;
	int a[]={1,3,5,4,7,4};
	printf("Enter your number:");
	scanf("%d",&num);
	int size = 6;
	printf("\nPairs are:");
	find_pairs(a,num,6);
}
void find_pairs(int a[], int num, int size)
{
	for(int i = 0 ;i < size ;i++)
	{
		for(int j = i+1 ;j < size ;j++)
		{
			if(a[i]+a[j]==num)
			{
				printf("\n%d:%d",a[i],a[j]);
			}
			else
			continue;
		}
	}
}
