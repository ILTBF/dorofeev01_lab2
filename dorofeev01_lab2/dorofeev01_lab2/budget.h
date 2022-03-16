#pragma once


struct budget {
	int ticket;// стоимость билета
	int eat; // бюджет на еду
	int expenses; // бюджет на непредвиденные расходы
};

struct budget enterBudget(); //Функция ввода 
struct budget createBudget(int tick, int e, int exp); //Функция создания 
void valueBudget(budget bdg1); //Функция расчета