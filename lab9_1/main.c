#include <stdio.h>
#include <stdlib.h>
#define LEN 90

int main(void){
	int numbers[LEN];
	int temp[LEN];
	int i = 0;
	FILE *f;
	FILE *g;

	if(f = fopen("f.txt", "rb")){	//open the file f for reading
		printf("File f: ");
		//reads the file and puts the content i.e. the numbers in the numbers array.
		while(fscanf(f, "%d", &numbers[i]) != EOF){	
			i++;
		}
		fclose(f);	//close the file f
		          
		numbers[i] = '\0';
		
		for(i = 0; numbers[i] != '\0'; i++){	//printing data from file f
			printf("%d ", numbers[i]);
		}                                   
	}
	
	printf("\nEnter k: ");	//enter a random number k
    int k;
    scanf("%d", &k);
	
	if(g = fopen("g.txt", "wb")){	//open the file g for writing
		printf("File g: ");
		for(i = 0; numbers[i] != '\0'; i++){
			if(numbers[i] > k && numbers[i] < LEN){
				//printing numbers that are greater than k to the file g
				fprintf(g, "%d ", numbers[i]);
				fprintf(stdout, "%d ", numbers[i]);	//printing data from file g
			}
		}
		fclose(g);	//close the file g
	}
}