#include<stdio.h>
int main()
{
  int n,i,j,min,max,count,a[50][50];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
  printf("\n***the matrix***\n");
    for(i=0;i<n;i++)
   { for(j=0;j<n;j++)
      {printf("%3d",a[i][j]);
      }
     printf("\n");
   }
 count=(n+1)/2;
 min=0;
 max=n-1;
 for (i=0;i<count;i++)
 {
  for(j=min;j<max+1;j++)
  printf("%3d",a[min][j]);
 for (j=min+1;j<max+1;j++)
  printf("%3d",a[j][max]);
 for (j=max-1 ;j>min-1;j--)
  printf("%3d",a[max][j]);
 for (j=max-1;j>min;j--)
  printf("%3d",a[j][min]);
 min=min+1;
 max=max-1;
 }
 printf("\n");
  return 0;
}
