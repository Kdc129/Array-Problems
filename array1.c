// Write a program in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
int main(){
          int i,n,arr[10];
          printf("\nRead and print elements of an array \n ");
          printf("Input the value of an array ::");
          scanf("%d",&n);
           printf("Elements of an array are ::\n");
          for(i=0;i<n;i++)
          {
                    printf("Elements  %d::",i);
                    scanf("%d",&arr[i]);
                    printf("\n");
          }
          printf("resever form of array:: ");
          for(i=n-1;i>=0;i--)
          {
                    printf("    %d    ",arr[i]);
                    
          }
          return 0;

}