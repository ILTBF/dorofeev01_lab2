#pragma once
#include "date.h"
struct tourist { //��������� ���������
	char name[15]; //���
	char surname[25]; //�������
	char patronymic[30]; //��������
	date trst; //������ �� ���������� ����
};

struct tourist createTourist(char n[15], char s[25], char p[30], date trst�); //������� ��������
struct tourist enterTourist(); //������� �����
void printTourist(tourist tourist1); //������� ������