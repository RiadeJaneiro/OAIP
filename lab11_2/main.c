/* Gauss-Seidel method */
#include <stdio.h>
#include <conio.h>
#include <math.h>

/* In this example we are solving
   0.66x - 1.44y - 0.18z = 1.83
   0.48x - 0.24y + 0.37z = - 0.84
   0.86x + 0.43y + 0.64z = 0.64
*/
/* Arranging given system of linear
   equations in diagonally dominant
   form:
   0.86x + 0.43y + 0.64z = 0.64
   0.66x - 1.44y - 0.18z = 1.83
   0.48x - 0.24y + 0.37z = - 0.84
*/
/* Equations:
   x = (0.64 - 0.43y - 0.64z)/0.86
   y = (-1.83 + 0.66x - 0.18z)/1.44
   z = (- 0.84 - 0.48x + 0.24y)/0.37
*/
/* Defining function */
#define f1(x,y,z)  (0.64 - 0.43*y - 0.64*z)/0.86
#define f2(x,y,z)  (-1.83 + 0.66*x - 0.18*z)/1.44
#define f3(x,y,z)  (- 0.84 - 0.48*x + 0.24*y)/0.37

/* Main function */
int main(){
	float x0 = 0, y0 = 0, z0 = 0, x1, y1, z1, ex, ey, ez, e;
	int count = 1;

	printf("Enter tolerable error: ");
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