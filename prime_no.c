//Program to Check Whether a Number is Prime or Not
#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("\n");
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("\n");
	
	for(i=2;i<=n;i++)
	{    
	    if (n%i==0)
	    {
	    	count=count+1;
		}
    }
    if(count==1)
    {
    	printf("%d is a prime number",n);
	}
	else
		printf("%d is not a prime number",n);
     
    printf("\n");
}
