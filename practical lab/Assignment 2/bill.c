#include<stdio.h>
int main()
{
    int call;
    float amt;
    printf("Enter no. of calls for Mr.X");
    scanf("%d",&call);
    if(call==0)
        amt=250.0;
    else if(call>=1 && call<=100)
        amt=250+(call*0.2);
    else if(call>=101 && call<=200)
        amt=250+20+((call-100)*0.3);
    else if(call>200)
        amt=250+20+30+((call-200)*0.5);
    else
        printf("Invalid input");
    printf("Bill amount for %d calls is Rs: %f",call,amt);
    return 0;
    
}