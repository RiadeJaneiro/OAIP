#include <stdio.h>
#include <conio.h>

void main(void){
  int i, j;
  int b[6][6] = {{-1, 7, 4, 0, 9, 4},
                 {8, 8, 2, 4, 5, 5},
				 {1, 7, 1, 1, 5, 2},
				 {7, 6, 1, -4, 2, 3},
				 {2, 2, 1, 6, 8, 5},
				 {7, 6, 1, 8, 9, -2}};

  for (i = 0; i < 6; i++){			//вывод матрицы
    for (j = 0; j < 6; j++){
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
  
  for (i = 0; i < 6; i++){			//поиск количества одинаковых элементов в каждой строке
    for (j = 0; j < 6; j++)
  	  for (k = 0; k < 6; k++){
  	    if (b[i][j] == b[i][k])
		kol[i][j]++;	
	  }
//	for (j = 0; j < 6; j++)
//    printf ("\nnumber of repeating elements in %в line: %d", i + 1, kol[i][j]);
  }
  
  for (i = 0; i < 6; i++){
  	int max = 1;
  	for (j = 0; j < 6; j++){
  	  while (kol[i][j] > max){
  	    max = kol[i][j];	
     	printf("\nmax number of repeating elements in %d line:%d", i + 1, max);
	  }
 	}
  }

  for (j = 0; j < 6; j++){    //поиск первого столбца с отрицательными элементами
  	for (i = 0; i < 6; i++){
 	    if (b[i][j] > 0){
 	      printf("\nfirst column number without negative elements:%d", i + 1);
 	      break;
  	  	  }
	}
	return -1;
  }  
}

//Упорядочить строки целочисленной прямоугольной матрицы по 
//возрастанию количества одинаковых элементов в каждой строке.
//Найти номер 
//первого из столбцов, 
//не содержащих ни одного отрицательного элемента.
