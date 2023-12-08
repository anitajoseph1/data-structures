#include<stdio.h>
#include<stdlib.h>

struct poly{
    int coef,expo;
    struct poly *link;
}*Phead,*Qhead,*Rhead,*temp,*ptr,*P,*Q,*R;

struct poly * creat_poly(){
 struct poly *head;
 int n,coeff,expon;
 head=NULL;
 printf("Enter the number of terms of the polynomial:");
 scanf("%d",&n);
 for(int i=0;i<n;i++){
  temp=(struct poly*)malloc(sizeof(struct poly*));
  printf("Enter the coefficent and exponent:");
  scanf("%d%d",&coeff,&expon);
  temp->coef=coeff;
  temp->expo=expon;
  temp->link=NULL;
  if(head==NULL){
   head=temp;
   ptr=head;
  }
  else{
   ptr->link=temp;
   ptr=ptr->link;
  }
 }
 return head;
}

void display_poly(struct poly *head){
 ptr=head;
 while(ptr!=NULL){
  printf("%dx^%d",ptr->coef,ptr->expo);
  if(ptr->link!=NULL){
   printf("+");
  }
  ptr=ptr->link;
 }
 printf("\n");
}

void add_poly(){
 P=Phead,Q=Qhead,R=Rhead;
 while(P!=NULL&&Q!=NULL){
  temp=(struct poly*)malloc(sizeof(struct poly*));
  temp->link=NULL;
  if(P->expo>Q->expo){
   temp->coef=P->coef;
   temp->expo=P->expo;
   P=P->link;
  }
  else if(P->expo<Q->expo){
   temp->coef=Q->coef;
   temp->expo=Q->expo;
   Q=Q->link;
  }
  else{
   temp->coef=P->coef+Q->coef;
   temp->expo=P->expo;
   P=P->link;
   Q=Q->link;
  }
  if(Rhead==NULL){
   Rhead=temp;
   R=temp;
  }
  else{
   R->link=temp;
   R=temp;
  }
 }
 while(P!=NULL){
  temp=(struct poly*)malloc(sizeof(struct poly*));
  temp->coef=P->coef;
  temp->expo=P->expo;
  temp->link=NULL;
  if(Rhead==NULL){
   Rhead=temp;
   R=temp;
  }
  else{
   R->link=temp;
   R=temp;
  }
 }
 while(Q!=NULL){
  temp=(struct poly*)malloc(sizeof(struct poly*));
  temp->coef=Q->coef;
  temp->expo=Q->expo;
  temp->link=NULL;
  if(Rhead==NULL){
   Rhead=temp;
   R=temp;
  }
  else{
   R->link=temp;
   R=temp;
  }
 }
}

void main(){
 P=NULL,Q=NULL,R=NULL;
 Phead=creat_poly();
 printf("The first polynomial is:");
 display_poly(Phead);
  printf("\n");
 Qhead=creat_poly();
 printf("The second polynomial is:");
 display_poly(Qhead);
 printf("\n");
 add_poly();
 printf("the sum of two polynomial is:");
 display_poly(Rhead);
  printf("\n");
}
    
  
  
  
  
  
  
  
  
  
  
  
  
  

























    
    
  






























      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
    
