#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int choose;
	puts("Какой товар вы хотите купить? (1-Молочный, 2-Что-то сладкое)");
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1: {
		puts("Какой именно молочный товар? (1-Молоко, 2-Кефир, 3-Сыр, 4-Йогурт");
		scanf_s("%d", &choose);
		switch (choose)
		{
		case 1: puts("Видимо любите молоко, хороший выбор"); break;
		case 2: puts("Хороший вариант "); break;
		case 3: puts("Нормальный варимант "); break;
		case 4: puts("Очень хороший вариант"); break;
		default: puts("Некорректный вариант");  break;
		}
		break;
	}
	case 2: {
		puts("Что именно? (1-Сникерс, 2-Печенье, 3-Выпечку)");
		scanf_s("%d", &choose);
		switch (choose)
		{
		case 1: puts("Сладкоежка)"); break;
		case 2: puts("Хороший вариант"); break;
		case 3: puts("Булочки кайф, сам люблю"); break;
		default: puts("Некорректный вариант");  break;
		}
		break;
	}
	default: puts("Некорректный вариант");  break;
	}
	return 0;
}