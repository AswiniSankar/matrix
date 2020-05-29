#include<stdio.h>
#define size 100
int main()
{
 int r,c,a[size][size];
   int i,j,flag1=1,flag2=1,flag3=1,flag4=0;
 printf("enter the row and column limit\n");
 scanf("%d%d",&r,&c);
  printf("enter the elements for matrix\n");
  for(i=0;i<r;i++)
   for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);
  printf("\n\n");
   for(i=0;i<r;i++)
   { for(j=0;j<c;j++)
    printf("%3d",a[i][j]);
    printf("\n");
   }
 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
     if(i<j)
      {if(a[i][j]!=0)
       flag1=0;
      }
     if(i>j)
      { if(a[i][j]!=0)
         flag2=0;
      }
      if(i==j)
      {if(a[i][j]!=1)
         flag3=0;
         if(a[i][j]==0)
          flag4=1;
      }
   }
 }
 
 if(flag3==1)
   printf("the given matrix is a unit matrix\n");
 else if(flag4==1 && flag1==1 && flag2==1)
   printf("the given matrix is a null matrix\n");
 else if(flag1==1 && flag2==1)
  printf("the given matrix is a both upper an lower triangular matrix\n");
 else if(flag1==1)
   printf("it is a lower triangular matrix\n");
 else if(flag2==1)
  printf("it is upper triangular matrix\n");
 else
  printf("the given matrix is not a triangular matrix\n");
 printf("\n");
 return 0;
}

