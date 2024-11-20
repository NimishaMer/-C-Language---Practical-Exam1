#include<stdio.h>

int main(){
	int a , b ;
	
	printf("ENTER VALUE FOR A :");
	scanf("%d",&a);
	
	printf("ENTER VALUE FOR B :");
	scanf("%d",&b);
	
	printf("BEFOR SWAP :A=%d , B=%d\n ",a , b);
	
a=a+b;
b=a-b;
a=a-b;
	

	
	printf("AFTER SWAP :A=%d B=%d\n ",a ,b);
	
	return 0;
}
