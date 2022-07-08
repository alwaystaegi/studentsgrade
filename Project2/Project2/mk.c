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

	printf("과목명을 입력해주세요:");
	scanf("%s", &c.name);
	do {
		printf("전공/교양 여부를 입력해주세요\n전공이면 1,교양이면0:");
		scanf_s("%d", &c.major);
		if (c.major != 1 && c.major != 0) {
			printf("잘 못 입력하였습니다.");
		}
	} while (c.major != 0 && c.major != 1);
	if (c.major == 1) {
		while (1) {
			printf("전공과목의 학과번호를 입력해주세요(0을 입력하면 학과번호의 정보가 출력됩니다.):");
			scanf("%s", dep);
			if (dep == 0) {
				printf("컴퓨터공학부: 243\n");
				printf("글로벌자율전공학부: 470\n");
				printf("국제관계학과: 646\n");
				printf("신소재공학과: 727\n");
				printf("건축학부: 741\n");
				printf("글로벌한국학과: 605\n");
				printf("간호학과: 540\n");
				printf("응급구조학과: 570\n");
				printf("법경찰학과: 682\n");
				printf("치위생학과: 560\n");
			}
			{
				for (int i = 0; i < 10; i++) {
				
				}
			}

		}
	}
	printf("%s과목의 학점을 입력해 주세요:",c.name);
	scanf_s("%d", &c.time);
	printf("%s과목의 분반개수를 정해주세요 : ",c.name);
	scanf_s("%d", &c.devide);
	printf("입력하신 정보를 바탕으로 랜덤으로 20명의 학생을 배치합니다.\n전공과목의 경우 해당전공학생이 배치될 확률이 높습니다.\n");
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