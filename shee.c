#include<stdio.h>
#include<stdlib.h>
void delete(int n,int *a,int pos);
int main(){
   int *a,n,i,p;
   printf("enter the size of array:");
   scanf("%d",&n);
   a=(int*)malloc(sizeof(int)*n);
   printf("enter the elements:\n");
   for(i=0;i<n;i++){
      scanf("%d",(a+i));
   }
   printf("enter the position of element to be deleted:");
   scanf("%d",&p);
   delete(n,a,p);
   return 0;
}
void delete(int n,int *a,int p){
   int i,j;
   if(p<=n){
      for(i=p-1;i<n;i++){
         j=i+1;
         *(a+i)=*(a+j);
         
      }
      
      printf("after deletion the array elements is:\n");
      for(i=0;i<n-1;i++){
         
      
         printf("%d\n",(*(a+i)));
         
      }
   }
   else{
      printf("Invalid Input");
   }
}
