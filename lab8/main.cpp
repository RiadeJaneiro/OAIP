#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct person{
	char last_name[30];
	char first_name[10];
	char middle_name[20];
	char home_address[50];
	int phone_number;
	int age;
};

struct person persons[5], temp;	//массивы структур
int n = 0;	//переменная, хранящая количество человек 

//Ввод массива структур
void addPerson(void){
	system("cls");  
	fflush(stdin);
	if(n < 5){
		printf("Person %d\n", n + 1);

		fputs("Enter last name: ", stdout);
		fflush(stdin);
		fgets(persons[n].last_name, 30, stdin);

		fputs("Enter first name: ", stdout);
		fflush(stdin);
		fgets(persons[n].first_name, 10, stdin);

		fputs("Enter middle name: ", stdout);
		fflush(stdin);
		fgets(persons[n].middle_name, 20, stdin);
	
		fputs("Enter home address: ", stdout);
		fflush(stdin);
		fgets(persons[n].home_address, 20, stdin);
	
		fputs("Enter phone number: +", stdout);
		fflush(stdin);
		scanf("%d", &persons[n].phone_number);
	
		fputs("Enter age: ", stdout);
		fflush(stdin);
		scanf("%d", &persons[n].age);
		n++;
	}
	else{
		printf("Maximum number of people entered\n");
	}
	
	printf("Enter 0 to return: ");
    int i;
    scanf("%d", &i);
    if(i == 0){
        return;
    }
}

//Поиск в массиве структур по заданному параметру
void searchLastName(char *last_name){
	system("cls");  
	fflush(stdin);
//	printf("Enter last name: ");
//	scanf("%s", last_name);
	for(int i = 0; i < 5; i++){
		while(_stricmp(last_name, persons[i].last_name) == 0){
			printf("First name: \n", persons[i].first_name);
			printf("Middle name: \n", persons[i].middle_name);
			printf("Home address: \n", persons[i].home_address);
			printf("Phone number: \n", persons[i].phone_number);
			printf("Age: \n", persons[i].age);
		}
	}
	printf("This last name was not found\n");
	printf("Enter 0 to return: ");
	int i;
	scanf("%d", &i);
	if(i == 0){
		return;
	}
}

//Изменение заданной структуры
void editPerson(void){
	system("cls");  
	fflush(stdin);
	int num;
	printf("Enter person number to edit: ");
	scanf("%d", &num);
	if(num > n){
		return;
	}
	printf("Enter last name: ");
	scanf("%s", persons[num].last_name);

	printf("Enter first name: ");
	scanf("%s", persons[num].first_name);

	printf("Enter middle name: ");
	scanf("%s", persons[num].middle_name);
	
	printf("Enter home address: ");
	scanf("%s", persons[num].home_address);
	
	printf("Enter phone number: +");
	scanf("%d", &persons[num].phone_number);
	
	printf("Enter age: ", stdout);
	scanf("%d", &persons[num].age);
}

//Удаление структуры из массива
void deletePerson(void){
	system("cls");  
	fflush(stdin);
	int num;
	printf("Enter person number to delete: ");
	scanf("%d", &num);
	if(num > n){	
		return;
	}
	printf("Are you sure you want to delete this person? (1 - Yes, 0 - No): ");
	int i;
	scanf("%d", &i);
	if(i != 0){
		for(int i = (num - 1); i < n; i++){
			persons[i] = persons[i + 1];
		}
		n--;
	}
}

//Вывод на экран массива структур
void showAllPersons(void){
	system("cls");  
	fflush(stdin);
	
	if(n == 0){
		printf("No records.\n");
	}
	
	//Сортировка массива структур
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(strcmp(persons[i].last_name, persons[j].last_name) > 0){
				temp = persons[i];
				persons[i] = persons[j];
				persons[j] = temp;
			}
		}
	}
	
	
	for(int i = 0; i < n; i++){
		printf("Person %d\n", i + 1);
		printf("Enter last name: %s", persons[i].last_name);
		printf("Enter first name: %s", persons[i].first_name);
		printf("Enter middle name: %s", persons[i].middle_name);
		printf("Enter home address: %s", persons[i].home_address);
		printf("Enter phone number: +%d\n", persons[i].phone_number);
		printf("Enter age: %d\n\n", persons[i].age);
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
		char last_name[20];
		printf("1.Add person\n");
		printf("2.Search last name\n");//*
		printf("3.Edit person\n");//*
		printf("4.Delete person\n");
		printf("5.Show all persons\n");
		printf("6.Exit\n");
		printf("Select number: ");
		int i;
		scanf("%d", &i);
		getchar();
		switch(i){
			case 1:	
				addPerson();
				break;
			case 2:
				printf("Enter last name: ", last_name);
				searchLastName(last_name);
				break;
			case 3:
				editPerson();
				break;
			case 4:
				deletePerson();
				break;
			case 5:
				showAllPersons();
				break;
			case 6:
				return;
		}
	}
}

int main(void){
	menu();
}