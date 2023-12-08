#include<stdio.h>
void main()
{
  int a[20],n,i,j,temp,count=0;
  count++;
  printf("Enter value of n:");
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
  //bubble sort
  for(i=0;i<n;i++)
  {
    count++;
    for(j=i+1;j<n;j++)
    {
      count++;
      if(a[i]>a[j])
      {
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
        count+=3;
      }
      count++;
    }
    count++;
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
  printf("\nSpace Complexity:%d",20+(4*n));
}

