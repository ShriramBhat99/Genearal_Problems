/* C Program to implement Selection Sort */

#include<stdio.h>
void selectionSort(int[],int);
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
	       
	selectionSort(arr,size);
	
	printf("Elements after sorting:\n");
	for(i=0;i<size;i++)
	      printf("%d\t",arr[i]);
	return 0;
	
}


void selectionSort(int arr[],int size)
{
	int i,j,min;
	for(i=0;i<size;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
		          if(arr[j]<arr[min])
		                    min=j;
		swap(arr,i,min);
		        
	}
}

void swap(int arr[],int i,int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}


