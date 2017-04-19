﻿#include <iostream>
#include <conio.h>
#include "Work.h"
#include "Tax.h"

using namespace std;
using Program::Work;
using Program::Tax;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");

	std::int16_t workHoursL;
	std::int16_t payOneHourL;

	std::cout << "Введите время потраченное на работу: ";
	std::cin >> workHoursL;
	while (workHoursL < 0 )
	{
		std::cout << "Введите время потраченное на работу: ";
		std::cin >> workHoursL;
	}

	std::cout << "Введите плату за час работы: ";
	std::cin >> payOneHourL;
	while (payOneHourL < 0)
	{
		std::cout << "Введите плату за час работы: ";
		std::cin >> payOneHourL;
	}

	std::float_t income_taxL;
	std::cout << "Введите подоходный налог (в процентах): ";
	std::cin >> income_taxL;
	while (!(income_taxL >= 0.00 && income_taxL < 100.00))
	{
		std::cout << "Введите подоходный налог (в процентах): ";
		std::cin >> income_taxL;
	}
	
	cout << "Подоходный налог: " << income_taxL << "%" << endl;

	Tax *work = new Tax(workHoursL, payOneHourL, income_taxL);
	work->setWorkHours(workHoursL);
	work->setPayOneHour(payOneHourL);
	work->info();
	cout << "Стоимость работы: " << work->Work::costWork() << endl;
	work->setTax(income_taxL);
	work->Tax::costWork();

	_getch();
	return 0;
}