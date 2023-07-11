#include<stdio.h>

void store(int a[][3])
{
	for(int i = 0 ; i < 3 ; i++)
	for(int j = 0 ; j < 3 ; j++)
	    scanf("%d", &a[i][j]);
}

void multiply(int a[][3], int b[][3], int r[][3])
{
	for(int i = 0 ; i < 3 ; i++)
	{
		for(int j = 0 ; j < 3 ; j++)
		{
			r[i][j] = 0;
			for(int k = 0 ; k < 3 ; k++)
			r[i][j] += a[i][k]*b[k][j];
		}
	}
}

void print(int a[][3])
{
	for(int i = 0 ; i < 3 ; i++)
	{
		for(int j = 0 ; j < 3 ; j++)
        	printf("%d ", a[i][j]);
        printf("\n");
	}
}

main()
{
	int matrix1[3][3];
	printf("Fill the 1st matrix:\n");
	store(matrix1);
	print(matrix1);
	int matrix2[3][3];
	printf("Fill the 2st matrix:\n");
	store(matrix2);
	print(matrix1);
	int result[3][3];
	multiply(matrix1, matrix2, result);
	printf("\nResult: \n");
	print(result);
}
