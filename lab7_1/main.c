#include <stdio.h>
#include <stdlib.h>

int arr[50][50];

void vvod(int arr[50][50], int n1, int m1){
	for(int i = 0; i < n1; i++){
		for(int j = 0; j < m1; j++){
			printf("Vvedite element [%d][%d]\n", i + 1, j + 1);
			scanf("%d", &arr[i][j]);
		}
	}
}

int vivod(int arr[50][50], int n1, int m1){
	printf("\n");
	for(int i = 0; i < n1; i++){
		for(int j = 0; j < n1; j++){
			printf("%d ", arr[i][j]);
		}
	}
	return 0;
}

//int string(int arr[50][50], int n1, int m1){
//	printf("\n");
//	int i;
//	for(int i = 0; i < n1; i++){
//		for(int j = 0; j < m1; j++){
//			if(arr[i][j] < arr[i][j + 1] && arr[i][j + 1] < arr[i][j + 2]){
//				printf("\n%d", i + 1);
//				break;
//			}
//		}
//	}
//}

void sort(int *arr){
	int n1, m1;
	for(int i = 0; i < n1 - 1; i++){
//		for(int j = 0; j < m1 - 1; j++){
			int temp = arr[i];
			arr[i] = arr[n1 - i - 1];
			arr[n1 - i - 1] = temp;
			printf("%d", arr[i]);
		}
//	}
}
  
void main(void){
	int arr[50][50];
	int m, n;
	int *str;
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enten m:");
    scanf("%d", &m);
    
	vvod(arr, n, m);
	vivod(arr, n, m);
	
	printf("\n");
	int i;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(arr[i][j] < arr[i][j + 1] && arr[i][j + 1] < arr[i][j + 2]){
				printf("\n%d", i + 1);
				break;
			}
		}
	}
}

//Найти в матрице первую строку, все элементы которой упорядочены по
//возрастанию. Изменить упорядоченность элементов этой строки на
//обратную.