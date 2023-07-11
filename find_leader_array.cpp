#include<stdio.h>
void find_leader(int a[], int size);
main()
{
	int a[] = {27,19,23,7,5,6,1};
	printf("Leaders are :");
	find_leader(a, 7);
}
void find_leader(int a[], int size)
{
	
	for(int i = 0 ;i < size ;i++)
	{
		int count = 0;
		for(int j = i+1 ;j < size ;j++)
		 if(a[i] > a[j])
		 count++;
		 if(count == size - (i + 1))
		 printf("%d ", a[i]);
	}
}
