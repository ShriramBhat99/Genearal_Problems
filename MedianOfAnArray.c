/* C program to find the median of an array */

#include<stdio.h>
int findMedian(int arr_count, int* arr) {
    int i,j;
    for(i=0;i<arr_count-1;i++)
    {
        int min=i;
        for(j=i+1;j<arr_count;j++)
              if(arr[j]<arr[min])
                     min=j;
        
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

    }
    return arr[(arr_count)/2];

}

int main()
{
	int arr[]= {6,0,4,3,2,1,5},i;
	int ans=findMedian(6,arr);
	for(i=0;i<7;i++)
	    printf("%d\t",arr[i]);
	printf("\n%d",ans);
}
