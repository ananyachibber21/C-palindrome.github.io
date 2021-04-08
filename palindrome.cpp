#include<stdio.h>

int main()

{
	int num;
	int rev,rem;
	int n;

	rev=0;
	
	printf("Enter a no: ");
	scanf("%d",&num);
	n=num;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
	    n=n/10;
	}
	if(rev==num)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
	
	
	
}
	    
