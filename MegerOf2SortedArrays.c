/* C program to merge two sorted Arrays to make new sorted array */ 

#include<stdio.h>
void merge(int[],int[],int[],int,int);
int main()
{
	int size1,size2,i;
	printf("Enter the number of elements in Array1:\n");
	scanf("%d",&size1);
	printf("Enter the  number of elements in Array2:\n");
	scanf("%d",&size2);
	int arr1[size1],arr2[size2],arr3[size1+size2];
	printf("Enter the elements of Array1 in the sorted form\n");
	for(i=0;i<size1;i++)
	    scanf("%d",&arr1[i]);
	printf("Enter the elements of Array2 in the sorted form\n");
	for(i=0;i<size2;i++)
	     scanf("%d",&arr2[i]);
	
	merge(arr1,arr2,arr3,size1,size2);
	
	printf("After merging 2 Arrays:\n");
	for(i=0;i<size1+size2;i++)
	          printf("%d\t",arr3[i]);
    return 0;
}

void merge(int arr1[],int arr2[],int arr3[],int size1,int size2)
{
	int i=0,j=0,k=0;
	while(i<size1 && j<size2)
	{
		if(arr1[i]<arr2[j])
		     arr3[k++]=arr1[i++];
		else
		    arr3[k++]=arr2[j++];
	}
	
	
	while(i<size1)
	      arr3[k++]=arr1[i++];
    while(j<size2)
           arr3[k++]=arr2[j++];
	         
}
