#include<stdio.h>

int main(){
	int num1 , num2 , num3 ;
	
	printf("ENTER A VALUE OF THE FIRST NUMBER :");
	scanf("%d",&num1);
	
	printf("ENTER A VALUE OF THE SECOND NUMBER :");
	scanf("%d",&num2);
	
	
	printf("ENTER A VALUE OF THE THREE NUMBER :");
	scanf("%d",&num3);
	
	if(num1<num2 && num1<num3){
		printf("THE MINIMAM VALUE IS %d",num1);
	}
	else if(num2<num3){
			printf("THE MINIMAM VALUE IS %d",num2);
	}
	else{
		printf("THE MINIMAM VALUE IS %d",num3);
	}
}
