#include<stdio.h>
main()
{
	int a[5] = {5,4,3,2,1};
	int temp;
	for(int i = 0 ;i < 5 ;i++)
	{
		for(int j = i+1 ;j < 5 ;j++)
		{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=a[i];
		}	
		}
		printf("%d",a[j]);
	}
}
