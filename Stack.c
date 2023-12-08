#include<stdio.h>
int top=-1,maxsize,a[50],item,i;
void push();
void pop();
void peek();
void display();
void main()
{
  int choice;
  printf("Enter maximum size of stack:");
  scanf("%d",&maxsize);
  while(choice!=5)
  {
    printf("\nStack operations:1.PUSH\t2.POP\t3.PEEK\t4.DISPLAY\tEnter choice:");
    scanf("%d",&choice);
 
    switch(choice)
    {
     case 1:
     {
       push();
       break;
     }
     case 2:
     {
       pop();
       break;
     }
     case 3:
     {
       peek();
       break;
     }
     case 4:
     {
       display();
       break;
     }
     default:
     {
       printf("Exit");
     }
  }
 }
}

void push()
{
  if(top>=maxsize-1)
  {
    printf("OVERFLOW!");
  }
  else
  {
    top++;
    printf("Enter a value to the stack:");
    scanf("%d",&item);
    a[top]=item;
  }
}
void pop()
{
  if(top==-1)
  {
    printf("UNDERFLOW!");
  }
  else
  {
    item=a[top];
    top--;
  }
}
void peek()
{
  if(top==-1)
  {
    printf("UNDERFLOW!");
  }
  else
  {
    printf("Topmost element is:%d",a[top]);
  }   
}
void display()
{
  if(top==-1)
  {
    printf("UNDERFLOW!");
  }
  else
  {
    printf("Displaying Stack:");
    for(i=0;i<=top;i++)
    {
      printf("%d\t",a[i]);
    }
  }          
}
       
       
       
       
       
       
       
       
