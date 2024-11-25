#include<stdio.h>
int main(){
	int number;
	printf("Moi ban nhap mot so nguyen bat ki : ");
	scanf("%d", &number);
	while(number>0){
    printf("%d  ",number%10);
    number/=10;
	}
	return 0;
}
