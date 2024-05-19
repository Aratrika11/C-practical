#include<stdio.h>
void main()
{
    int order,r=0,c=0,v=0,i;   //array order , row, coloumn,value to enter
    int ar[20][20];
    printf("Enter order of matrix: ");
    scanf("%d",&order);
    int spi=order-1;
    while(spi>0)
    {
        for(i=1;i<=spi;i++)
            ar[r][c++]=++v;
        for(i=1;i<=spi;i++)
            ar[r++][c]=++v;
        for(i=1;i<=spi;i++)
            ar[r][c--]=++v;
        for(i=1;i<=spi;i++)
            ar[r--][c]=++v;
        spi=spi-2;r++;c++;
    }
    if(spi==0)
        ar[order/2][order/2]=order*order;
    printf("SPIRAL MATRIX \n");
    for(i=0;i<order;i++)
    {
        for(int j=0;j<order;j++)
            printf("%d ",ar[i][j]);
        printf("\n");
    }
}