/* Gauss method */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

/* In this example we are solving
   1.14x - 2.15y - 5.11z = - 4.16
   - 0.71x + 0.81y - 0.02z = - 0.17
   0.42x - 1.13y + 7.05z = 6.15
*/
/* Main function */
int main(void){
	float a[SIZE][SIZE], x[SIZE], ratio;
	int n;
	
	printf("Enter number of unknowns: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n + 1; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%f", &a[i][j]);
		}
	}
	//Application of the Gauss method
	for(int i = 1; i <= n - 1; i++){
		if(a[i][i] == 0.0){
			printf("Mathematical Error!");
			exit(0);
		}
		//loop for the generation of upper triangular matrix
		for(int j = i + 1; j <= n; j++){
			ratio = a[j][i] / a[i][i];
			for(int k = 1; k <= n + 1; k++){
				a[j][k] = a[j][k] - ratio * a[i][k];
			}
		}
	}
	//Back Substitution
	x[n] = a[n][n + 1] / a[n][n];
	//loop for backward substitution
	for(int i = n - 1; i >= 1; i--){
		x[i] = a[i][n + 1];
		for(int j = i + 1; j <= n; j++){
			x[i] = x[i] - a[i][j] * x[j];
		}
		x[i] = x[i] / a[i][i];
	}
	//Displaying Solution
	printf("\nSolution:\n");
	for(int i = 1; i <= n; i++){
		printf("x[%d] = %0.3f\n", i, x[i]);
	}
	getchar();
	return(0);
}