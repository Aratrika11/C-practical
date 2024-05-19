#include<stdio.h>
void main()
{
	int a,b,hcf,lcm;
	printf("Enter two numbers: ");
	scanf("%d,%d",&a,&b);
	for(int i=1;i<=a;i++)
	{
		if(a%i==0 && b%i==0)
			hcf=i;
	}
	lcm=(a*b)/hcf;
	printf("HCF: %d",hcf);
	printf("\nLCM: %d",lcm);
}