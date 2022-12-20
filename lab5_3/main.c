#include <stdio.h>
#include <stdlib.h>

void main(void){
  int i, j;
  int b[3][3];
  for (i = 0; i < 3; i++){		//ввод матрицы с клавиатуры
    for (j = 0; j < 3; j++){
      printf("Enter [%d][%d]: ", i+1, j+1);
      scanf("%d", &b[i][j]);
      printf("\n");
    }
  }
  
  for (i = 0; i < 3; i++){
  	for (j = 0; j < 3; j++){
  	  printf("%d ", b[i][j]);
	}
	printf("\n"); 
  }
  
  for (i = 0; i < 3; i++){
  	for (j = 0; j < 3; j++){
  	  if (b[i][j] < b[i][j + 1] || b[i][j + 1] < b[i][j + 2]){
  	    int str = i;
      }
  	  else break;
	}
  }
  printf("stroca: ", i + 1);
  
  int k;
  for (i = 0; i < 3; i++){
  	for (j = 0; j < 3; j++){
  	  for ( k = 0; k < 3; k++){
  	    int temp = b[i][k + 1];
		b[i][k + 1] = b[i][k];
		b[i][k] = temp;	
	  }
    }
  }
  printf("%d", b[i][k]);
}

//Найти в матрице первую строку, все элементы которой 
//упорядочены по  возрастанию.
//Изменить упорядоченность элементов этой строки на обратную.
