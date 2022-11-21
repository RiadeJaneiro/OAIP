#include <stdio.h>
#include <stdlib.h>

void main(void){
	int size=15;
	int a[size];
	
	int summ=0;
	for(int i=0;i<size;i++){
	a[i]=rand()%10;	
	printf("%d ", a[i]);
	summ+=a[i];
	}
	printf("\nsumm=%d",summ);
	
	double srednee=summ/size;
	printf("\nsrednee=%f",srednee);
	
	int kolvo=0;
	for(int i=0;i<size;i++){
		if(a[i]>srednee)
		kolvo++;
	}
	printf("\nkolichestvo=%d",kolvo);
}
//Определить количество элементов, значение которых больше среднего 
//значения всех элементов массива.