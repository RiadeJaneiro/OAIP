#include <stdio.h>
#include <stdlib.h>
#include <math.h>	//подключаем математические функции
#include <locale.h>	//подключаем библиотеку локализации (для русского языка в консоли)

void main(void) {
	setlocale(LC_ALL,"Russian");	//подключаем русскую локаль в программе
	
	float x,a,z;	//декларируем необходимые переменные
	
	//ввод переменных с клавиатуры
	
	printf("Enter a variable x>0:");
	scanf("%f",&x);
	
	a=pow(x,5);	//преобразуем градусы в радианы.
	
	z=8*a;			//рассчитываем результат
	
	//вывод результата на экран
	printf("You have entered x:%0.3f \n Результат:%5.3e",z);
}
