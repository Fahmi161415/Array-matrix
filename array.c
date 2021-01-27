#include<stdio.h>
void main()
{
	int a[3][3], i, j, sum=0;
	int *p;
	printf("Enter elements of 2D array:");
    	for(i=0;i<3;i++)
     	{
		  for(j=0;j<3;j++)
		 {
			scanf("%d",&a[i][j]);
	   	 }
     	}
   p= &a[0][0];
   printf("Elements of 2D array are:");
   printf("\n");
   for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",*(p+i*3+j));
		}
		printf("\n");
	}
   for(i=0;i<3;i++)
     {
		for(j=0;j<3;j++)
		 {
		   if(i==j)
		   { 
		     sum = sum + *(p+i*+3+j);
			} 
	   	 }
   	}
   	printf("Sum of daigonal elements are: %d", sum);
}
