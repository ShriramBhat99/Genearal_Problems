/* C Program to implement LinerSearch */
#include<stdio.h>
int main()
{
	int size,i,key;
	printf("Enter the number of elements\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the  elements\n");
	for(i=0;i<size;i++)
	          scanf("%d",&arr[i]);
	printf("Enter the key element to search\n");
	scanf("%d",&key);
	
	
	
	for(i=0;i<size;i++)
	         if(arr[i]==key)
	                   break;
	if(i<size)
	      printf("%d is found in %d Position\n",key,i+1);
	else
	      printf("%d is not found ",key);
}
