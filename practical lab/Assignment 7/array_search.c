#include<stdio.h>
void main()
{
    int n,s,k,c=0;
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
    printf("Enter element to be searched");
    scanf("%d",&s);
    for(int j=0;j<n;j++)
    {
        if(ar[j]==s)
        {
            k=j;    //storing index
            c=c+1; //keeping a count of matches
            break;
        }
    }
    if(c==1)
        printf("The element is found at the %dth position",k+1);
    else
    printf("Sorry item not found");
}