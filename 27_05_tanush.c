#include<stdio.h>
void main()
{
    int a[100],n,i,largest=0;
    printf("\n Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter elements in an array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }
    printf("\nLargest element in an array is :%d",largest);
}