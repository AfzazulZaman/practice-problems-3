#include<stdio.h>
#include<limits.h>
int main(){
        int N;
         scanf("%d",&N);
         int A[N];
          int max = INT_MIN;
          int min = INT_MAX;
         for (int i = 0; i <N; i++)
         {
           scanf("%d",&A[i]);
         }
    
         for (int i = 0; i <N; i++)

         {   
            
          if (A[i]>max)
          { 
            max=A[i];
          }
          if (A[i]<min)
          {
            min=A[i];
          }
        
         }
     

     for (int i = 0; i <N; i++)
     {
        if (A[i] == min) {
          A[i] = max;
          }
     else if (A[i] == max) {
           A[i] = min;
           } 
      printf("%d ",A[i]);
     }
     
       
     
    return 0;
}