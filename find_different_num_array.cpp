//12.	Find the numbers that are different in two arrays 
#include<stdio.h>
void store(int ary1[], int size);
void find_different(int ary1[], int ary2[], int size);
main()
{
	int ary1[5],ary2[5];
	printf("Fill the first array:");
	store(ary1, 5);
	printf("Fill the second array:");
	store(ary2, 5);
	printf("Different: ");
	find_different(ary1, ary2, 5);
	find_different(ary2, ary1, 5);
}
//Take numbers from user:
void store(int a[], int size)
{
	for(int i = 0 ;i < size ; i++)
		scanf("%d",&a[i]);
}
//End of first function body:
//SEcond function body:
void find_different(int a[], int b[], int size)
{
	for(int i = 0 ;i < size ; i++)
	{
		int count = 0;
		for(int j = 0 ;j < 5 ;j++)
		{
    		if(a[i] != b[j])
			count++;
		}
		if(count == size)
		printf("%d ", a[i]);
	}
}//End of Second function body:
