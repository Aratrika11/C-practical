/*7. Write a C program to design a structure named XYZ with one integer and one float member.
Declare 3 variables V1, V2 and V3 of this structure. Input the values of members V1 and V2. Finally, 
add members of V1 and V2 and keep the results in V3 and print it.*/
#include<stdio.h>
typedef struct 
{
    int num;
    float n;
}XYZ;
void main()
{
    XYZ V1,V2,V3;
    printf("Enter integer value1: ");
    scanf("%d",&V1.num);
    printf("Enter integer value2: ");
    scanf("%d",&V2.num);
    printf("Enter decimal value1: ");
    scanf("%f",&V1.n);
    printf("Enter decimal value2: ");
    scanf("%f",&V2.n);
    V3.num=V1.num+V2.num;
    V3.n=V1.n+V2.n;
    printf("Integer Sum: %d\n",V3.num);
    printf("Decimal Sum: %f",V3.n);
}