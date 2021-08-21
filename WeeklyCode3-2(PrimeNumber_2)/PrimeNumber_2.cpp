#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num, count = 2;
	printf("Enter Number : ");
	scanf("%d", &num);
	while (count <= num && num % count > 0) {
		count++;
	}
	if (count == num) {
		printf("Number %d is a prime number.", num);
	}
	else {
		printf("Number %d is not a prime number.", num);
	}
	return 0;
}