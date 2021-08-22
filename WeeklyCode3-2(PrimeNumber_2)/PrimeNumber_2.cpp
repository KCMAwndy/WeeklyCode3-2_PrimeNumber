#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num, count = 2; // เริ่มที่ 2 เพราะ ต้องนับเลข 1 กับ ตัวมันเองด้วย
	printf("Enter Number : ");
	scanf("%d", &num);
	while (count <= num && num % count > 0) {
		count++;
	}
	if (count == num) { // ถ้าไม่เริ่มที่ 2 Prime Number (count จะไม่เท่ากับ num) 
		printf("Number %d is a prime number.", num);
	}
	else {
		printf("Number %d is not a prime number.", num);
	}
	return 0;
}