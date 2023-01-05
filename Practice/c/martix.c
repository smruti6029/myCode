#include <stdio.h>
int main() {
  int a[10][10], transpose[10][10], r, c,res,k,mul[10][10],j,i;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }

  
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }

  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        mul[i][j]=0;
        for(k=0;k<3;k++)
        {
          mul[i][j]+=a[i][k]*transpose[k][j];
        }

      }
    }
    for (int i = 0; i < c; ++i)
    {
  for (int j = 0; j < r; ++j) {
    printf("%d  ", mul[i][j]);
    if (j == r - 1)
    printf("\n");
  }
    }
      
  return 0;
}