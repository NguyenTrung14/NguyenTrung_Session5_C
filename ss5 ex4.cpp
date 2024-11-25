#include<stdio.h>
int main(){
	int number;
	printf("Moi ban nhap mot so nguyen duong tu 1 - 10 : ");
	scanf("%d", &number);
	int i;
	int product;
	for(i=1;i<11;i++){
		product = i * number;
		printf("%d\n",product);
	}
	return 0;
}
