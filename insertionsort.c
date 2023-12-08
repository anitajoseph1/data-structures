#include<stdio.h>
void main()
{
  int a[50],n,i,j,temp;
  printf("Enter length of array:");
  scanf("%d",&n);
  printf("Enter values in the array:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  i=1;
  while(i<n)
  {
    j=i;
    while(a[j]<a[j-1]&&(j>=0))
    {
      temp=a[j];
      a[j]=a[j-1];
      a[j-1]=temp;
      j--;
    }
    i++;
  }
  printf("Sorted Array is:\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
}

