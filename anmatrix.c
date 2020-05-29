# include <stdio.h>
void main()
{
	int matrix[10][10];
	int size;
	int i,j,count1=1,count2=1,count3=1;
        
	printf("Enter size of the matrix:");
	scanf("%d",&size) ;
	printf("\nEnter the elements of the matrix:\n\n");
	for(i=0;i<size;i++)
  	for(j=0;j<size;j++)
           scanf("%d", &matrix[i][j]);
        for(i=0;i<size;i++)
  	  {for(j=0;j<size;j++)
           printf("%2d", matrix[i][j]);
            printf("\n");}
	for(i=0;i<size;i++)
	{
  		for(j=0;j<size;j++)
  		{
    	if(i==j)
      	{if(matrix[i][j]!= 1)
      	{ 
        	count1=0;
        	
      	}}
    	if(i<j)
      	{if(matrix[i][j] != 0)
      	{ 
        	count2= 0 ;
        	
      	}}
      	if(i>j)
      	{if(matrix[i][j] != 0)
      	{ 
        	count3= 0 ;
      	}}
      	
  	}
}
if(count1== 1)
  printf("\nThe matrix is a unit triangular matrix") ;
else if(count3==1)
  printf("\nThe matrix is a upper triangular matrix") ;
  else if(count2==1)
  printf("\nThe matrix is a lower triangular matrix") ;
  else
  printf("\nThe matrix is a not triangular matrix") ;
 printf("\n");
}
