#include<stdio.h>
void main()
{
  int i,j,row,col,k,count;
  printf("Enter order of the matrix:\n");
  scanf("%d%d",&row,&col);
  int mat[row][col];
  printf("Enter values in the matrix:\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",&mat[i][j]);
    }
  }
  printf("Sparse Matrix is:\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("%d\t",mat[i][j]);
    }
    printf("\n");
  }
  
  k=1,count=0;
  struct sparse
  {
    int row;
    int col;
    int value;
  }s[50];
  
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      if(mat[i][j]!=0)
      {
      	s[k].row=i;
      	s[k].col=j;
      	s[k].value=mat[i][j];
      	k++;
        count++;
      }
    }
  }
  
  s[0].row=row;
  s[0].col=col;
  s[0].value=count;
  printf("Triplet representation is:\n");
  printf("ROW\tCOLUMN\tVALUE\n");
  for(i=0;i<k;i++)
  {
     
     printf("%d\t%d\t%d\n",s[i].row,s[i].col,s[i].value);
  }
}

      
      
      
      
      
      
      
      
      
      
      
      
      
