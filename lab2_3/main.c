#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n;
	printf("Pick a time of year: 1-winter, 2-spring, 3-summer, 4-autumn\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1: printf("December January February");break;
		case 2: printf("March April May");break;
		case 3: printf("June July August");break;
		case 4: printf("September October November");break;
		defult: printf("Error");break;
	}
}