#include<stdio.h>

unsigned long factorial(int x) {
	unsigned long sum=1;
	for (int i = x; i > 0; i--) {
		printf("%d", i);
		if (i > 1) {
			printf(" x ");
		}
		sum = sum * i;		
	}
	return sum;
}
int main() {
	int num;
	unsigned long f=0;
	printf("\n\nEnter number to find factorial  : ");
	scanf_s("%d", &num);
	if (num > 0) {
		printf("%d! = ", num);
		f = factorial(num);
	}
	else {
		printf("!!!!Caution!!!! : Math ERROR!!!\nInvalid value or negative number \nplease try agian\n");
		main();
	}
	printf(" = %d",f);
	return 0;
}