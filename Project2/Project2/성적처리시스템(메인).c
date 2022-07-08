
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "university.h"
/*
개발자: alwaystaegi
개발기간:2022.07.06~2022.07.11
프로그램명: 성적처리프로그램
개발목적: 교수 및 교직원이 사용할 학생관리용 성적 처리프로그램

※성적 처리프로그램 메인 소스코드
-메인 소스코드 역할: 사용자가 사용할 기능을 선택하고 그 기능을 불러오는 역할


*/
void getinfo(FILE* fp, Student* s);
int ChartoInt(char num[]);
int CompareByname(const void* v1, const void* v2);
int CompareByLevel(const void* v1, const void* v2);
int sortbydepartment(const void* v1, const void* v2);
int main() {
	Student* s = (Student*)malloc(sizeof(Student) * 1000);
	Department* d[20];
	FILE* fp;
	char text[100], * ptr;
	int x = 0, choice = 0;
	fopen_s(&fp, "student.txt", "r");
	if (fp == NULL) {
		mkstdinfo();
		fopen_s(&fp, "student.txt", "r");
	}

	else {
		getinfo(fp, s);
	}
	while (1) {

		printf("하실 업무를 선택하세요\n");
		scanf_s("%d", &choice);
		if (choice == 1) {
			qsort(s, 1000, sizeof(Student), CompareByname);

			for (int i = 0; i < 1000; i++) {
				printf("%s %d %d %s", s[i].name, s[i].level, s[i].stnum, s[i].sex);
			}
		}
		else if (choice == 2) {
			qsort(s, 1000, sizeof(Student), CompareByLevel);
			for (int i = 0; i < 1000; i++) {
				printf("%s %d %d %s", s[i].name, s[i].level, s[i].stnum, s[i].sex);
			
				printf("오류발생부분 :%d \n", i);
			
			}
		}

		else if (choice == 3)getinfo(fp, s);

	}
	system("pause");
	return 0;
}

void getinfo(FILE* fp,Student* s) {
	int x = 0;
	char text[100];
	char* ptr;
	char temp[1000];
	while (fgets(text, 100, fp) != EOF) {
		ptr = strtok(text, " ");
		strcpy(s[x].name,ptr);
		ptr = strtok(NULL, " ");
		if (ptr == NULL)break;
		s[x].level = ChartoInt(ptr);
		ptr = strtok(NULL, " ");
		s[x].stnum = ChartoInt(ptr);
		ptr = strtok(NULL, " ");
		strcpy(s[x].sex, ptr);
		x++;
	}
}
int ChartoInt(char* num) {
	int i = 0;
	int value=0;
	while (num[i] != 0||num[i]!=NULL) {
		value *= 10;
		value += num[i]-48;
		i++;

	}
	return value;
}


int CompareByname(const void* v1, const void* v2) {
	const Student* s1 = (const Student*)v1;
	const Student* s2 = (const Student*)v2;
	return strcmp(s1->name, s2->name);

}
int CompareByLevel(const void* v1, const void* v2) {
	const Student* s1 = (const Student*)v1;
	const Student* s2 = (const Student*)v2;
	return s1->level / 1000000 - s1->level / 1000000;
}
int sortbydepartment(const void* v1, const void* v2) {



}