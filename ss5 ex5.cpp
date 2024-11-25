#include<stdio.h>
int main(){
	int number;
	int product;
	printf("Bang cuu chuong toan hoc : \n");
	for(number=1;number<10;number++){
		for(int i=1;i<11;i++){
			if(i==1){
				printf("\n \nBang cuu chuong so %d \n ",number);
			}
			product = number * i;
			printf("%d  ",product);
			if(i==10){
				printf("\n");
				break;
			}
		}
	}
	return 0;
}
