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

struct person persons[5], temp;
int n = 0;

//1) Ввод массива структур;
void addPerson(void){
	system("cls");  
	fflush(stdin);
	for(n; n < 5; n++){
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
	
		fputs("Enter home adress: ", stdout);
		fflush(stdin);
		fgets(persons[n].home_address, 20, stdin);
	
		fputs("Enter phone number: +", stdout);
		fflush(stdin);
		scanf("%d", &persons[n].phone_number);
	
		fputs("Enter age: ", stdout);
		fflush(stdin);
		scanf("%d", &persons[n].age);
	
		printf("Stop (1 - Yes, 0 - No): ");
		int m;
		scanf("%d", &m);
		if(m == 1){
			break;
		}
	}
}

//2) Сортировка массива структур; *добаить в 6)*
void sort(struct personhumans[], int &n){
	system("cls");  
	fflush(stdin);
	for(int j = 0; j < n; j++){
		for(int i = 0; i < n - 1; i++){
			if(stricmp(persons[i].last_name, persons[i + 1].last_name) > 0){
				temp = persons[i];
				persons[i] = persons[i + 1];
				persons[i + 1] = temp;
			}
		}
	}
	
	printf("Rez: ");
	for(int i = 0; i < 5; i++){
		printf("\n\n");
		fputs(persons[i].last_name, stdout);
	}
}

//3) Поиск в массиве структур по заданному параметру;
void searchLastName(char *last_name){
	system("cls");  
	fflush(stdin);
	printf("Enter last name: ");
	scanf("%s", last_name);
	for(int i = 0; i < 5; i++){
		if (_stricmp(last_name, persons[i].last_name) == 0){
			printf("First name: \n", persons[i].first_name);
			printf("Middle name: \n", persons[i].middle_name);
			printf("Home adress: \n", persons[i].home_address);
			printf("Phone number: \n", persons[i].phone_number);
			printf("Age: \n", persons[i].age);
		}
		else{
			printf("This last name was not found\n");
			break;
		}
	}
}

//4) Изменение заданной структуры;
void editPerson(void){
	system("cls");  
	fflush(stdin);
	int num;
	printf("Enter person number to edit: ");
	scanf("%d", &num);
	if(num > n){
		return;
	}
	struct person persons[5];
	fputs("Enter last name: ", stdout);
	fflush(stdin);
	fgets(persons[n].last_name, 30, stdin);

	fputs("Enter first name: ", stdout);
	fflush(stdin);
	fgets(persons[n].first_name, 10, stdin);

	fputs("Enter middle name: ", stdout);
	fflush(stdin);
	fgets(persons[n].middle_name, 20, stdin);
	
	fputs("Enter home adress: ", stdout);
	fflush(stdin);
	fgets(persons[n].home_address, 20, stdin);
	
	fputs("Enter phone number: +", stdout);
	fflush(stdin);
	scanf("%d", &persons[n].phone_number);
	
	fputs("Enter age: ", stdout);
	fflush(stdin);
	scanf("%d", &persons[n].age);
}

//5) Удаление структуры из массива;
void deletePerson(void){
	system("cls");  
	fflush(stdin);
	int num;
	printf("Enter person number to delete: ");
	scanf("%n", &num);
	if(num > n){
		return;
	}
	printf("Are you sure you want to delete this person? (1 - Yes, 0 - No)");
	int i;
	scanf("%d", &i);
	if(i != 0){
		for(int i = (num - 1); i < n; i++){
			persons[i] = persons[i + 1];
		}
		n--;
	}
}

//6) Вывод на экран массива структур;
void showAllPersons(void){
	system("cls");  
	fflush(stdin);
	for(int i = 0; i < n; i++){
		printf("Person %d\n", i + 1);

		fputs("Enter last name: ", stdout);
		fflush(stdin);
		fgets(persons[i].last_name, 30, stdin);

		fputs("Enter first name: ", stdout);
		fflush(stdin);
		fgets(persons[i].first_name, 10, stdin);

		fputs("Enter middle name: ", stdout);
		fflush(stdin);
		fgets(persons[i].middle_name, 20, stdin);
	
		fputs("Enter home adress: ", stdout);
		fflush(stdin);
		fgets(persons[i].home_address, 20, stdin);
	
		fputs("Enter phone number: +", stdout);
		fflush(stdin);
		scanf("%d", &persons[i].phone_number);
	
		fputs("Enter age: ", stdout);
		fflush(stdin);
		scanf("%d", &persons[i].age);
	
	}
}

int main(void) {
	char last_name[20];
	printf("1.Add person\n");
	printf("2.Search last name\n");
	printf("3.Edit person\n");
	printf("4.Delete person\n");
	printf("5.Show all persons\n");
	printf("6.Exit\n");
	printf("Select number: ");
	int i;
	scanf("%d", &i);
	switch(i){
		case 1:
			addPerson();
			break;
		case 2:
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
		defoult:
			break;
	}
}