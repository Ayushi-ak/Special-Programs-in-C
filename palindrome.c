//Program to Check Whether a Number is Palindrome or Not
#include<stdio.h>
int main()
{
	int n,rem,rev=0,original;
	printf("\n");
	printf("Enter the number :");
	scanf("%d",&n);
	printf("\n");
	original=n;
	while(n!=0)
	{
		rem = n%10;
	    rev = rev*10 + rem;
		n = n/10;	
    } 
	if(original==rev)
		printf("%d is a palindrome no.",original);
	else
		printf("%d is not a palindrome no.",original);	
}
