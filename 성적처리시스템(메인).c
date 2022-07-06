#include <stdio.h>
#include <stdlib.h>

#define A+ 4.5 
#define A 4.0
#define B+ 3.5
#define B 3.0
#define C+ 2.5
#define C 2.0
#define D+ 1.5
#define D 1.0
#define F 0
/*
개발자: alwaystaegi
개발기간:2022.07.06~2022.07.11
프로그램명: 성적처리프로그램
개발목적: 교수 및 교직원이 사용할 학생관리용 성적 처리프로그램

※성적 처리프로그램 메인 소스코드
-메인 소스코드 역할: 사용자가 사용할 기능을 선택하고 그 기능을 불러오는 역할


*/

typedef struct Student {
	char name[20];//이름
	char department[20];//학과
	int level;//학번
	float grade;
}Student;

int main() {
	Student s[1000];
	int random=0;
	for (int i = 0; i < 1000; i++) {
		random = rand() % 38663948;
		if (random < 10689959) strcpy(s[i].name, "김");
		else if (random < 17996787)strcpy(s[i].name, "이");
		else if (random < 22188861)strcpy(s[i].name, "박");
		else if (random < 24522788)strcpy(s[i].name, "최");
		else if (random < 26674667)strcpy(s[i].name, "정");
		else if (random < 27851514)strcpy(s[i].name, "강");
		else if (random < 28907081)strcpy(s[i].name, "조");
		else if (random < 29927628)strcpy(s[i].name, "윤");
		else if (random < 30920349)strcpy(s[i].name, "장");
		else if (random < 31744270)strcpy(s[i].name, "임");
		else if (random < 32517674)strcpy(s[i].name, "한");
		else if (random < 33280955)strcpy(s[i].name, "오");
		else if (random < 34032659)strcpy(s[i].name, "서");
		else if (random < 34773740)strcpy(s[i].name, "신");
		else if (random < 35479681)strcpy(s[i].name, "권");
		else if (random < 36176852)strcpy(s[i].name, "황");
		else if (random < 36862491)strcpy(s[i].name, "안");
		else if (random < 37545985)strcpy(s[i].name, "송");
		else if (random < 38105095)strcpy(s[i].name, "전");
		else strcpy(s[i].name, "홍");
		random = rand() % 2;
		if (random == 0) {
			random = rand() % 100658;
			if (random < 9426) strcat(s[i].name, "민준");
			else if(random<)


		
		}
		else if (random == 1) {
		
		
		}
		


	}



	system("pause");
	return 0;
}