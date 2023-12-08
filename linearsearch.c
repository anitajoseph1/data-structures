#include<stdio.h>
void main()
{
  int a[20],i,x,n,count=0,flag=0;
  count+=2;
  printf("Enter value of n:");
  scanf("%d",&n);
  count++;
  printf("Enter values in array:");
  for(i=0;i<n;i++)
  {
    count++;
    scanf("%d",&a[i]);
    count++;
  }
  printf("Enter a value to search in the array:");
  scanf("%d",&x);
  count++;
  for(i=0;i<n;i++)
  {
    count++;
    if(x==a[i])
    {
      flag=1;
      count++;
      printf("Value found at index %d!",i);
      count++;
    }
  }
  if(flag==0)
  {
    printf("%d not found in array!",x);
    count++;
  }
  count+=2;
  printf("\nTime Complexity:\t%d",count);
  printf("\nSpace Complexity:\t%d",(20+(4*n)));
}

