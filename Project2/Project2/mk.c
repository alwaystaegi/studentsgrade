#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"university.h"

void mksubject(Student* s) {
	Subject c;
	FILE* fp1;
	int r;
	int count[1000] = {0};
	char dep[20];
	fopen_s(&fp1, "student.txt", "r+");

	printf("������� �Է����ּ���:");
	scanf("%s", &c.name);
	do {
		printf("����/���� ���θ� �Է����ּ���\n�����̸� 1,�����̸�0:");
		scanf_s("%d", &c.major);
		if (c.major != 1 && c.major != 0) {
			printf("�� �� �Է��Ͽ����ϴ�.");
		}
	} while (c.major != 0 && c.major != 1);
	if (c.major == 1) {
		while (1) {
			printf("���������� �а���ȣ�� �Է����ּ���(0�� �Է��ϸ� �а���ȣ�� ������ ��µ˴ϴ�.):");
			scanf("%s", dep);
			if (dep == 0) {
				printf("��ǻ�Ͱ��к�: 243\n");
				printf("�۷ι����������к�: 470\n");
				printf("���������а�: 646\n");
				printf("�ż�����а�: 727\n");
				printf("�����к�: 741\n");
				printf("�۷ι��ѱ��а�: 605\n");
				printf("��ȣ�а�: 540\n");
				printf("���ޱ����а�: 570\n");
				printf("�������а�: 682\n");
				printf("ġ�����а�: 560\n");
			}
			{
				for (int i = 0; i < 10; i++) {
				
				}
			}

		}
	}
	printf("%s������ ������ �Է��� �ּ���:",c.name);
	scanf_s("%d", &c.time);
	printf("%s������ �йݰ����� �����ּ��� : ",c.name);
	scanf_s("%d", &c.devide);
	printf("�Է��Ͻ� ������ �������� �������� 20���� �л��� ��ġ�մϴ�.\n���������� ��� �ش������л��� ��ġ�� Ȯ���� �����ϴ�.\n");
	for (int i = 0; i < 20; i++) {
		r = rand() % 1000;
		if (count[r] == 1) {

			while (count[r] != 1) { r = rand() % 1000; 
			}
		}
		printf("%s\n", s[r].name);
		c.s[i] = s[r];

	}



}