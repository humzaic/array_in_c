#include<stdio.h>
void scort(int a[],int size);
main()
{
	int a[5]={1,2,3,4,5};
	scort(a,5);
	for(int i = 0 ;i < 5 ;i++)
	printf("%d",a[i]);
}
void scort(int a[],int size)
{
	for(int i = 1 ;i < size ;i++ )
	for(int j = 0 ;j < size-1 ;j++)
	{
		if(a[j] < a[j+1])
		{
			int temp = a[j];
			a[j] = a[j +1];
			a[j + 1] = temp;
		}
	}
}
