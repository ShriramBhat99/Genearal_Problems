/*C Program to implement Bubble Sort */

#include<stdio.h>
void bubbleSort(int[],int);
void swap(int[],int,int);
int main()
{
	int size,i;
	printf("Enter the number of elements\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the elements\n");
	for(i=0;i<size;i++)
	     scanf("%d",&arr[i]);
	bubbleSort(arr,size);
	
	printf("Elements after Sorting:\n");
	for(i=0;i<size;i++)
	       printf("%d\t",arr[i]);
	
	return 0;
}

void bubbleSort(int arr[],int size)
{
	int i,j,flag;
	for(i=0;i<size-1;i++)
	{
		flag=0;
		for(j=0;j<size-1-i;j++)
		           if(arr[j]>arr[j+1])
		           {
		                swap(arr,j,j+1);
		                flag=1;
		           }
		if(flag==0)
	    break;
	}

}


void swap(int arr[],int i,int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
