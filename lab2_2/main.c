#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a,b,c,N;
	
	printf("Enter a:",a);
	scanf("%d",&a);
	printf("Enter b:",b);
	scanf("%d",&b);

	printf("Enter c:",c);
	scanf("%d",&c);
	printf("Enter N:",N);
	scanf("%d",&N);
	
	if(a%N==0 && b%N==0 && c%N==0) printf("N - divisor of numbes a,b and c");
	 else if(a%N==0 && b%N==0) printf("N - divisor of number a and b");
	  else if(a%N==0 && c%N==0) printf("N - divisor of number a and c");
	   else if(b%N==0 && c%N==0) printf("N - divisor of number b and c");
	    else if(a%N==0) printf("N - divisor of number a");
         else if(b%N==0) printf("N - divisor of number b");
	      else if(c%N==0) printf("N - divisor of number c");
		   else printf("Error");
}