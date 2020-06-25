/*
ip::
3
2
7
6
9
5
1
4
3
8

op::
---matrix---
  2  7  6
  9  5  1
  4  3  8

 it is a magic square matrix
*/
#include<stdio.h>
int main()
{
  int n,i,j,a[40][40],sum1=0,sum2=0,sum=0,b[40],k=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
  printf("\n---matrix---\n");
  for(i=0;i<n;i++)
   { for(j=0;j<n;j++)
      printf("%3d",a[i][j]);
      printf("\n");
   }
  for(i=0;i<n;i++)
  {
  for(j=0;j<n;j++)
  { 
   if(i==j)
      sum1+=a[i][j];
     if((i+j)==n-1)
      sum2+=a[i][j];
   sum+=a[i][j];
   b[k]=sum;
  }
   k++;
   sum=0;
  for(j=0;j<n;j++)
   {
   sum+=a[j][i];
   b[k]=sum;
   }
   k++;
   sum=0;
 
  }
 sum=0;
  //printf("%d %d\n",sum1,sum2);
  for(i=1;i<k;i++)
     if(b[0]==b[i])
        sum++;
  // printf("%d\n",sum);
  if((sum==k-1) &&(sum1==sum2))
    printf("\n it is a magic square matrix\n");
  else 
   printf("\nit is not a magic square matrix\n");
}
