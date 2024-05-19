#include<stdio.h>
void main()
{
    int n,max,min;
    int ar[50];
    printf("Enter no. of elements of array");
    scanf("%d",&n);
    printf("Enter Array elements \n");
    for(int i=0;i<n;i++)
        scanf("%d",&ar[i]);
    printf("ARRAY: [");
    for(int i=0;i<n;i++)
        printf("%d ",ar[i]);
    printf("]\n");
    max=ar[0];
    min=ar[0];
    for(int i=0;i<n;i++)
    {
        if(ar[i]>max)
        max=ar[i];
        else if(ar[i]<min)
        min=ar[i];
    }
    printf("Max : %d \n",max);
    printf("Min : %d",min);
}