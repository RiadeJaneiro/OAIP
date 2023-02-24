#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
int arr[SIZE][SIZE];

void vvod(int arr[SIZE][SIZE], int n1, int m1){ 		//запись элементов массива
	for(int i = 0; i < n1; i++){
		for(int j = 0; j < m1; j++){
			printf("Vvedite element [%d][%d]: ", i + 1, j + 1);
			scanf("%d", &arr[i][j]);
		}
	}
}

int vivod(int arr[SIZE][SIZE], int n1, int m1){			//вывод на экран элементов массива
	printf("\n");
	for(int i = 0; i < n1; i++){
		for(int j = 0; j < n1; j++){
			printf("%d ", arr[i][j]);
		}
	printf("\n");
	}
	return 0;
}

int str(const int a[], int n){		//поиск нужной строки
    int i = 1;
    while((i < n) && (a[i - 1] <= a[i]))
        ++i;
    return (i == n);
}
 
void sort(int a[], int n){        //сортировка в обратном порядке нужной строки
    int i, j;
    for(i = 0, j = n - 1; i < j; --j, ++i){
        int temp = a[j];
        a[j] = a[i];
        a[i] = temp;
	}
}
  
void main(void){
	int arr[SIZE][SIZE];
	int m, n;
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enten m:");
    scanf("%d", &m);
    
	vvod(arr, n, m);
	vivod(arr, n, m);
	
	printf("\n");

	for(int i = 0; i < n; ++i){
        if(str(arr[i], n)){
            sort(arr[i], n);
            break;
        }
    }
 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }    
}
 
//Найти в матрице первую строку, все элементы которой упорядочены по
//возрастанию. Изменить упорядоченность элементов этой строки на
//обратную.