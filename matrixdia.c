/*
case 1:
ip:
4
7
1
3
2
9
0
5
8
3
6
3
11
1
4
1
4
op:
---matrix---
  7  1  3  2
  9  0  5  8
  3  6  3 11
  1  4  1  4

2 7 7 7 7

all the sum of digonal is equal and the sum is 7
case 2:
ip:
5
9
1
11
18
3
6
1
17
7
2
3
4
5
5
1
3
8
3
10
20
2
8
7
1
0
op:
---matrix---
   9   1  11  18   3
   6   1  17   7   2
   3   4   5   5   1
   3   8   3  10  20
   2   8   7   1   0

all the sum of digonal is equal and the sum is 15
*/

#include<stdio.h>
int main()
{
  int n,a[30][30],j,i,sum1=0,sum2=0,sum3=0,sum4=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
  printf("\n---matrix---\n");
   for(i=0;i<n;i++)
   { for(j=0;j<n;j++)
      printf("%4d",a[i][j]);
     printf("\n");
   }
   //sum1=sum2=sum3=sum4=0;
   for(i=0;i<n;i++)
   { for(j=0;j<n;j++)
     {
     if(n%2==0) 
      {if(i==j && i<n/2)
        sum1+=a[i][j];
       else if(i==j && n/2<=j)
          sum2+=a[i][j];
       else if((i+j)==n-1 && i<n/2)
          sum3+=a[i][j];
      else if((i+j)==n-1 && j<=n/2)
        sum4+=a[i][j];
    }
    else
   {
    if(i==j && i<=n/2)
        sum1+=a[i][j];
       else if(i==j && (j>n/2))
          sum2+=a[i][j];
       else if((i+j)==n-1 && i<=n/2)
          sum3+=a[i][j];
      else if((i+j)==n-1 && j<=n/2)
        sum4+=a[i][j];
   }
     }
   }
  if(n%2!=0)
   { sum2=a[n/2][n/2]+sum2;
      sum3+=a[n/2][n/2];
      sum4+=a[n/2][n/2];
   }
    //printf("\n%d %d %d %d %d\n",n/2,sum1,sum2,sum3,sum4);
   if((sum1==sum2)==(sum3==sum4))
      printf("\nall the sum of digonal is equal and the sum is %d\n",sum1);
   else
     printf("\n the all the sum are not equal and the sums are %d,%d,%d,%d\n",sum1,sum2,sum3,sum4);
}
