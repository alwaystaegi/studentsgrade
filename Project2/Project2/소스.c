#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"university.h"

void mksubject() {
	Subject c;
	FILE* fp1;
	fopen_s(&fp1, "student.txt", "r+");

	printf("과목명을 입력해주세요:");
	scanf_s("%s", &c.name);
	do {
		printf("전공/교양 여부를 입력해주세요\n전공이면 1,교양이면0:");
		scanf_s("%d", &c.major);
		if (c.major != 1 && c.major != 0) {
			printf("잘 못 입력하였습니다.");
		}
	} while (c.major != 0 && c.major != 1);
	printf("%s과목의 학점을 입력해 주세요:",c.name);
	scanf_s("%d", &c.time);
	printf("%s과목의 분반개수를 정해주세요 : ",c.name);
	scanf_s("%d", &c.devide);




}