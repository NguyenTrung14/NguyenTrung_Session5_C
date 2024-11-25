#include<stdio.h>
int main(){
	int number;
	int total = 0;
	printf("Moi ban nhap vao 1 so nguyen duong : ");
	scanf("%d", &number);
	for(int i=1;i<(number+1);i++){
		total = total + i;
	}
	printf("Tong cac so tu 1 den so ban vua nhap la : %d",total);
	return 0;
}
