#include<stdio.h>
void store(int a[][3],int size);
void print(int a[][3],int size);
void addition(int a[][3],int b[][3],int c[][3],int size);
main()
{
	int a[3][3],b[3][3],c[3][3];
	printf("Enter 1st Matrix Numbers:\n");
	store(a,3);
	printf("\nMatrix 1st:\n");
	print(a,3);
	printf("\nEnter 2nd Matrix Numbers:\n");
	store(b,3);
	printf("\nMatrix 2nd:\n");
	print(b,3);
	printf("\nAddition is:\n");
	addition(a,b,c,3);
	print(c,3);
}
void store(int a[][3],int size)
{
	for(int i = 0 ;i <size ;i++)
	{
		for(int j = 0 ;j < size ;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void print(int a[][3],int size)
{
	for(int i = 0 ;i < size ; i++)
	{
		for(int j = 0 ;j < size ;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
void addition(int a[][3],int b[][3],int c[][3],int size)
{
	for(int i = 0 ; i < size ;i++)
	{
		for(int j = 0 ;j < size ;j++)
		{
			c[i][j] = a[i][j]+b[i][j]; 
		}
	}
}
