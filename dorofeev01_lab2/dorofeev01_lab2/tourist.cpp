#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "tourist.h"
using namespace std;

struct tourist enterTourist() { //������� ����� 
	tourist touristt;
	printf("\n\n������� �������: ");
	scanf("%s", &touristt.surname);
	while (getchar() != '\n');
	printf("������� ���: ");
	scanf("%s", &touristt.name);
	while (getchar() != '\n');
	printf("������� ��������: ");
	scanf("%s", &touristt.patronymic);
	while (getchar() != '\n');
	printf("\n\n���� ������ ��������: ");
	touristt.trst = enterDate();
	return touristt;
}
struct tourist createTourist(char n[15], char s[25], char p[30], date trst�) {
	tourist touristt;
	strcpy(touristt.name, n);
	strcpy(touristt.surname, s);
	strcpy(touristt.patronymic, s);
	touristt.trst = trst�;
	return touristt;
}
void printTourist(tourist tourist1) {
	printf("\n\n��� %s %s %s", tourist1.surname, tourist1.name, tourist1.patronymic);
	printf("\n���� ��������: ");
	printDate(tourist1.trst);

}
