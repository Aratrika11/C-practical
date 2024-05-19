#include<stdio.h>
void main()
{
    int n,ce=0,co=0;
    int ar[50],even[50],odd[50];
    printf("Enter number of elements");
    scanf("%d",&n);
    printf("Enter Array elements \n");
    for(int i=0;i<n;i++)
        scanf("%d",&ar[i]);
    printf("ARRAY: [");
    for(int i=0;i<n;i++)
        printf("%d ",ar[i]);
    printf("]\n");
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            even[ce]=ar[i];
            ce=ce+1;   //counting index of even array
        }
        else
        {
            odd[co]=ar[i];
            co=co+1;   //counting index of odd array
        }
    }
    printf("No. of Even elements = %d \n",ce);
    printf("[");
    for(int i=0;i<ce;i++)
        printf("%d ",even[i]);
    printf("]\n");
    printf("No. of odd elements = %d \n",co);
    printf("[");
    for(int i=0;i<co;i++)
        printf("%d ",odd[i]);
    printf("]");
}