#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n = 0;
	cout << "Введите номер задания: ";
	cin >> n;
	if (n == 1)
	{
		cout << "Дана строка, состоящая из русских слов, разделенных пробелами (одним или несколькими). Найти количество слов в строке" << endl;
		string str = "Тестовое значение для  проверки";
		int k = 0;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == ' ') k++;
		}
		cout << k << endl;
	}
	else if (n == 2)
	{
		cout << "Дана строка, состоящая из русских слов, набранных заглавными буквами и разделенных пробелами (одним или несколькими). Найти количество слов, которые начинаются и заканчиваются одной и той же буквой. " << endl;

		char str[100] = "ОКО ВОВ   АМА ЛАМА";
		char* context;
		char* p = strtok_s(str, " ", &context);
		int k = 0;
		int count = 0;
		while (p != NULL)
		{
			cout << p << " " << endl;
			k = strlen(p);
			if (p[0] == p[k - 1])
			{
				count++;
			}
			p = strtok_s(context, " ", &context);
		}
		cout << "Найдено " << count << endl;
	}
	else if (n == 3)
	{
		cout << "Дана строка, состоящая из русских слов, набранных заглавными буквами и разделенных пробелами (одним или несколькими). Найти количество слов, которые содержат хотя бы одну букву «А». " << endl;
		char str[100] = "ТЕСТ ПРОВЕРКА ЗАДАНИЯ НА РАБОТУ";
		char ch = 'А';
		bool b = true;
		int ln = strlen(str);
		int c = 0;
		for (int i = 0; i < ln; i++)
		{
			if (b)
			{
				if (str[i] == ch)
				{
					c++;
					b = false;
				}
			}
			else
			{
				if (str[i] == ' ')
				{
					b = true;
				}
			}
		}
		cout << c << endl;
	}
	else if (n == 4)
	{
		cout << "Дана строка, состоящая из русских слов, набранных заглавными буквами и разделенных пробелами (одним или несколькими). Найти количество слов, которые содержат ровно три буквы «А». " << endl;
		char str[100] = "АБРА КАДАБРА ПАРА ЛОРА МАДАРА АЛАМА";
		int num = 0, numa = 0;
		cout << str << endl;;
		for (int i = 0; i <= strlen(str); i++)
		{
			if (str[i] == 'А') 
			{
				numa++;				
			}
			else if (str[i] == ' ' || str[i] == '\0')
			{
				if (numa == 3) num++;
				numa = 0;
			}
		}
		cout << num << endl;
	}
	system("pause");
}