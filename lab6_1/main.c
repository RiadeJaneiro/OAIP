#include <stdio.h>
#include <stdlib.h>

void main(void){
	int i,kol=0,n;
	float b[30],s=0,max;
	do{
		printf("Vvedite kol-vo elementov massiva(<30):");
		scanf("%d",&n);
	}while(n>=30);
	for(i=0;i<n;i++){
		printf("Vvedite element [%d]:",i+1);
		scanf("%f",b+i);
	}
	
	max=*b;
	for(i=0;i<n;i++)
	if(*(b+i)>max)
	max=*(b+i);
	printf("Max element matrici:%.2f\n",max);
	
	for(i=0;i<n;i++){
		if(*(b+i)>0)
		s+=*(b+i);
		 else break;
	}
	printf("Summa elementov matrici=%.2f\n",s);
}

//В одномерном массиве, состоящем из n вещественных элементов, 
//вычислить:
//- максимальный элемент массива;
//- сумму элементов массива, расположенных до последнего 
//положительного элемента.