#include <stdio.h>
#include <stdlib.h>

int b[3][3] = {{5, 4, 9},
               {1, 2, 3},
               {0, 6, 8}};

void asort(int *b){
  for (int i = 0; i < 3; i++){		//сортировка пузырьком
    int temp = b[i];
	b[i] = b[3 - i - 1];
	b[3 - i -1] = temp;
	printf("%d ", b[i]);
    }
}

  
int main(void){
  int i, j;
  int resSt = 1;
  for (i = 0; i < 3; i++){      //вывод матрицы
  	for (j = 0; j < 3; j++){
  	  printf("%d ", b[i][j]);
	}
	printf("\n"); 
  }
  
  for (i = 0; i < 3; i++)      //поиск первой строки, все элементы которой упорядочены по возрастания
  	printf("%d ", b[resSt][i]);
  
  printf("\n");
  asort(b[resSt]);
}

//Найти в матрице первую строку, все элементы которой 
//упорядочены по  возрастанию.
//Изменить упорядоченность элементов этой строки на обратную.
