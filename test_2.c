#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int j;
	printf("Enter number of rows : ");
	scanf("%d",&j);

	char array[j];

	for( int i = 0 ; i < j-1 ; i++){
		array[i] = ' ';
	}

	array[j] = '\0';

	for(int i = 0 ; i < j ; i++){
		array[i] = '*';
		printf("%s\n" , array);
	}

	return 0 ;

}
