#include <stdio.h>
#include <stdlib.h>

//structure for storing a table elements
struct zap{
    int key;
    int info;
}data[5];

//hash function
int HashFunction(int k){
    return(k % 10 - 5);
}

//creating and displaying a table
int value(void){
    for(int i = 0; i < 5; i++){
        printf("Key = ");
        scanf("%d", &data[i].key);
        data[i].info = HashFunction(data[i].key);
        printf("Hash_Function(%d) = %d\n", data[i].key, data[i].info);
        if(i < 4){
        	printf("Enter 0 to return or 1 to continue: ");
        	int m;
        	scanf("%d", &m);
    	    printf("\n");
			if(m == 0){
            	return 0;
        	}
		}
    }
}

int main(){
    value();
    //removing elements with negative values
    for(int i = 0; i < 5; i++){
        if(data[i].key < 0){
            data[i].key = 0;
            data[i].info = 0;
        }
    }
    
    //output the new table
    printf("\nThe new table:\n");
	for(int i = 0; i < 5; i++){
		printf("%d: %d\n", data[i].key, data[i].info);
	}
	return 0;
}

/* Создать хеш - таблицу со случайными целыми ключами в
диапазоне от –10 до 10 и удалить из него записи с отрицательными
ключами. */
