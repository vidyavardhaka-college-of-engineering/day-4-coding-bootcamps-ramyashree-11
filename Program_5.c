//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.

 //Write your code here
#include<stdio.h>
int main()
{
    int arr[10], n, i,large,small;
    printf("\nEnter the number of elements :" );
    scanf("%d", &n);
    printf("\nInput the array elements : ");
     for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        large=small=arr[0];
        for(i=1;i<n;++i)
       {
       if(arr[i]>large)
        large=arr[i];

       if(arr[i]<small)
       small=arr[i];
      }
      printf("\nThe smallest element is %d\n",small);printf("\nThe largest element is %d\n",large);
    return 0;
}
