#include<stdio.h>

int main(){
	int f , w = 1 ;
	
	printf("ENTER ANY NUMBER : ");
	scanf("%d",&f);
	
	do{
		printf("%d",w);
		w+=2;
			printf("\n");
	}
	while(w<=f);
	

	
	return 0;

}
