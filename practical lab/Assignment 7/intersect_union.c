#include<stdio.h>
void printUnion(int [],int [],int,int);
void main()
{
    int n,n1,in=0;
    int a[50],b[50],inter[50];
    printf("Enter no. of elements of array 1");
    scanf("%d",&n);
    printf("Enter no. of elements of array 2");
    scanf("%d",&n1);

    //input for 1st array

    printf("Enter Array1 elements \n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("ARRAY: [");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("]\n");

    //input for 2nd array

    printf("Enter Array2 elements \n");
    for(int i=0;i<n1;i++)
        scanf("%d",&b[i]);
    printf("ARRAY 2: [");
    for(int i=0;i<n1;i++)
        printf("%d ",b[i]);
    printf("]\n");

    //Performing Intersection

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n1;j++)
        {
            if(a[i]!=a[i+1] && a[i]==b[j])
            {
                inter[in]=a[i];
                in++;
                break;
            }
        }  //end of inner loop
    }   //end of outer loop
    printf("After intersecting two arrays \n");
    printf("INTERSECTION [");
    for(int i=0;i<in;i++)
        printf("%d ",inter[i]);
    printf("]\n");
    printUnion(a,b,n,n1);
}
void printUnion(int a[],int b[],int m,int n)
  { 
    int i=0,j=0;
    printf("Union of arrays: \n");
    while(i<m && j<n)   //for sorting and printing unnion ascending order
    {
        if(a[i]<b[j])
          printf("%d ",a[i++]);  
        else if(b[j]<a[i])
          printf("%d ",b[j++]);
        else
        {
            printf("%d ",b[j++]);   //when values equal then put anyone and increase both index
            i++;
        }
    }
    while(i<m)
      printf("%d",a[i++]);
    while(j<n)
      printf("%d",b[j++]);
  }

    