#include<stdio.h>
void main()
{
  int a[20],n,i,j,temp,x,left,right,middle;
  printf("Enter value of n:");
  scanf("%d",&n);
  printf("Enter values in the array:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
      }
    }
  }
  printf("Sorted Array is:");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
  printf("Enter a value to search:");
  scanf("%d",&x);
  left=0;
  right=n-1;
  
  while(left<=right)
  {
    mid=(left+right)/2;
    if(x==a[mid])
    {
      printf("Value found at index %d!");
      break;
    }
    else if(x>a[mid])
    {
      
  
  
 
  

        
        
