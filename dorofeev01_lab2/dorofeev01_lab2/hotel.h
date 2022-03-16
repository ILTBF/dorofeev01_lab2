#pragma once
#include "tourist.h"

struct hotel { //Структура отель
	int rent; //кол-во дней
	tourist htl; //связка со структурой турист
};

struct hotel enterHotel(); //Функция ввода 
struct hotel createHotel(int r, tourist hotelfI); //Функция создания 
void printHotel(hotel pr1); //Функция вывода
void valueHotel(hotel pr1); //Функция расчета цены