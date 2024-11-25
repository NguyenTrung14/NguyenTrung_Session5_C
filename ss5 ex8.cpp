#include<stdio.h>
int main(){
	int number1, number2;
	printf("Moi ban nhap so nguyen thu nhat : ");
	scanf("%d", &number1);
	printf("Moi ban nhap so nguyen thu hai : ");
	scanf("%d", &number2);
	int product1;
	int product2;
	for(int i = 1;i>0;i++){
		product1= number1 * i;
		product2= number2 * i;
		if(product1 % number2==0){
			printf("Boi chung nho nhat cua 2 so ban vua nhap la : %d",product1);
			break;
		}
		if(product2 % number1==0){
			printf("Boi chung nho nhat cua 2 so ban vua nhap la : %d",product2);
			break;
		}
	}
	return 0;
}
