#pragma once


struct budget {
	int ticket;// ��������� ������
	int eat; // ������ �� ���
	int expenses; // ������ �� �������������� �������
};

struct budget enterBudget(); //������� ����� 
struct budget createBudget(int tick, int e, int exp); //������� �������� 
void valueBudget(budget bdg1); //������� �������