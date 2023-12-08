#include<stdio.h>
#include<stdlib.h>
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void display();
int item,pos,i=1;
struct node{
      int data;
      struct node *link;
 }*head,*temp,*ptr;
 void main(){
 int choice;
 while(choice!=8){
  printf("Enter the operation to be performed:\n");
  printf("INSERTION:1.At beginning 2.At end 3.At any position\n DELETION:4.At beginning 5.At end 6.At any position\n7.Display 8.Exit\nChoice:");
  scanf("%d",&choice);
  switch(choice){
   case 1:{
     insert_begin();
     break;
   }
   case 2:{
     insert_end();
     break;
   }
   case 3:{
     insert_pos();
     break;
   }
   case 4:{
     delete_begin();
     break;
   }
   case 5:{
     delete_end();
     break;
   }
   case 6:{
      delete_pos();
      break;
   }
   case 7:{
     display();
     break;
   }
   case 8:{
      printf("EXITED!!");
      break;
   }
  }
  printf("\n");
 }
 }
void insert_begin(){
  temp=(struct node*)malloc(sizeof(struct node*));
  if(temp==NULL){
   printf("UNDERFLOW\n");
  }
  else{
   printf("Enter the value:");
   scanf("%d",&item);
   temp->data=item;
   temp->link=head;
   head=temp;
  }
}
void insert_end(){
 temp=(struct node*)malloc(sizeof(struct node*));
 if(head==NULL){
  head=temp;
  ptr=temp;
 }
 ptr=head;
 while(ptr->link!=NULL){
  ptr=ptr->link;
 }
 ptr->link=temp;
 printf("Enter the value:");
 scanf("%d",&item);
 temp->data=item;
 temp->link=NULL;
} 
void insert_pos(){
  temp=(struct node*)malloc(sizeof(struct node*));
  if(head==NULL){
  head=temp;
  ptr=temp;
  printf("Enter the value:");
  scanf("%d",&item);
  temp->data=item;
 }
 else{
  ptr=head;
  printf("Enter the value after which the node is be inserted:");
  scanf("%d",&pos);
  printf("Enter the value:");
  scanf("%d",&item);
  temp->data=item;
  while(ptr->data!=pos&&ptr->link!=NULL){
   ptr=ptr->link;
   if(ptr->link==NULL){
    printf("SEARCH FAILS");
   }
   }
   temp->link=ptr->link;
   ptr->link=temp;
 }
}
void delete_begin(){
 if(head==NULL){
  printf("EMPTY\n");
 }
 else{
  ptr=head;
  head=ptr->link;
  free(ptr);
 }
}
void delete_end(){
if(head==NULL){
 printf("EMPTY\n");
}
 else if(head->link==NULL){
  ptr=head;
  head=NULL;
  free(ptr);
 }
 else{
  ptr=head;
  temp=ptr->link;
  while(temp->link!=NULL){
   ptr=temp;
   temp=temp->link;
  }
  ptr->link=NULL;
  free(temp);
 }
}
void delete_pos(){
if(head==NULL){
 printf("EMPTY\n");
}
else{
 temp=head;
 printf("Enter the position which the node is to be deleted:");
 scanf("%d",&pos);
 if(head==NULL){
  printf("UNDERFLOW\n");
 }
 else{
  while(i<(pos-1)){
   temp=temp->link;
   i++;
  }
  ptr=temp->link;
  temp->link=ptr->link;
  free(ptr);
 }
}
}
void display(){
if(head==NULL){
  printf("UNDERFLOW\n");
 }
else{
 ptr=head;
 printf("Elements in the linked list:");
 while(ptr!=NULL){
  printf("%d\t",ptr->data);
  ptr=ptr->link;
 }
 printf("\n");
 }
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

  
  
