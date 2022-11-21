#include <conio.h>
#include <stdio.h>

void main(){
	int size=15;
	int a[size];
	unsigned i;
	int max, min, q, m;
	
	for(i=0;i<size;i++){
		a[i]=rand()%10;
		printf("%d ",a[i]);
	}

	max=a[0];
	for(i=0;i<10;i++){
		if(a[i]>max){
			max=a[i];
			q=i;
		}
	}

	printf("\n");
	
	min=a[0];
	for(i=0;i<10;i++){
		if(a[i]<min){
			min=a[i];
			m=i;
		}	
	}
 
	a[q]=min;
	a[m]=max;

	for(i=0;i<size;i++){
	printf("%d ",a[i]);
	}
	return(0);	
}