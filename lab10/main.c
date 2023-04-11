#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void){
	float a[SIZE][SIZE], x[SIZE], ratio;
	int n;
	
//	clrscr();
	/* Inputs */
	/* 1. Reading number of unknowns */
	printf("Enter number of unknowns: ");
	scanf("%d", &n);
	/* 2. Reading Augmented Matrix */
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n + 1; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%f", &a[i][j]);
		}
	}
	/* Applying Gauss Elimination */
	for(int i = 1; i <= n - 1; i++){
		if(a[i][i] == 0.0){
			printf("Mathematical Error!");
			exit(0);
		}
		for(int j = i + 1; j <= n; j++){	//loop for the generation of upper triangular matrix
			ratio = a[j][i] / a[i][i];	//R2 = R2 - R1 * ratio (a[2][1] / a[1][1])
										//R3 = R3 - R1 * ratio (a[3][1] / a[1][1])
			for(int k = 1; k <= n + 1; k++){
				a[j][k] = a[j][k] - ratio * a[i][k];
			}
		}
	}
	/* Obtaining Solution by Back Subsitution */
	x[n] = a[n][n + 1] / a[n][n];
	//this loop is for backward substitution
	for(int i = n - 1; i >= 1; i--){
		x[i] = a[i][n + 1];
		for(int j = i + 1; j <= n; j++){
			x[i] = x[i] - a[i][j] * x[j];
		}
		x[i] = x[i] / a[i][i];
	}
	/* Displaying Solution */ 
	printf("\nSolution:\n");
	for(int i = 1; i <= n; i++){
		printf("x[%d] = %0.3f\n", i, x[i]);
	}
	getchar();
	return(0);
}