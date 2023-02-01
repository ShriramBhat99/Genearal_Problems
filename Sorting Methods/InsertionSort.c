/* C Program to implement Insertion Sort*/

#include<stdio.h>
void insertionSort(int[],int);
int main()
{
	int size,i;
	printf("Enter the number of elements\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the elements\n");
	for(i=0;i<size;i++)
	          scanf("%d",&arr[i]);
	insertionSort(arr,size);
	printf("Elements after sorting:\n");
	for(i=0;i<size;i++)
	           printf("%d\t",arr[i]);
    return 0;
}


void insertionSort(int arr[],int size)
{
	int i,j,temp;
	for(i=1;i<size;i++)
	{
		j=i-1;
		temp=arr[i];
		while(j>=0 && temp<arr[j])
		{
		      arr[j+1]=arr[j];
		      j--;
	    }
	    arr[j+1]=temp;
	}
	
}
