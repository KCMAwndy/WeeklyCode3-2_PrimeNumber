#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num, count = 2; // count begins at 2 because it must count at 1 and itself.
	printf("Input a number : ");
	scanf("%d", &num);
	while (count <= num && num % count > 0) {
		count++;
	}
	if (count == num) { // if count does't begin at 2 ,Prime number will not shown (count not equal to num).
		printf("%d is a prime number.", num);
	}
	else {
		printf("%d is not a prime number.", num);
	}
	return 0;
}
