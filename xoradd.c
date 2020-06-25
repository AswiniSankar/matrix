/*
ip::
3
1
0
4
3
7
2
5
9
10
op::
---matrix---
    1    0    4
    3    7    2
    5    9   10

  7  5 14  6 12  6 12  6

 the max of xor in this matrix is 14
*/
#include<stdio.h>
int main()
{
  int a[50][50],b[40],i,j,n,sum=0,sum1=0,sum2=0,k=0,max;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
  printf("\n---matrix---\n");
  for(i=0;i<n;i++)
  {for(j=0;j<n;j++)
      printf("%5d",a[i][j]);
    printf("\n");
  }
   for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
      {if(i==j)
         sum1^=a[i][j];
       if((i+j)==n-1)
         sum2^=a[i][j];
      }
     for(j=0;j<n;j++)
      sum^=a[j][i];
      b[k]=sum;
         k++;
     sum=0;
      for(j=0;j<n;j++)
        sum^=a[i][j];
        b[k]=sum;
         k++;
      sum=0;
    }
    b[k]=sum1;
    k++;
    b[k]=sum2;
    for(i=0;i<=k;i++)
       printf("%3d",b[i]);
   printf("\n");
   max=b[0];
   for(i=1;i<=k;i++)
      if(max<b[i])
         max=b[i];
   printf("\n the max of xor in this matrix is %d",max);
  printf("\n");
  return 0;
}
