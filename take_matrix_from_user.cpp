#include<stdio.h>
void take_num(int a[],int size);
void store(int a[][3], int size);
main()
{
	int a[9];
	printf("Enter Matrix Numbers:");
	take_num(a, 9);
	store(a, 9);
}
void take_num(int a[], int size)
{
  for(int i = 0 ; i < size ; i++)
  {
  	scanf("%d",&a[i]);
	  }	
}


