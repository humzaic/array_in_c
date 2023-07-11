#include<stdio.h>
void store(int a[][2],int size);
void print(int a[][2],int size);
void inverse(int a[][2],int c[][2],int size);
main()
{
	int a[2][2],b[2][2],c[2][2];
	printf("Enter 1st Matrix Numbers:\n");
	store(a,2);
	printf("\nEnter 2nd Matrix Numbers:\n");
	store(b,2);
	printf("\n1st Matrix:\n");
	print(a,2);
    printf("\n2nd Matrix:\n");
    print(b,2);
    printf("\nInverse of a matrix is:\n");
    inverse(a,c,2);
    print(c,3);
}
void store(int a[][2],int size)
{
	for(int i = 0 ;i < size ;i++)
	{
		for(int j = 0 ;j < size ;j++)
	scanf("%d",&a[i][j]);
	}
}
void print(int a[][2],int size)
{
	for(int i = 0 ;i < size ;i++ )
	{
		for(int j = 0 ; j < size ;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
void inverse(int a[][2],int c[][2],int size)
{
	for(int i = 0 ;i < size ;i++)
    for(int j = 0 ;j < size ;j++)
    {
    	if(i==j)
    	{
    		
		}
		
		
	}
	
}

