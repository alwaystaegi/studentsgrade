

#pragma once


typedef struct Student {
	char name[24];//�̸�
	int level;//�г�
	int stnum;//�й�
	char sex[6];//����
}Student;
typedef struct Department {
	Student s[20];
	char name[24];
	int num;//�а��� ��ȣex)�İ� 243
}Department;

typedef struct Subject {
	Student s[20];//������ ��� �л���
	char name[24];
	int major;// 0: ������� 1: �������� 
	int time;//����
	int devide;//�й�
}Subject;



