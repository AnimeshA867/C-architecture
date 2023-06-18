// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int length;
   printf("Enter the length of the array:");
   scanf("%d",&length);
   int arr[length],c;
//   printf("Enter the array element:");
   for(int i=0;i<length;i++){
   printf("Enter the array element:\t");
       scanf("%d",&arr[i]);
   }
   printf("Enter 1 for left shift and 2 for right shift:");
   scanf("%d",&c);
       if(c==1){
       int temp=arr[length-1];
           
   for(int i=length-1  ;i>0;i--){
    //   printf("i value after decrement: %d\n",i);
       int temp1=arr[i];
       arr[i]=arr[i-1];
     
        // }else{
            
       arr[i+1]=temp1;
    //   i-=1;/
    //   printf("i value after decrement: %d\n",i);
        
       
   }
       
            arr[0]=temp;
       }
       else{
       int temp=arr[0];
           
   for(int i=0  ;i<length-1;i++){
    //   printf("i value after decrement: %d\n",i);
       int temp1=arr[i];
       arr[i]=arr[i+1];
     
        // }else{
            
       arr[i-1]=temp1;
    //   i-=1;/
    //   printf("i value after decrement: %d\n",i);
        
       
   }
            arr[length-1]=temp;
           
       }
   for(int i=0;i<length;i++){
       printf("%d\t",arr[i]);
   }
   
   

    return 0;
}
