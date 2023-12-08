#include<stdio.h>
void main()
{
  int a[20],n,i,j,min,temp,count=0;
  count++;
  printf("Enter the value of n:");
  scanf("%d",&n);
  count++;
  printf("Enter values in the array:");
  for(i=0;i<n;i++)
  {
    count++;
    scanf("%d",&a[i]);
    count++;
  }
  count++;
  //selection sort
  for(i=0;i<n-1;i++)
  {
    count++;
    min=i;
    count++;
    for(j=i+1;j<n;j++)
    {
      count++;
      if(a[j]<a[min])
      {
        min=j;
        count++;
      }
      count++;
    }
    count++;
    temp=a[min];
    a[min]=a[i];
    a[i]=temp;
    count+=3;
  }
  count++;
  printf("Sorted Array is:");
  for(i=0;i<n;i++)
  {
    count++;
    printf("%d\t",a[i]);
    count++;
  }
  count+=3;
  printf("\nTime Complexity:%d",count);
  printf("\nSpace Complexity:%d",24+(4*n));
} 
  
  
  
