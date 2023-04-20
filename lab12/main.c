#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TABLE_SIZE 7

//structure for storing a table elements
typedef struct{
	int key;
	char *value;
}item;

//hash function
int hash(int key){
	return key % TABLE_SIZE;
}

int main(void){
	//creating a table
	item items[] = {{1, "foo"}, {-4, "bar"}, {6, "bazz"}, {10, "buzz"},
        			{9, "bob"}, {-5, "jane"}, {-7, "x"}}; 
    
	//output the original table
	printf("The original table:\n");
	for (int i = 0; i < TABLE_SIZE; i++){
		printf("%d: %d\n", items[i].key, items[i].value);
	}
  
	//removing elements with negative keys
	for(int i = 0; i < TABLE_SIZE; i++){
		if (items[i].key < 0){
    		items[i].key = 0;
    		items[i].value = 0;
		}
  	}
  
	//output the new table
	printf("\nThe new table:\n");
	for(int i = 0; i < TABLE_SIZE; i++){
		printf("%d: %d\n", items[i].key, items[i].value);
	}
//	getchar();
	return 0;
}

/* Создать хеш - таблицу со случайными целыми ключами в
диапазоне от –10 до 10 и удалить из него записи с отрицательными
ключами. */
