#include<stdio.h>
int main(){
	int number1, number2;
	printf("Moi ban nhap so thu nhat : ");
	scanf("%d", &number1);
	printf("Moi ban nhap so thu hai : ");
	scanf("%d", &number2);
	int i;
	printf("1.Tong 2 so \n2.Hieu 2 so \n3.Tich 2 so \n4.Thuong 2 so \n5.Thoat \n");
	printf("\n \nLua chon cua ban la : ");
	scanf("%d", &i);
	int a;
	switch(i){
		case 1:
			a = number1 + number2;
			printf("Tong 2 so la : %d",a);
			break;
		case 2:
			a = number1 - number2;
			printf("Hieu 2 so la : %d",a);
			break;
		case 3:
			a = number1 * number2;
			printf("Tich 2 so la : %d",a);
			break;
		case 4:
			a = number1 / number2;
			printf("Thuong 2 so la : %d",a);
			break;
		case 5:
			break;
		default:
			printf("Sai dinh dang");
			break;
	}
	return 0;
}
