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
������: alwaystaegi
���߱Ⱓ:2022.07.06~2022.07.11
���α׷���: ����ó�����α׷�
���߸���: ���� �� �������� ����� �л������� ���� ó�����α׷�

�ؼ��� ó�����α׷� ���� �ҽ��ڵ�
-���� �ҽ��ڵ� ����: ����ڰ� ����� ����� �����ϰ� �� ����� �ҷ����� ����


*/

typedef struct Student {
	char name[20];//�̸�
	char department[20];//�а�
	int level;//�й�
	float grade;
}Student;

int main() {
	Student s[1000];
	int random=0;
	for (int i = 0; i < 1000; i++) {
		random = rand() % 38663948;
		if (random < 10689959) strcpy(s[i].name, "��");
		else if (random < 17996787)strcpy(s[i].name, "��");
		else if (random < 22188861)strcpy(s[i].name, "��");
		else if (random < 24522788)strcpy(s[i].name, "��");
		else if (random < 26674667)strcpy(s[i].name, "��");
		else if (random < 27851514)strcpy(s[i].name, "��");
		else if (random < 28907081)strcpy(s[i].name, "��");
		else if (random < 29927628)strcpy(s[i].name, "��");
		else if (random < 30920349)strcpy(s[i].name, "��");
		else if (random < 31744270)strcpy(s[i].name, "��");
		else if (random < 32517674)strcpy(s[i].name, "��");
		else if (random < 33280955)strcpy(s[i].name, "��");
		else if (random < 34032659)strcpy(s[i].name, "��");
		else if (random < 34773740)strcpy(s[i].name, "��");
		else if (random < 35479681)strcpy(s[i].name, "��");
		else if (random < 36176852)strcpy(s[i].name, "Ȳ");
		else if (random < 36862491)strcpy(s[i].name, "��");
		else if (random < 37545985)strcpy(s[i].name, "��");
		else if (random < 38105095)strcpy(s[i].name, "��");
		else strcpy(s[i].name, "ȫ");
		random = rand() % 2;
		if (random == 0) {
			random = rand() % 100658;
			if (random < 9426) strcat(s[i].name, "����");
			else if(random<)


		
		}
		else if (random == 1) {
		
		
		}
		


	}



	system("pause");
	return 0;
}