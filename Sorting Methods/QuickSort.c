/*C Program to implement Quick Sort */

#include<stdio.h>
void quickSort(int[],int,int);
int partition(int[],int,int);
void swap(int[],int,int);
int main()
{
	int arr[100],n,i;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	       scanf("%d",&arr[i]);
	quickSort(arr,0,n-1);
	printf("Elements after sorting:\n");
	for(i=0;i<n;i++)
	        printf("%d\t",arr[i]);
	return 0;
}

void quickSort(int arr[],int lb, int ub)
{
	if(lb<ub)
	{
	int loc=partition(arr,lb,ub);
	quickSort(arr,lb,loc-1);
	quickSort(arr,loc+1,ub);
    }
}

int partition(int arr[],int lb,int ub)
{
	int pvot=arr[lb];
    int start=lb;
    int end=ub;
	while(start<end)
	{
		while(arr[start]<=pvot)
		                start++;
		while(arr[end]>pvot)
		                 end--;
		if(start<end)
		      swap(arr,start,end);
	}
     swap(arr,lb,end);
     return end;
}

void swap(int arr[],int i,int j)
{
	int temp;
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
