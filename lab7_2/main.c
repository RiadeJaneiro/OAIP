#include <stdio.h>
#include <stdlib.h>

void main(void){
	char str[50];
	
	printf("Enter a string: ");
	fgets(str, 50, stdin);
	
	int n = 0;
	for(int i = 0; i < 50; i++){
		if(str[i] == ' ')
			n++;
	}
	
	printf("Spaces: %d", n);
}

//Ввести строку. В функции посчитать количество пробелов.