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
	cout << "������� ����� �������: ";
	cin >> n;
	if (n == 1)
	{
		cout << "���� ������, ��������� �� ������� ����, ����������� ��������� (����� ��� �����������). ����� ���������� ���� � ������" << endl;
		string str = "�������� �������� ���  ��������";
		int k = 0;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == ' ') k++;
		}
		cout << k << endl;
	}
	else if (n == 2)
	{
		cout << "���� ������, ��������� �� ������� ����, ��������� ���������� ������� � ����������� ��������� (����� ��� �����������). ����� ���������� ����, ������� ���������� � ������������� ����� � ��� �� ������. " << endl;

		char str[100] = "��� ���   ��� ����";
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
		cout << "������� " << count << endl;
	}
	else if (n == 3)
	{
		cout << "���� ������, ��������� �� ������� ����, ��������� ���������� ������� � ����������� ��������� (����� ��� �����������). ����� ���������� ����, ������� �������� ���� �� ���� ����� ���. " << endl;
		char str[100] = "���� �������� ������� �� ������";
		char ch = '�'; 
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
		cout << "���� ������, ��������� �� ������� ����, ��������� ���������� ������� � ����������� ��������� (����� ��� �����������). ����� ���������� ����, ������� �������� ����� ��� ����� ���. " << endl;
		char str[100] = "��� �� ��� ���";
		int num=0, numa=0;
		for (int i = 0; i < strlen(str); i++)
		{			
			if (str[i] == '�')
			{
				numa++;				
			}

			if (numa == 3)
			{
				num++;
			}			
		}				
		cout << num << endl;
		
	}
	system("pause");
}