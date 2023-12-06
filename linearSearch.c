#include<stdio.h>

int main()
{
	int arr[10],i,flag=0,key;
	printf("Enter 10 elements in array :");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter Key element to search :");
	scanf("%d",&key);
	for(i=0;i<10;i++)
	{
		if(key==arr[i])
		{
		flag=1;
		break;	
		}
	}
	if(flag==1)
	{
		printf("Search Successful");
	}
	else
	{
		printf("Search unsuccessful");
	}
	return 0;
}
