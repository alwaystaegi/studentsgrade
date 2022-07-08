

#pragma once


typedef struct Student {
	char name[24];//이름
	int level;//학년
	int stnum;//학번
	char sex[6];//성별
}Student;
typedef struct Department {
	Student s[200];
	char name[24];
	int num;//학과의 번호ex)컴공 243
}Department;

typedef struct Subject {
	Student s[200];//수업을 듣는 학생수
	char name[24];
	int major;// 0: 교양수업 1: 전공수업 
	int time;//학점
	int devide;//분반
}Subject;



