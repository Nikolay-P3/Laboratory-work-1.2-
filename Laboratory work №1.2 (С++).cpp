#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	struct peoples
	{
		char sName[30]; //Фамилия
		char work[30]; //Занимаемая должность
		short SDay, SMonth, SYear; //Дата Подписания контракта
		short EDay, EMonth, EYear; //Дата Окончания контракта
		short Salary; //Оклад
	};


	char s;
	int Day, Month, Year;
	cout << "Введите сегодняшнюю дату Д/М/Г например: 12.06.2019\n";
	cin >> Day >> s >> Month >> s >> Year;
	cout << "\n";

	short n;
	cout << "Введите коол людей:\n";
	cin >> n;
	cin.ignore();
	peoples people[10];

	for (int i = 0; i < n; i++) {

		cout << "Введите Фамилию Рабочего " << endl;
		cin.getline(people[i].sName, 30);
		cout << "Введите должность Рабочего\n";
		cin >> (people[i].work);
		cout << "Введите оклад Рабочего\n";
		cin >> (people[i].Salary);
		cout << "Введите год подписания контракта Д/М/Г например: 12.06.2014\n";
		cin >> (people[i].SDay) >> s >> (people[i].SMonth) >> s >> (people[i].SYear);
		cout << "Введите год окончания контракта Д/М/Г например: 12.06.2020\n";
		cin >> (people[i].EDay) >> s >> (people[i].EMonth) >> s >> (people[i].EYear);
		cin.ignore();

	}

	for (int i = 0; i < n; i++)
	{
		if (people[i].EYear == Year && people[i].EMonth == Month && people[i].EDay - Day <= 5)
		{
			cout << endl;
			cout << "Фамилия Рабочего\n";
			cout << people[i].sName << endl;
			cout << "Должность Рабочего\n";
			cout << (people[i].work) << endl;
			cout << "Зарплата Рабочего\n";
			cout << (people[i].Salary) << endl;
			cout << "Год подписания контракта Д/М/Г например: 12.06.2014\n";
			cout << (people[i].SDay) << s << (people[i].SMonth) << s << (people[i].SYear);
			cout << "Год окончания контракта Д/М/Г например: 12.06.2020\n";
			cout << (people[i].EDay) << s << (people[i].EMonth) << s << (people[i].EYear);
		}

	}
	return 0;
}