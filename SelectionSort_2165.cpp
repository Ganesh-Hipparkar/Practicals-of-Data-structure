
#include<stdio.h>
int main()
{
	int no,arr[20],i,j,temp;
	printf("\nEnter size of array: ");
	scanf("%d",&no);
	printf("\nEnter %d elements into array : ",no);
	for(i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<no-1;i++)
	{
		int min=i;
		for(j=i+1;j<no;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
	printf("\nSorted Array Elements : ");
	for(j=0;j<no;j++)
	{
		printf("%d\t",arr[j]);
	}
}
