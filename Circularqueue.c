#include<stdio.h>
int front=-1,rear=-1,maxsize,a[50],item,i;
void enqueue();
void dequeue();
void display();
void main()
{
  int choice;
  printf("Enter maximum size of queue:");
  scanf("%d",&maxsize);
  while(choice!=4)
  {
    printf("Queue Operations:1.ENQUEUE 2.DEQUEUE 3.DISPLAY Enter choice:");
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
  if(front==-1&&rear==-1)
  {
    front=0;
    rear=0;
    printf("Enter the item:");
    scanf("%d",&item);
    a[rear]=item;
  }
  else if(front==(rear+1)%maxsize)
  {
    printf("OVERFLOW\n");
  }
  else
  {
    rear=(rear+1)%maxsize;
    printf("Enter the item:");
    scanf("%d",&item);
    a[rear]=item;
  }
}
void dequeue()
{
  if(front==-1&&rear==-1)
  {
    printf("UNDERFLOW\n");
  }
  else if(rear==front)
  {
    item=a[front];
    rear=-1;
    front=-1;
  }
  else
  {
    item=a[front];
    front=(front+1)%maxsize;
  }
}
void display()
{
  int i;
  if(front==-1&&rear==-1)
  {
    printf("UNDERFLOW\n");
  }
  else
  {
    printf("The ELEMENTS IN QUEUE:\n");
    for(i=front;i!=rear;i=(i+1)%maxsize)
    {
      printf("%d\n",a[i]);
    }
    printf("%d\n",a[i]);
    printf("Position of front at %d\n",front);
    printf("Position of rear at %d\n",rear);
  }
}


    
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
