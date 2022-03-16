#pragma once

struct entertainment {
	int nexcursion; // количество экскурсий
	int nmuseum; // количество музеев
};

struct entertainment enterEntertainment(); //Функция ввода 
struct entertainment createEntertainment(int ne, int nm); //Функция создания 
void printEntertainment(entertainment entrtm1); //Функция вывода
void valueEntertainment(entertainment entrtm1); //Функция расчета
