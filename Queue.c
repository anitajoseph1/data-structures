#include<stdio.h>
int front=0,rear=-1,maxsize,a[50],item,i;
void enqueue();
void dequeue();
void peek();
void display();
void main()
{
  int choice;
  printf("Enter maximum size of queue:");
  scanf("%d",&maxsize);
  while(choice!=5)
  {
    printf("\nQueue Operations:1.ENQUEUE 2.DEQUEUE 3.PEEK 4.DISPLAY Enter choice:");
    scanf("%d",&choice);
 
    switch(choice)
    {
     case 1:
     {
       enqueue();
       break;
     }
     case 2:
     {
       dequeue();
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
       printf("\nExit");
     }
  }
 }
}
void enqueue()
{
  if(rear==maxsize-1)
  {
    printf("OVERFLOW!");
  }
  else
  {
    rear++;
    printf("Enter a value to the queue:");
    scanf("%d",&item);
    a[rear]=item;
  }
}
void dequeue()
{
  if(rear<front)
  {
    printf("UNDERFLOW!");
  }
  else
  {
    item=a[front];
    front++;
  }
}
void peek()
{
  if(rear<front)
  {
    printf("UNDERFLOW!");
  }
  else
  {
    printf("Element at the front is:%d",a[front]);
  }   
}
void display()
{
  if(rear==-1)
  {
    printf("UNDERFLOW!");
  }
  else
  {
    printf("\nDisplaying Queue:");
    for(i=front;i<=rear;i++)
    {
      printf("%d\t",a[i]);
    }
  }          
}
