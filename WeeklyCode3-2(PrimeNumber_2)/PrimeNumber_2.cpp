#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num, count = 2; // �������� 2 ���� ��ͧ�Ѻ�Ţ 1 �Ѻ ����ѹ�ͧ����
	printf("Enter Number : ");
	scanf("%d", &num);
	while (count <= num && num % count > 0) {
		count++;
	}
	if (count == num) { // �������������� 2 Prime Number (count �������ҡѺ num) 
		printf("Number %d is a prime number.", num);
	}
	else {
		printf("Number %d is not a prime number.", num);
	}
	return 0;
}