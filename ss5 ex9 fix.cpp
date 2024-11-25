#include<stdio.h>
int main(){
	int i, a=10;
	int number1, number2, number3;
	int total;
    do{
    	printf("MENU \n1.Nhap 3 so\n2.Tong 3 so\n3.Trung binh cong 3 so\n4.So lon nhat\n5.So nho nhat\n6.Thoat\n");
	    scanf("%d", &i);
	    if(i==6){
	    	break;
		}
	for(i=1;i<6;i++){
	    if(i==1){
	    	printf("\n \nMoi ban nhap so thu nhat : ");
	        scanf("%d", &number1);
	        printf("Moi ban nhap so thu hai : ");
	        scanf("%d", &number2);
	        printf("Moi ban nhap so thu ba : ");
	        scanf("%d", &number3);
		}
		if(i==2){
			total = number1 + number2 + number3;
			printf("Tong 3 so la : %d\n",total);
		}
		if(i==3){
			total = (number1 + number2 + number3) / 3;
			printf("Trung binh cong 3 so la : %d\n",total);
		}
		if(i==4){
			if(number1>number2 && number2>number3){
				printf("So nho nhat la : %d\n",number3);
			} else if(number1>number3 && number3>number2){
				printf("So nho nhat la : %d\n",number2);
			} else if(number2>number1 && number1>number3){
				printf("So nho nhat la : %d\n",number3);
			} else if(number2>number3 && number3>number1){
				printf("So nho nhat la : %d\n",number1);
			} else if(number3>number1 && number1>number2){
				printf("So nho nhat la : %d\n",number2);
			} else{
				printf("So nho nhat la : %d\n",number1);
			}
		}
		if(i==5){
			if(number1>number2 && number2>number3){
				printf("So lon nhat la : %d\n",number1);
			} else if(number1>number3 && number3>number2){
				printf("So lon nhat la : %d\n",number1);
			} else if(number2>number1 && number1>number3){
				printf("So lon nhat la : %d\n",number2);
			} else if(number2>number3 && number3>number1){
				printf("So lon nhat la : %d\n",number2);
			} else if(number3>number1 && number1>number2){
				printf("So lon nhat la : %d\n",number3);
			} else{
				printf("So lon nhat la : %d\n \n",number3);
			}
		}
	}
} while(a>0);
	return 0;
}
