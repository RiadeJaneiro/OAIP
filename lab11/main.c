/* Gauss Seidel C Program */
#include <stdio.h>
#include <conio.h>
#include <math.h>

/* In this example we are solving
   0.66x - 1.44y - 0.18z = 1.83
   0.48x - 0.24y + 0.37z = - 0.84
   0.86x + 0.43y + 0.64z = 0.64
*/
/* Subtract the third equation from 
   the first and write a new equation 
   instead of the third
   0.20x + 1.87y + 0.82z = - 1.19
   0.48x - 0.24y + 0.37z = - 0.84
   0.86x + 0.43y + 0.64z = 0.64
*/
/* Arranging given system of linear
   equations in diagonally dominant
   form:
   0.86x + 0.43y + 0.64z = 0.64
   0.66x - 1.44y - 0.18z = 1.83
   2x - 3y + 20z = 25
*/
/* Equations:
   x = (17-y+2z)/20
   y = (-18-3x+z)/20
   z = (25-2x+3y)/20
*/
/* Defining function */
#define f1(x,y,z)  (17-y+2*z)/20
#define f2(x,y,z)  (-18-3*x+z)/20
#define f3(x,y,z)  (25-2*x+3*y)/20

/* Main function */
int main(){
	float x0 = 0, y0 = 0, z0 = 0, x1, y1, z1, ex, ey, ez, e;
	int count = 1;

	printf("Enter tolerable error:\n");
	scanf("%f", &e);

	printf("\nCount\tx\ty\tz\n");
	do{
		//find the approximations
		x1 = f1(x0, y0, z0);
		y1 = f2(x1, y0, z0);
		z1 = f3(x1, y1, z0);
		//display in the output
		printf("%d\t%0.4f\t%0.4f\t%0.4f\n", count, x1, y1, z1);

		//calculate errors
		ex = fabs(x0 - x1);
		ey = fabs(y0 - y1);
		ez = fabs(z0 - z1);

		count++;

		//set value for next iteration
		x0 = x1;
		y0 = y1;
		z0 = z1;
	}while(ex > e && ey > e && ez > e);

	printf("\nSolution: x=%0.3f, y=%0.3f and z = %0.3f\n",x1,y1,z1);

	getch();
	return 0;
}