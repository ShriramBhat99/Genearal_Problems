/* C Program to implement Binary Search*/

#include<stdio.h>
int main()
{
	int size,i,key,pos;
	printf("Enter the number of elements\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the  elements\n");
	for(i=0;i<size;i++)
	          scanf("%d",&arr[i]);
	printf("Enter the key element to search\n");
	scanf("%d",&key);
	
	pos=BinarySearch(arr,0,size-1,key);
	if(pos==-1)
	     printf("%d is not found",key);
	else
	     printf("%d is found at %d position",key,pos);
	return 0;
	
}

int BinarySearch(int arr[],int lower,int upper,int key)
{
	int mid;
	while(lower<=upper)
	{
		mid=lower+(upper-lower)/2;
		if(arr[mid]<key)
		        lower=mid+1;
		else if(arr[mid]>key)
		        upper=mid-1;
		else 
		        return mid+1;
	}
	return -1;
}


