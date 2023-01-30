/* C Program to find Transpose of the Matrix*/
#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("Enter Row and Column Size\n");
	scanf("%d%d",&row,&col);
	int a[row][col];
	int b[col][row];
	printf("Enter the Matrix Elements Row wise\n");
	for(i=0;i<row;i++)
	     for(j=0;j<col;j++)
		       scanf("%d",&a[i][j]);
		       
		       
	printf("Given Matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		     printf("%d\t",a[i][j]);
		printf("\n");
	}
	
	
	
	//Transpose of the Matrix
	for(i=0;i<col;i++)
	      for(j=0;j<row;j++)
	             b[i][j]=a[j][i];
	             
	             
	printf("Transpose of the given matrix:\n");             
		for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		     printf("%d\t",b[i][j]);
		printf("\n");
	}
	
	
}
