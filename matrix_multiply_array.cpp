#include<stdio.h>
void store(int a[][3], int size);
void print(int a[][3], int size);
void multiply(int a[][3], int[][3], int r[][3], int size);
main()
{
	int a[3][3],b[3][3],r[3][3];
	printf("Enter 1st Matrix Numbers:\n");
	store(a,3);
	printf("\nFirst Matrix Is:\n");
	print(a,3);
	printf("\nEnter 2nd Matrix Numbers:\n");
	store(b,3);
	printf("\nSecond Matrix Is:\n");
	print(b,3);
	printf("\nMultiplication of Two Matrixs is:\n");
	multiply(a,b,r,3);
	print(r,3);
}
void store(int a[][3],int size)
{
	for(int i = 0 ;i < size ;i++)
	for(int j = 0 ;j < size ;j++)
	scanf("%d",&a[i][j]);
}
void print(int a[][3],int size)
{
	for(int i = 0 ;i < size ;i++)
	{
		
	     for(int j = 0 ;j < size ;j++)
		 {
	     printf("%d ",a[i][j]);	
	     }
	     printf("\n");
	}
}
void multiply(int a[][3],int b[][3],int r[][3], int size)
{
	for(int i = 0 ; i < size ;i++)
	{
		for(int j = 0 ;j < size ;j++)
		{
			r[i][j] = 0;
		for(int k = 0 ;k < size ;k++)
		{
	     r[i][j] = r[i][j]+a[i][k]*b[k][j];	
			}	
		}
	}
}
