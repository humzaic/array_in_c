#include<stdio.h>
void store(int a[][3],int size);
main()
{
	int a[3][3];
	store(a,3);
}
void store(int a[][3],int size)
{
	for(int i = 0 ;i < size ;i++)
	for(int j = 0 ;j < size ;j++)
	scanf("%d",&a[i][j]);
}
