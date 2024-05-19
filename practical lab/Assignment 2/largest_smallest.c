#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            if(c>b)
            {
                printf("%d is the largest",a);
                printf("\n %d is the smallest",b);
            }
            else
            {
                printf("%d is the largest",a);
                printf("\n %d is the smallest",c);
            }
        }
        else
        {
            printf("%d is the largest",c);
            printf("\n %d is the smallest",b);
        }
    }
    else if(b>c)
    {
        if(c>a)
        {
            printf("%d is the largest",b);
            printf("\n %d is the smallest",a);
        }
        else
        {
            printf("%d is the largest",b);
            printf("\n %d is the smallest",c);
        }
    }
    else
    {
        printf("%d is the largest",c);
        printf("\n %d is the smallest",a);
    }
    return 0;
}