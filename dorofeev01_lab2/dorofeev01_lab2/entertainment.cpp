#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "entertainment.h"
using namespace std;

struct entertainment enterEntertainment() {
	entertainment entrtmm;
	printf("\n������� ���������� ���������: ");
	while (scanf("%d", &entrtmm.nexcursion) != 1) {
		while (getchar() != '\n');
		printf("������. ������� ���������� ���������: ");
	}
	printf("������� ���������� ������: ");
	while (scanf("%d", &entrtmm.nmuseum) != 1) {
		while (getchar() != '\n');
		printf("������. ������� ���������� ������: ");
	}
	return entrtmm;
}

struct entertainment createInventory(int ne, int nm) { // ������� ��������
	entertainment entrtmm;
	entrtmm.nexcursion = ne;
	entrtmm.nmuseum = nm;
	return entrtmm;
}
void printEntertainment(entertainment entrtm1) { // ������� ������
	printf("\n���������� ���������: %d", entrtm1.nexcursion);
	printf("\n���������� ������: %d", entrtm1.nmuseum);
}

void valueEntertainment(entertainment entrtm1) { // ������� �������� �������� �����
	entertainment entrtmm;
	int rPr = 0;
	rPr = (entrtm1.nexcursion * 1200) + (entrtm1.nmuseum * 250);
	printf("\n�������� ���������: %d ", rPr);
}
