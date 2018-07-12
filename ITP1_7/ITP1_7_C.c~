#include <stdio.h>

int main(){
  int A[101][101],r,c,i,j,sum,total=0;

  scanf ("%d%d",&r,&c);
  
  for (i=0;i<r;i++)
    for (j=0;j<c;j++)
      scanf ("%d",&A[i][j]);

  for (j=0;j<c;j++){
    sum = 0;
      for (i=0;i<r;i++){
	sum += A[i][j];
	total += A[i][j];
    }
      A[i][j] = sum;
  }

  for (i=0;i<r;i++){
    sum = 0;
    for (j=0;j<c;j++){
      sum += A[i][j];
    }
    A[i][j] = sum;
  }

  A[r][c] = total;
  for (i=0;i<=r;i++){
    for (j=0;j<c;j++){
      printf ("%d ",A[i][j]);
    }
    printf ("%d\n",A[i][j]);
  }
  return 0;
}
