//  Write a program in C to find the sum of all elements of the array.
#include<stdio.h>
int main(){
          int i,n,arr[10],sum=0;
          printf("\nRead and print sum of an array \n");
          printf("\nInput the value of an array::");
          scanf("%d",&n);
          for(i=0;i<n;i++)
          {
                    printf("Elements %d::",i);
                    scanf("%d",&arr[i]);
                    
          }
          for(i=0;i<n;i++)
          {
           sum=sum+arr[i];
           printf("sum of array is =%d\t",sum);
           }
          
          {
       
           printf("\nsum of total array is =%d",sum);
           }
          return 0;
}