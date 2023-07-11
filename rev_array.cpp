#include<stdio.h>
void store(int a[], int b[], int size);
void print(int a[], int size); 
main()
{
	int a[5];
	int a_rev[5];
	store(a, a_rev, 5);
	print(a_rev, 5);
}

void store(int a[], int b[], int size)
{
	int count = size - 1;
	for(int i = 0 ; i < size ; ++i)
	{
		scanf("%d", &a[i]);
		b[count] = a[i];
		count--;
	}
}

void print(int a[], int size)
{
	for(int i = 0 ; i < size ; i++)
	printf("%d ", a[i]);
}
