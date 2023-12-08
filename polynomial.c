#include<stdio.h>
void main()
{
  int n,i;
  printf("Enter the number of terms:\n");
  scanf("%d",&n);
  
  struct poly
  {
    int coef;
    int expo;
  }x[30];
  
  printf("Enter coefficients and exponents of each term:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d%d",&x[i].coef,&x[i].expo);
  }
  
  printf("The polynomial is:\n");
  for(i=0;i<n;i++)
  {
    if(i<n-1)
    {
      printf("%dx^%d+",x[i].coef,x[i].expo);
    }
    else
    {
      printf("%dx^%d",x[i].coef,x[i].expo);
    }
  }
}
