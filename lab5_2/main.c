#include <stdio.h>
#include <stdlib.h>

void main(void){
	int b[6][6];
	int i,j;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
		b[i][j]=rand()%10;
		printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	 
	int a[i];
	int sum_min=0;
	int min=b[0][0];
	for(i=0;i<6;i++){
		if(i==0||i==2||i==4){
			min=b[i][0];
			for(j=0;j<6;j++){
			if (b[i][j]<min)
			min=b[i][j];
			sum_min+=min;
			}
		a[i]=min;
		printf("min a[%d]:%d \n",i+1,min);
		}
	}
	printf("sum=%d\n\n",sum_min);
	
	int sum_max=0;
	int max=b[0][0];
	for(i=0;i<6;i++){
		if(i==1||i==3||i==5){
			min=b[i][0];
			for(j=0;j<6;j++){
			if (b[i][j]>max)
			max=b[i][j];
			}
		a[i]=max;
		printf("max a[%d]:%d \n",i+1,max);
		
		}
	}
	for(i=0;i<6;i++)
	 for(j=0;j<6;j++)
	  sum_max+=max;	
	printf("sum=%d",sum_max);

}

//Дана матрица размером 6 x 6. Найти сумму наименьших элементов ее
//нечетных строк и наибольших элементов ее четных строк.