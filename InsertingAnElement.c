/* C program to insert an element in a proper position in a sorted array */

#include<stdio.h>
# define size 100

int main()
{
	int arr[size],i,n,ele;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the Array elements in sorted order\n");
	for(i=0;i<n;i++)
	      scanf("%d",&arr[i]);
	printf("Enter an element to insert\n");
	scanf("%d",&ele);
	for(i=n-1;arr[i]>ele && i>=0;i--)
	               arr[i+1]=arr[i];
	arr[i+1]=ele;
	printf("Arrray after inserting %d is:\n",ele);
	for(i=0;i<=n;i++)
	       printf("%d\t",arr[i]);
	return 0;
	
}
