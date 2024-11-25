#include<stdio.h>
int main(){
	int i = 14;
	int number;
	while(1){
		printf("Moi ban nhap so nguyen : ");
		scanf("%d", &number);
		if(number==i){
			break;
		}
	}
	return 0;
}
