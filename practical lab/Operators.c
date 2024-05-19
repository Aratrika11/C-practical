#include<stdio.h>
/*typedef struct 
 {
    int a;
    char c;
    float f;
    double d;
 }student;*/
void main()
{
   /*enum Months{Jan=10,feb,mar,apr};
   enum Months X= Jan;
   switch(X)
   {
    case 1: printf("January");
            break;
    case 10: printf("February");
            break;
    case 11: printf("March");
            break;
   }*/
   int a;
   if(a=6)
        printf("IDK \n");
   else 
        printf("DK");
   char ar[]="Aratrika Debnath";
   printf("%s \n",ar);
   //Set 2
   float arr[]={12.5,13.5,14.5,15.5,16.5};
   float *ptr=&arr[0];
   float *ptr1=ptr+3;
   printf("%f %d \n",*ptr1,ptr1-ptr);

   int arre[]={1,2,3,4};
   int (*pt)[3]=arre;
   printf("%d %d \n",(*pt)[1],(*pt)[2]);
   ++pt;
   printf("%d ",(*pt)[0]);
}