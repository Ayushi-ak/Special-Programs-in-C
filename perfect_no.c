//Program to Check whether a given Number is Perfect Number
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("\n");
	printf("Enter the number:");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<n;i++)
	{
	    if(n%i==0)
		{
	        sum = sum+i;	        
        }
	}
	if(sum==n)
		printf("%d is a perfect number",n);
    else
        printf("%d is a not perfect number",n);

}
