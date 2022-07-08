#include<stdio.h>
#include<stdlib.h>
#include"university.h"

void mkstdinfo() {
	FILE* fp;
	fopen_s(&fp,"student.txt", "w+");

	Student* student[1000];
	Student s;
	Department d[10];


	int firstname = 0;
	int sex = 0;
	int lastname = 0;
	int age = 0;;
	int department = 0;
	int dcount[10] = { 1,1,1,1,1,1,1,1,1,1 };
	int level;
	srand((unsigned int)time(NULL));

	if (fp == NULL)return 0;

	strcpy(d[0].name,"컴퓨터공학부");
	d[0].num = 243000;

	strcpy(d[1].name, "글로벌자율전공학부");
	d[1].num = 470000;

	strcpy(d[2].name, "국제관계학과");
	d[2].num = 646000;
	strcpy(d[3].name, "신소재공학과");
	d[3].num = 727000;
	strcpy(d[4].name, "건축학부");
	d[4].num = 741000;
	strcpy(d[5].name, "글로벌한국학과");
	d[5].num = 605000;
	strcpy(d[6].name, "간호학과");
	d[6].num = 540000;
	strcpy(d[7].name, "응급구조학과");
	d[7].num = 570000;
	strcpy(d[8].name, "법경찰학과");
	d[8].num = 682000;
	strcpy(d[9].name, "치위생학과");
	d[9].num = 560000;
	


	for (int i = 0; i < 1000; i++) {
		firstname = rand() * rand() * rand() % 38663948;
		sex = rand() % 2;
		age = rand() % 5;
		if (firstname < 10689959) strcpy(s.name, "김");
		else if (firstname < 17996787)strcpy(s.name, "이");
		else if (firstname < 22188861)strcpy(s.name, "박");
		else if (firstname < 24522788)strcpy(s.name, "최");
		else if (firstname < 26674667)strcpy(s.name, "정");
		else if (firstname < 27851514)strcpy(s.name, "강");
		else if (firstname < 28907081)strcpy(s.name, "조");
		else if (firstname < 29927628)strcpy(s.name, "윤");
		else if (firstname < 30920349)strcpy(s.name, "장");
		else if (firstname < 31744270)strcpy(s.name, "임");
		else if (firstname < 32517674)strcpy(s.name, "한");
		else if (firstname < 33280955)strcpy(s.name, "오");
		else if (firstname < 34032659)strcpy(s.name, "서");
		else if (firstname < 34773740)strcpy(s.name, "신");
		else if (firstname < 35479681)strcpy(s.name, "권");
		else if (firstname < 36176852)strcpy(s.name, "황");
		else if (firstname < 36862491)strcpy(s.name, "안");
		else if (firstname < 37545985)strcpy(s.name, "송");
		else if (firstname < 38105095)strcpy(s.name, "전");
		else strcpy(s.name, "홍");
		if (sex == 0) {
			strcpy(s.sex,"Male");
			lastname = rand() * rand() % 415;
			if (lastname < 10) strcat(s.name, "민준");
			else if (lastname < 10)strcat(s.name, "지훈");
			else if (lastname < 20)strcat(s.name, "현우");
			else if (lastname < 30)strcat(s.name, "준서");
			else if (lastname < 40)strcat(s.name, "예준");
			else if (lastname < 50)strcat(s.name, "건우");
			else if (lastname < 60)strcat(s.name, "현준");
			else if (lastname < 70)strcat(s.name, "지후");
			else if (lastname < 80)strcat(s.name, "우진");
			else if (lastname < 90)strcat(s.name, "서준");
			else if (lastname < 100)strcat(s.name, "준혁");
			else if (lastname < 110)strcat(s.name, "지호");
			else if (lastname < 120)strcat(s.name, "시우");
			else if (lastname < 130)strcat(s.name, "도현");
			else if (lastname < 140)strcat(s.name, "민재");
			else if (lastname < 150)strcat(s.name, "승민");
			else if (lastname < 160)strcat(s.name, "민성");
			else if (lastname < 170)strcat(s.name, "동현");
			else if (lastname < 180)strcat(s.name, "승현");
			else if (lastname < 190)strcat(s.name, "준우");
			else if (lastname < 200)strcat(s.name, "재승");
			else if (lastname < 210)strcat(s.name, "원오");
			else if (lastname < 220)strcat(s.name, "지용");
			else if (lastname < 230)strcat(s.name, "수용");
			else if (lastname < 240)strcat(s.name, "한위");
			else if (lastname < 250)strcat(s.name, "태현");
			else if (lastname < 260)strcat(s.name, "지원");
			else if (lastname < 270)strcat(s.name, "동영");
			else if (lastname < 280)strcat(s.name, "감자");
			else if (lastname < 290)strcat(s.name, "우민");
			else if (lastname < 300)strcat(s.name, "경수");
			else if (lastname < 310)strcat(s.name, "현민");
			else if (lastname < 320)strcat(s.name, "어흥");
			else if (lastname < 330)strcat(s.name, "흥민");
			else if (lastname < 340)strcat(s.name, "다니엘");
			else if (lastname < 350)strcat(s.name, "지성");
			else if (lastname < 360)strcat(s.name, "정우");
			else if (lastname < 370)strcat(s.name, "기웅");
			else if (lastname < 380)strcat(s.name, "승재");
			else if (lastname < 390)strcat(s.name, "강인");
			else if (lastname < 400)strcat(s.name, "다운");
			else if (lastname < 410)strcat(s.name, "우람");
			else if (lastname < 411)strcat(s.name, "효택");
			else if (lastname < 412)strcat(s.name, "돼지와 함께 춤을");
			else if (lastname < 413)strcat(s.name, "꾼가");
			else if (lastname < 414)strcat(s.name, "항아리");
			else if (lastname < 415)strcat(s.name, "찌르레기");
		}
		else if (sex == 1) {
			strcpy(s.sex, "Female");
			lastname = rand() * rand() % 415;
			if (lastname < 10) strcat(s.name, "서연");
			else if (lastname < 20)strcat(s.name, "민서");
			else if (lastname < 30)strcat(s.name, "서현");
			else if (lastname < 40)strcat(s.name, "지민");
			else if (lastname < 50)strcat(s.name, "서윤");
			else if (lastname < 60)strcat(s.name, "지우");
			else if (lastname < 70)strcat(s.name, "하은");
			else if (lastname < 80)strcat(s.name, "수빈");
			else if (lastname < 90)strcat(s.name, "예은");
			else if (lastname < 100)strcat(s.name, "윤서");
			else if (lastname < 110)strcat(s.name, "지윤");
			else if (lastname < 120)strcat(s.name, "은서");
			else if (lastname < 130)strcat(s.name, "예원");
			else if (lastname < 140)strcat(s.name, "민지");
			else if (lastname < 150)strcat(s.name, "지원");
			else if (lastname < 160)strcat(s.name, "유진");
			else if (lastname < 170)strcat(s.name, "채원");
			else if (lastname < 180)strcat(s.name, "서영");
			else if (lastname < 190)strcat(s.name, "예진");
			else if (lastname < 200)strcat(s.name, "수민");
			else if (lastname < 210)strcat(s.name, "경서");
			else if (lastname < 220)strcat(s.name, "지현");
			else if (lastname < 230)strcat(s.name, "에스더");
			else if (lastname < 240)strcat(s.name, "리아");
			else if (lastname < 250)strcat(s.name, "예인");
			else if (lastname < 260)strcat(s.name, "예진");
			else if (lastname < 270)strcat(s.name, "승현");
			else if (lastname < 280)strcat(s.name, "봄");
			else if (lastname < 290)strcat(s.name, "여름");
			else if (lastname < 300)strcat(s.name, "가을");
			else if (lastname < 310)strcat(s.name, "겨울");
			else if (lastname < 320)strcat(s.name, "서울");
			else if (lastname < 330)strcat(s.name, "부산");
			else if (lastname < 340)strcat(s.name, "태연");
			else if (lastname < 350)strcat(s.name, "설아");
			else if (lastname < 360)strcat(s.name, "나연");
			else if (lastname < 370)strcat(s.name, "수연");
			else if (lastname < 380)strcat(s.name, "다영");
			else if (lastname < 390)strcat(s.name, "다현");
			else if (lastname < 400)strcat(s.name, "주연");
			else if (lastname < 410)strcat(s.name, "미연");
			else if (lastname < 411)strcat(s.name, "숙자");
			else if (lastname < 412)strcat(s.name, "말자");
			else if (lastname < 413)strcat(s.name, "경자");
			else if (lastname < 414)strcat(s.name, "미자");
			else if (lastname < 415)strcat(s.name, "선자");
		}

		switch (age) {
		case 0:
			s.level = (rand() % 5) + 1;
			s.stnum = 2018000000;
			break;
		case 1: 
			s.level = (rand() % 4) + 1;
			s.stnum = 2019000000;
			break;
		case 2: 
			s.level = (rand() % 3)+1;
			s.stnum = 2020000000;
			break;
		case 3: 
			s.level = (rand() % 2)+1;
			s.stnum = 2021000000;
			break;
		case 4:
			s.level = 1;
			s.stnum = 2022000000;
		}
		department = rand() % 100;
		if (department < 14) {
			s.stnum += d[0].num + dcount[0];
			d[0].s[dcount[0]] = s;
			dcount[0]++;
		}
		else if (department < 26) {
			s.stnum += d[1].num + dcount[1];
			d[1].s[dcount[1]] = s;
			dcount[1]++;

		}
		else if (department < 37)
		{
			s.stnum += d[2].num + dcount[2];
			d[2].s[dcount[2]] = s;
			dcount[2]++;

		}
		else if (department < 47) {
			s.stnum += d[3].num + dcount[3];
			d[3].s[dcount[3]] = s;
			dcount[3]++;

		}
		else if (department < 57) {
			s.stnum += d[4].num + dcount[4];
			d[1].s[dcount[4]] = s;
			dcount[4]++;

		}
		else if (department < 66) {
			s.stnum += d[5].num + dcount[5];
			d[5].s[dcount[5]] = s;
			dcount[5]++;
		}
		else if (department < 75) {
			s.stnum += d[6].num + dcount[6];
			d[1].s[dcount[6]] = s;
			dcount[6]++;
		}
		else if (department < 84) {
			s.stnum += d[7].num + dcount[7];
			d[1].s[dcount[7]] = s;
			dcount[7]++;
		}
		else if (department < 92) {
			s.stnum += d[8].num + dcount[8];
			d[1].s[dcount[8]] = s;
			dcount[8]++;
		}
		else if (department < 100) {
			s.stnum += d[9].num + dcount[9];
			d[1].s[dcount[9]] = s;
			dcount[9]++;
		}
		fprintf(fp, "%s %d %d %s\n", s.name, s.level, s.stnum, s.sex);
		printf("%d\n", i);
	}
	fflush(fp);
	fclose(fp);
}
