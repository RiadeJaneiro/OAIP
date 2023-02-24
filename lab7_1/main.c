#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
int arr[SIZE][SIZE];

void vvod(int arr[SIZE][SIZE], int n1, int m1){
	for(int i = 0; i < n1; i++){
		for(int j = 0; j < m1; j++){
			printf("Vvedite element [%d][%d]: ", i + 1, j + 1);
			scanf("%d", &arr[i][j]);
		}
	}
}

int vivod(int arr[SIZE][SIZE], int n1, int m1){
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

//void sort(int *A, int n1){
//	int istr;
//	for(int i = 1; i < n1; ++i){
//		int istr = 1;
//		while(istr > 0 && A[istr - 1] > A[istr]){
//			int temp = A[istr -1];
//			arr[istr - 1] = arr[istr];
//			arr[istr] = temp;
//			printf("%d", A[istr]);
//		}
//	}
//}

//////////////////////////////////////////////////////
int is_sorted(const int a[], int n){
    int i = 1;
    while((i < n) && (a[i - 1] <= a[i]))
        ++i;
    return (i == n);
}
 
void reverse(int a[], int n){
    int i, j, t;
    for(i = 0, j = n - 1; i < j; --j, ++i){
        t    = a[j];
        a[j] = a[i];
        a[i] = t;
}}

//////////////////////////////////////////////////////////
  
void main(void){
	int arr[SIZE][SIZE];
	int m, n;
	int *str;
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enten m:");
    scanf("%d", &m);
    
	vvod(arr, n, m);
	vivod(arr, n, m);
	
	printf("\n");
//	int i,j;
//	int istr = 0;
//	int A[50];
//	for(int i = 0; i < n; i++){
//		for(int j = 0; j < m; j++){
//			if(arr[i][j] < arr[i][j + 1] && arr[i][j + 1] < arr[i][j + 2]){
//				printf("\n%d", i + 1);
//				break;
//			}
//		}
//	}
	
for(i = 0; i < n; ++i){
        if(sort(arr[i], n)){
            reverse(arr[i], n);
            break;
        }
    }
 
    //вывод
    for(i = 0; i < n; ++i){
        for(j = 0; j < n; ++j)
            printf("%d ", arr[i][j]);
        putchar('\n');
    }
    getchar();
    
}
 


	



//Найти в матрице первую строку, все элементы которой упорядочены по
//возрастанию. Изменить упорядоченность элементов этой строки на
//обратную.