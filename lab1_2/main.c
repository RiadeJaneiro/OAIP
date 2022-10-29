#include <stdio.h>
#include <stdlib.h>
#include <math.h>	//подключаем математические функции
#include <locale.h>	//подключаем библиотеку локализации (для русского языка в консоли)

void main(void) {
	setlocale(LC_ALL,"Russian");	//устанавливаем русскую локаль в программе
	
	float x,y,z,s,a,b,c,d;	//декларируем необходимые переменные
	
	//ввод переменных с клавиатуры
	
	printf("Enter variable x:");
	scanf("%f",&x);
	printf("Enter variable y:");
	scanf("%f",&y);
	printf("Enter variable z:");
	scanf("%f",&z);
	
	a=1+sin(x+y)*sin(x+y);
	b=fabs(x-2*y/(1+x*x*y*y));
	c=pow(x,fabs(y));
	d=cos(atan(1/z))*cos(atan(1/z));
	
	s=a/b*c+d;	//рассчитываем результат
	
	//вывод результата на экран
	printf("You entered x:%0.3f,y:%f,z:%f \n Result:%5.3e",x,y,z,s);
}