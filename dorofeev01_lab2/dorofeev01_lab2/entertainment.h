#pragma once

struct entertainment {
	int nexcursion; // ���������� ���������
	int nmuseum; // ���������� ������
};

struct entertainment enterEntertainment(); //������� ����� 
struct entertainment createEntertainment(int ne, int nm); //������� �������� 
void printEntertainment(entertainment invntr1); //������� ������
void valueEntertainment(entertainment invntr1); //������� �������
