#include<stdio.h>
void scoting(int a[],int size);
main()
{
	int a[5]={5,4,3,2,1};
	scoting(a,5);
	for(int i = 0 ; i < 5 ; i++)
	printf("%d ", a[i]);
}
void scoting(int a[],int size)
{
	for(int i = 1 ;i < size ;i++)
	for(int j = 0 ;j < size-i ;j++)
	{
		if(a[j] > a[j + 1])
		{
			int temp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = temp;
		}
	}
}
