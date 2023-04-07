#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct state{
	char name[20];
	char capital[20];
	int population;
	int area;
}states[5];

int state_num = 0;	//переменная, хранящая кол-во государств

void addState(void){	//добавление государства
	system("cls");  
	fflush(stdin);
	if(state_num < 5){
		printf("State %d\n", state_num + 1);
		fputs("Enter name: ", stdout);
		fgets(states[state_num].name, 20, stdin);
		fputs("Enter capital: ", stdout);
		fgets(states[state_num].capital, 20, stdin);
		fputs("Enter population (mln): ", stdout);
		scanf("%d", &states[state_num].population);
		printf("Enter area (m^2): ", stdout);
		scanf("%d", &states[state_num].area);
		state_num++;
	}
	else{
		printf("Maximum number of people entered\n");
	}
	fputs("Enter 0 to return: ", stdout);
	int i;
	scanf("%d", &i);
	if(i == 0){
		return;
	}
}

void searchName(void){	//поиск по названию государства
	system("cls");  
	fflush(stdin);
	char name[20];
	
	if(state_num == 0){
		return;
	}
	
	printf("Enter name: ");
	fgets(name, 20, stdin);
	for(int i = 0; i < state_num; i++){
		if(strcmp(name, states[i].name) == 0){
			printf("Capital: %s", states[i].capital);
			printf("Populatin (mln): %d\n", states[i].population);
			printf("Area (m^2): %d\n", states[i].area);
		}
		else{
			printf("Not found\n");
		}
	}
	printf("Enter 0 to return: ");
	int i;
	scanf("%d", &i);
	if(i == 0){
		return;
	}
}

void showAllStates(void){	//список всех государств
	system("cls");  
	fflush(stdin);
	
	if(state_num == 0){
		printf("No records\n");
	}
	
	for(int i = 0; i < state_num; i++){
		printf("State %d\n", i + 1);
		printf("Name: %s", states[i].name);
		printf("Capital: %s", states[i].capital);
		printf("Population (mln): %d\n", states[i].population);
		printf("Area (m^2): %d\n", states[i].area);
	}
	printf("Enter 0 to return: ");
	int i;
	scanf("%d", &i);
	if(i == 0){
		return;
	}
}

void menu(void){
	while(1){
		system("cls");
		fflush(stdin); 
		printf("1. Add state\n");
		printf("2. Search by state name\n");
		printf("3. Show all states\n");
		printf("4. Exit\n");
		printf("Select number: ");
		int i;
		scanf("%d", &i);
		switch(i){
			case 1:
				addState();
				break;
			case 2:
				searchName();
				break;
			case 3:
				showAllStates();
				break;
			case 4:
				return;
		}
	}
}

int load(void){		//загрузка файла
	FILE *f = fopen("file.txt", "rb");  //открываем файл для чтения
    if(f != NULL){
    	printf("File created successfully\n");
    	fread(&state_num, sizeof(int), 1, f);  
    	if (state_num > 100){
    	printf("Invalid file format");
    	exit(0);
    	}
    	if (state_num > 0) {
    	fread(states, sizeof(struct state), state_num, f);
    	}
    	fclose(f);  //закрываем файл 
    	return 1;
	}
	else{
		fprintf(stdout, "Failed to open file: f\n");
	}
	return 0;
}

void save(void){	//сохранение записей в файле
	FILE *f = fopen("file.txt", "wb");   //открываем файл для записи
	fwrite(&state_num, sizeof(int), 1, f);
	if(state_num > 0){
		fwrite(states, sizeof(struct state), state_num, f);
	}
	fclose(f);   //закрываем файл
}

int main(void){
	if(load()){
		menu();
	}
	save();
}

//#Сформировать бинарный файл из элементов, заданной в варианте структуры, 
//****распечатать его содержимое, 
//#выполнить добавление элементов в соответствии со своим вариантом и поиск по
//#одному из параметров (например, по фамилии, по государственному номеру, по году рождения и
//#т.д.). 
//#Формирование, печать, добавление, поиск элементов оформить и выбор желаемого действия
//#оформить в виде функций. Предусмотреть сообщения об ошибках при открытии файла и
//****выполнении операций ввода/вывода.