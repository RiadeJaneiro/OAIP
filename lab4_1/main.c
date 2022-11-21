#include <conio.h>
#include <stdio.h>

void main(){
int a[10]={1, 2, 5, 3, 9, 6, 7, 7, 2, 4};
unsigned i;
int max, min, q, m;

max=a[0];
for(i=0;i<10;i++){
	if(a[i]>max){
		max=a[i];
		q=i;
	}
}

min=a[0];
for(i=0;i<10;i++){
	if(a[i]<min){
		min=a[i];
		m=i;
	}	
}
 
a[q]=min;
a[m]=max;

for(int i=0;i<10;i++){
	printf("%d ",a[i]);
}
return(0);	//писать или не писать и зачем?
}