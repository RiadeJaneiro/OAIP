#include<stdio.h>
#include<conio.h>
#include<string.h>

//struct name{
//	char last_name[30];
//	char first_name[10];
//	char middle_name[20];
//};

struct human{
//	struct name people;
	char last_name[30];
	char first_name[10];
	char middle_name[20];
	char home_address[50];
	int phone_number;
	int age;
};

struct human humans[30], temp;

int addHumans(void){
	for(int n = 0; n < 30; n++){
		printf("Human %d\n", n + 1);

		fputs("Enter last name: ", stdout);
		fflush(stdin);
		fgets(humans[n].last_name, 30, stdin);

		fputs("Enter first name: ", stdout);
		fflush(stdin);
		fgets(humans[n].first_name, 10, stdin);

		fputs("Enter middle name: ", stdout);
		fflush(stdin);
		fgets(humans[n].middle_name, 20, stdin);
	
		fputs("Enter home adress: ", stdout);
		fflush(stdin);
		fgets(humans[n].home_address, 20, stdin);
	
		fputs("Enter phone number: +", stdout);
		fflush(stdin);
		scanf("%d", &humans[n].phone_number);
	
		fputs("Enter age: ", stdout);
		fflush(stdin);
		scanf("%d", &humans[n].age);
	
		printf("Stop (0 - Yes, 1 - No): ");
		int m;
		scanf("%d", &m);
		if(m == 0){
			break;
		}
	}
}

void sort(struct humans[], int &n){
	for(int j = 0; j < n; j++){
		for(int i = 0; i < n - 1; i++){
			if(stricmp(humans[i].last_name, humans[i + 1].last_name) > 0){
				temp = humans[i];
				humans[i] = humans[i + 1];
				humans[i + 1] = temp;
			}
		}
	}
	
	printf("Rez: ");
	for(int i = 0; i < 30; i++){
		printf("\n\n");
		fputs(humans[i].last_name, stdout);
	}
}

int main(void) {
	printf("Hello world");
	addHumans();
	void sort(struct humans[], int &n);

}