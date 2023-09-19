#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int choose;
	puts("Какой товар вы хотите купить? (1-Молочный, 2-Что-то сладкое)");
	cin >> choose;
	switch (choose)
	{
	case 1: {
		puts("Какой именно молочный товар? (1-Молоко, 2-Кефир, 3-Сыр, 4-Йогурт");
		cin >> choose;
		switch (choose)
			{
			case 1: puts("Видимо любите молоко, хороший выбор"); break;
			case 2: puts("Хороший вариант для прокисшего молока"); break;
			case 3: puts("Нормальный варимант для сильно прокисшего молока"); break;
			case 4: puts("Ну это конечно надо было ещё такое выбрать, совсем что ли?"); break;
			}
		break;
	}
	case 2: {
		puts("Что именно? (1-Сникерс, 2-Печенье, 3-Выпечку)");
		cin >> choose;
		switch (choose)
			{
			case 1: puts("Сладкоежка)"); break;
			case 2: puts("Хороший вариант, но лучше купить вместе с печеньем ещё молока"); break;
			case 3: puts("Булочки кайф, сам люблю)"); break;
			}
		break;
	}
	default: puts("Некорректный вариант");  break;
	}
	return 0;
}