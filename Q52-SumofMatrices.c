//Sum of two matrices
#include <stdio.h>

int main() {
  int i,j,m,n;
  printf("Enter no. of rows:");
  scanf("%d",&m);
  printf("Enter no. of columns:");
  scanf("%d",&n);
  int a[m][n],b[m][n],c[m][n];
  printf("Enter elements of first matrix row by row:\n");
  for(i=0;i<m;i++)
    { for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
    }
  printf("Enter elements of second matrix row by row:\n");
 for(i=0;i<m;i++)
    {  for(j=0;j<n;j++)
       scanf("%d",&b[i][j]);
    }
  for(i=0;i<m;i++)
    {  for(j=0;j<n;j++){
        c[i][j]=a[i][j]*b[j][i];}
    }

   /* for(i=0;i<m;i++)
    {  for(j=0;j<n;j++){
        d[i][j]=b[j][i];
     }  
    }*/
  printf("Sum of two matrices is: \n");
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        printf("%d ",c[i][j]);
      printf("\n");
    }
  
  return 0;
}