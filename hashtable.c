//program to implement a hash table using linear probing
#include <stdio.h>
#include<stdlib.h>


#define TABLE_SIZE 5

int h[TABLE_SIZE]={0};

void insert()
{

 int key,index,i,flag=0,hkey;
 printf("enter a value to insert into hash table\n");
 scanf("%d",&key);
 hkey=key%TABLE_SIZE;
 for(i=0;i<TABLE_SIZE;i++)
    {

     index=(hkey+i)%TABLE_SIZE;

     if(h[index] == 0)
     {
        h[index]=key;
         break;
     }

    }

    if(i == TABLE_SIZE)

     printf("element cannot be inserted\n");
}
void search()
{

 int key,index,i,flag=0,hkey;
 printf("enter search element\n");
 scanf("%d",&key);
 hkey=key%TABLE_SIZE;
 for(i=0;i<TABLE_SIZE; i++)
 {
    index=(hkey+i)%TABLE_SIZE;
    if(h[index]==key)
    {
      printf("value is found at index %d\n",index);
      break;
    }
  }
  if(i == TABLE_SIZE)
    printf("value is not found\n");
}
void display()
{

  int i;

  printf("\nelements in the hash table are \n");

  for(i=0;i< TABLE_SIZE; i++)

  printf("at index %d \t value =  %d\n",i,h[i]);

}
int main()
{
    int opt,i;
    while(1)
    {
        printf("Press 1. Insert\t 2. Display \t3. Search \t4.Exit ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:exit(0);
        }
    }
}

//input :5,28,19,15,20
