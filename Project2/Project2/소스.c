#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"university.h"

void mksubject() {
	Subject c;
	FILE* fp1;
	fopen_s(&fp1, "student.txt", "r+");

	printf("������� �Է����ּ���:");
	scanf_s("%s", &c.name);
	do {
		printf("����/���� ���θ� �Է����ּ���\n�����̸� 1,�����̸�0:");
		scanf_s("%d", &c.major);
		if (c.major != 1 && c.major != 0) {
			printf("�� �� �Է��Ͽ����ϴ�.");
		}
	} while (c.major != 0 && c.major != 1);
	printf("%s������ ������ �Է��� �ּ���:",c.name);
	scanf_s("%d", &c.time);
	printf("%s������ �йݰ����� �����ּ��� : ",c.name);
	scanf_s("%d", &c.devide);




}