#pragma once
#include "tourist.h"

struct hotel { //��������� �����
	int rent; //���-�� ����
	tourist htl; //������ �� ���������� ������
};

struct hotel enterHotel(); //������� ����� 
struct hotel createHotel(int r, tourist hotelfI); //������� �������� 
void printHotel(hotel pr1); //������� ������
void valueHotel(hotel pr1); //������� ������� ����