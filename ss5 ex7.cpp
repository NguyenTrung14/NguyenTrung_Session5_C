#include<stdio.h>
int main(){
	int number1, number2;
	printf("Moi ban nhap so nguyen thu nhat : ");
	scanf("%d", &number1);
	printf("Moi ban nhap so nguyen thu hai : ");
	scanf("%d", &number2);
	int min = number1 < number2 ? number1 : number2;
	for(int i = min;i>0;i--){
		if((number1 % i==0) && (number2 % i==0)){
			printf("Uoc chung lon nhat cua 2 so ban nhap la : %d",i);
			break;
		}
	}
	return 0;
}
