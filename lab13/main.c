#include <stdio.h>
#include <stdlib.h>

//sorting for arr1
void SelectionSort1(int *arr1){
	for(int i = 0; i < 10 - 1; i++){
		int max = i;
		for(int j = i + 1; j < 10; j++){
			if(arr1[j] > arr1[max]){
				max = j;
			}
		}
		int temp = arr1[i]; 
		arr1[i] = arr1[max];
		arr1[max] = temp;
	}
	printf("arr1:\n");
	for(int i = 0; i < 10; i++){
		printf("%d ", arr1[i]);
	}
}

//sorting for arr2
void SelectionSort2(int *arr2){
	for(int i = 0; i < 7 - 1; i++){
		int max = i;
		for(int j = i + 1; j < 7; j++){
			if(arr2[j] > arr2[max]){
				max = j;
			}
		}
		int temp = arr2[i];
		arr2[i] = arr2[max];
		arr2[max] = temp;
	}
	printf("\narr2:\n");
	for(int i = 0; i < 7; i++){
		printf("%d ", arr2[i]);
	}
} 

//sorting for arr
void SolutionSort(int *arr){
	for(int i = 0; i < 17 - 1; i++){
		int min = i;
		for(int j = i + 1; j < 17; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
	printf("\nsorted arr:\n");
	for(int i = 0; i < 17; i++){
		printf("%d ", arr[i]);
	}
}

//main function
int main(void){
	int arr1[10] = {15, 2, 4, 8, 5, 12, 6, 9, 1, 7};
	int arr2[7] = {3, 10, 5, 11, 0, 7, 8};
	
	SelectionSort1(arr1);
	SelectionSort2(arr2);
	
	int arr[17];
	int j = 0, k = 0;
	
	//merging two arrays
	for(int i = 0; i < 17; i++){
		if(arr1[j] >= arr2[k]){
			arr[i] = arr1[j];
			j++;
		}
		else{
			arr[i] = arr2[k];
			k++;
		}
	}
	printf("\narr:\n");
	for(int i = 0; i < 17; i++){
		printf("%d ", arr[i]);
	}
	
	SolutionSort(arr);
	return 0;
}

/* Даны два массива. Массив А состоит из N элементов , массив В состоит из М
элементов. Оба массива отсортированы по убыванию. Разработать программу для
слияния этих массивов в отсортированный по неубыванию массив С. */