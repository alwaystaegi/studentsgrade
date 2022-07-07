#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "university.h"
/*
������: alwaystaegi
���߱Ⱓ:2022.07.06~2022.07.11
���α׷���: ����ó�����α׷�
���߸���: ���� �� �������� ����� �л������� ���� ó�����α׷�

�ؼ��� ó�����α׷� ���� �ҽ��ڵ�
-���� �ҽ��ڵ� ����: ����ڰ� ����� ����� �����ϰ� �� ����� �ҷ����� ����


*/
void getinfo(FILE* fp, Student* s);
int ChartoInt(char num[]);
int CompareByname(const void* v1, const void* v2);
int CompareByLevel(const void* v1, const void* v2);
int sortbydepartment(const void* v1, const void* v2);
int main() {
	Student* s= (Student*)malloc(sizeof(Student)*1000);
	Department* d[20];
	FILE* fp;
	char text[100], * ptr;
	int x = 0,choice=0;
	fopen_s(&fp, "student.txt", "r");
	if (fp == NULL) {
		mkstdinfo();
		sleep(10);
	}
	getinfo(fp, s);
	while (1) {

		printf("�Ͻ� ������ �����ϼ���\n");
		scanf_s("%d", &choice);
		if (choice == 1) {
			qsort(s, 1000, sizeof(Student), CompareByname);

			for (int i = 0; i < 500; i++) {
				printf("%s %d %d %s", s[i].name, s[i].level, s[i].stnum, s[i].sex);
			}
		}
		else if (choice == 2) {
			qsort(s, 1000, sizeof(Student), CompareByLevel);
			for (int i = 0; i < 500; i++) {
				printf("%s %d %d %s", s[i].name, s[i].level, s[i].stnum, s[i].sex);
			}
		
		}

	}
	system("pause");
	return 0;
}

void getinfo(FILE* fp,Student* s) {
	int x = 0;
	char text[100];
	char* ptr;
	while (fgets(text, 100, fp) != EOF) {
		ptr = strtok(text, " ");
		strcpy(s[x].name, ptr);
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
int ChartoInt(char num[]) {
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