#pragma once

struct entertainment {
	int nexcursion; // ���������� ���������
	int nmuseum; // ���������� ������
};

struct entertainment enterEntertainment(); //������� ����� 
struct entertainment createEntertainment(int ne, int nm); //������� �������� 
void printEntertainment(entertainment entrtm1); //������� ������
void valueEntertainment(entertainment entrtm1); //������� �������
