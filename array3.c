//  Write a program in C to copy the elements of one array into another array.
#include <stdio.h>

int main()
{
    int arr1[100], arr2[100];
    int i, n;
      
       printf("Input the number of elements to be stored in the array :\n");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
   
    for(i=0; i<n; i++)
    {
        arr2[i] = arr1[i];//coping first array into second array
    }

  
    printf("\nThe elements stored in the first array are :\n");
    for(i=0; i<n; i++)
    {
        printf("   %d  ", arr1[i]);
    }

    
    printf("\n\nThe elements copied into the second array are :\n");
    for(i=0; i<n; i++)
    {
        printf("   %d  ", arr2[i]);
    }
	     
                 return 0;
}