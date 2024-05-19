#include<stdio.h>
#include<math.h>

int mean(int [], int);
int stddvn(int [], int);
int median(int [], int);
int variance(int [], int);
int mode(int [], int);

void main()
{
    int ar[20], n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    
    printf("Enter the elements : ");
    int i;
    for(i=0; i<n; i++)
        scanf("%d", &ar[i]);
        
    printf("The array - ");
    for(i=0; i<n; i++)
        printf("%d ", ar[i]);
        
    float m;
    m=mean(ar, n);
    printf("\nThe mean of the elements : %0.3f", m);
    
    float sd;
    sd=stddvn(ar, n);
    printf("\nThe standard deviation of the elements : %0.3f", sd);
    
    float med;
    med=median(ar, n);
    printf("\nThe median of the elements : %0.3f", med);
    
    float var;
    var=variance(ar, n);
    printf("\nThe variance of the elements : %0.3f", var);
    
    float mod;
    mod=mode(ar, n);
    printf("\nThe mode of the elements : %0.3f", mod);
}

int mean(int ar[], int n)
{
    float m;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+ar[i];
    }
    m=sum/n;
    return m;
}

int stddvn(int ar[], int n)
{
    float sd, sd1=0, sum=0, m;
    for(int i=0; i<n; i++)
    {
        sum=sum+ar[i];
    }
    m=sum/n;
    for(int i=0; i<n; i++)
    {
        sd1=pow((ar[i]-m), 2);
    }
    sd=sqrt(sd1/n);
    return sd;
}

int median(int ar[], int n)
{
    float med;
    if(n%2==0)
        med=(ar[n/2]+ar[(n/2)-1])/2 ;
    else
        med=ar[n/2];
    return med;
}

int variance(int ar[], int n)
{
    float var, a=0, sum=0, m;
    for(int i=0; i<n; i++)
    {
        sum=sum+ar[i];
    }
    m=sum/n;
    for(int i=0; i<n; i++)
    {
        a=pow((ar[i]-m), 2);
    }
    var=(a/n);
    return var;
}

int mode(int ar[], int n)
{
    float mod;
    int c=0, i, j;
    for(i=0; i<n; i++)
    {
        int c1=0;
        for(j=0; j<n; j++)
        {
            if (ar[j]==ar[i])
            c1++;
        }
        if(c1>c)
        {
            c=c1;
            mod=ar[i];
        }
    }
    return mod;
}