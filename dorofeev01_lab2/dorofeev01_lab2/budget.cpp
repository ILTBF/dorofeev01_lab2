#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "budget.h"
using namespace std;

struct budget enterBudget() {
	budget bdgg;
	printf("\n\n������� ��������� ������ �� ������: ");
	while (scanf("%d", &bdgg.ticket) != 1) {
		while (getchar() != '\n');
		printf("������. ������� ��������� ������ �� ������: ");
	}
	printf("������� ������ �� ���: ");
	while (scanf("%d", &bdgg.eat) != 1) {
		while (getchar() != '\n');
		printf("������. ������� ������ �� ���: ");
	}
	printf("������� ������ �� �������������� �������: ");
	while (scanf("%d", &bdgg.expenses) != 1) {
		while (getchar() != '\n');
		printf("������. ������� ������ �� �������������� �������: ");
	}
	return bdgg;
}

struct budget createBudget(int tick, int e, int exp) { // ������� ��������
	budget bdgg;
	bdgg.ticket = tick;
	bdgg.eat = e;
	bdgg.expenses = exp;
	return bdgg;
}
void valueBudget(budget bdg1) { // ������� ��������
	budget bdgg;
	int rPr = 0;
	rPr = bdg1.ticket+ bdg1.eat+ bdg1.expenses;
	printf("\n�������� ������: %d ", rPr);
}
