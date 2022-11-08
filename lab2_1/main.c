#include <stdio.h>
#include <stdlib.h>
void main()
{
	int b1, b2, b3, b4, b5, b6, n;
	printf("Enter a six-digit number: ");
	scanf("%d", &n);
	
	b1=n%10;
	n=n/10;
	
	b2=n%10;
	n=n/10;
	
	b3=n%10;
	n=n/10;
	
	b4=n%10;
	n=n/10;
	
	b5=n%10;
	n=n/10;
	
	b6=n%10;
	n=n/10;
	
	if(b1+b2+b3==b4+b5+b6) printf("The ticket is lucky");
	 else printf("The ticket is not lucky");
}

