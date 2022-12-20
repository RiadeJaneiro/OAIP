#include <stdio.h>
#include <conio.h>

void main(void){
  int i, j;
  int b[6][6];

  for (i = 0; i < 6; i++){			//задаём матрицу рандомным образом
    for (j = 0; j < 6; j++){
      b[i][j]=rand() % 10;
      printf ("%d ", b[i][j]);
    }
  printf("\n");
  }
  
  int k;
  int kol[6][6];
  for (i = 0; i < 6; i++){
    for (j = 0; j < 6; j++){
      kol[i][j] = 0;	
    }
  }
  
  for (i = 0; i < 6; i++){			//ищем количество одинаковые элементы в каждой строке
    for (j = 0; j < 6; j++)
  	  for (k = 0; k < 6; k++){
  	    if (b[i][j] == b[i][k])
		kol[i][j]++;	
	  }
//	for (j = 0; j < 6; j++)
//    printf ("\nkol-vo povtor el v %d stroke: %d", i + 1, kol[i][j]);
  }
  
  for (i = 0; i < 6; i++){
  	int max = 1;
  	for (j = 0; j < 6; j++){
  	  while (kol[i][j] > max){
  	    max = kol[i][j];	
	  }
 	}
 	printf("\nmax kol-vo odinak elementov v %d stroke:%d\n", i + 1, max);
  }
  
  for (i = 0; i < 6; i++){    //cортировка пузырьком
  	for (j = 0; j < 6; j++){
  	  for (k = 0; k < 6 - j - 1; k++){
  	    if (b[i][k] > b[i][k + 1]){
  	  	  int temp = b[i][k];
  	  	  b[i][k] = b[i][k +1];
  	  	  b[i][k + 1] = temp;
		}	
	  }
	printf("%d ", b[i][j]);
	}
  }
  
  
}

//Упорядочить строки целочисленной прямоугольной матрицы по 
//возрастанию количества одинаковых элементов в каждой строке.
//Найти номер 
//первого из столбцов, 
//не содержащих ни одного отрицательного элемента.
