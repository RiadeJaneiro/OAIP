#include <stdio.h>
#include <conio.h>

void main(void){
	int i,j,size=6;
	float b[size][size];
	
	printf("Matrica:\n");
	for(i=0;i<size;i++)
	 for(j=0;j<size;j++){
	 b[i][j]=rand()%10;
	 printf("%5d ",b[i][j]);
	}
	
}

//Упорядочить строки целочисленной прямоугольной матрицы по 
//возрастанию количества одинаковых элементов в каждой строке.
//Найти номер 
//первого из столбцов, 
//не содержащих ни одного отрицательного элемента.
