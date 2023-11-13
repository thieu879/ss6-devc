#include <stdio.h>
int main(){
	int number1,number2;
	for(number1=1;1<=number1 && number1<=9;number1++){
		printf("******BANG NHAN %d******",number1);
		for(number2=0;number2<=10;number2++){
			printf("\n%d * %d = %d\n",number1,number2,number1*number2);
		} 
	}
}
