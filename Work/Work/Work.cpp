#include "Work.h"
#include <iostream>;
using namespace std;

namespace Program
{

	Work::Work()
	{
		workHours = 0;
		payOneHour = 0;
	}

	Work::Work(int iWorkHours, int iPayOneHour)
	{
		Work::setWorkHours(workHours);
		Work::setPayOneHour(payOneHour);
	}

	Work::~Work()
	{
	}

	void Work::setWorkHours(int iWorkHours)
	{
		Work::workHours = iWorkHours;
	}

	int Work::getWorkHours()
	{
		return Work::workHours;
	}

	void Work::setPayOneHour(int iPayOneHour)
	{
		Work::payOneHour = iPayOneHour;
	}

	int Work::getPayOneHour()
	{
		return Work::payOneHour;
	}

	void Work::info()
	{
		cout << endl;
		cout << "���� ������: " << workHours << endl;
		cout << "����� �� ��� ������: " << payOneHour << endl;
	}

	void Work::costWork()
	{
		int costWork = 0;
		costWork = workHours * payOneHour;
		cout << "��������� ������: " << costWork << endl;
	}
}