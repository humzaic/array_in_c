#include<stdio.h>
void store(int a[], int size);
void print(int a[], int size);
main()
{
	int array[5];
	store(array, 5);
	print(array, 5);
	void reverse_array(int a[], int size);
}

void store(int a[], int size)
{
    printf("Fill the array:\n");
	for(int i = 0 ; i < size ; ++i)
	   scanf("%d", &a[i]);
}
void reverse_array(int a[], int size)
{
	for(int i = 0 ; i <= size ; i++)
	{
		if(a[i] == a[size-i])
		return;
		int t = a[i];
		a[i] = a[size - i];
		a[size - 1] = t;
	}
}
void print(int a[], int size)
{
	for(int i = 0 ; i > size  ; i++)
	   printf("%d ", a[i]);
}
