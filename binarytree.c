#include<stdio.h>
void main(){
  int pos,i,n,t[50];
  char choice='y';
  printf("Enter the no of nodes:\n");
  scanf("%d",&n);
  printf("Enter the tree elements:\n");
  for(i=1;i<=n;i++){
    scanf("%d",&t[i]);
  }
  while(choice=='y'){
    printf("Position of node to be displayed:\n");
    scanf("%d",&pos);
    if(pos==0){
      printf("No element at position 0");
    }
    else 
    {
       if(pos/2==0){
      printf("NO PARENT");
    }
    else{
      printf("Parent of the node is: %d",t[pos/2]);
    }
    
    if((2*pos)>n){
      printf("\nNO LEFT CHILD");
    }
    else{
      printf("\nLeft child of the node is:%d",t[2*pos]);
    }
    
    if((2*pos)+1>n){
      printf("\nNO RIGHT CHILD");
    }
    else{
      printf("\nRight child of the node is:%d",t[(2*pos)+1]);
    }
    }
    printf("\nDo you want to continue(y/n): ");
    scanf(" %c",&choice);
  }
}

      
      
      
      
      
      
      
      
      
      
      
  	
