#include<windows.h>
#include<iostream>
using namespace std;

int StringLength(const char* str);
char* to_upper(char str[]);
char* to_lower(char str[]);
void shrink(char str[]);

void main()
{
	setlocale(LC_ALL, "");
	//NULL Terminated Lines
	//char str[] = { 'H' ,'e' ,'l','l','o', 0 };
	//cout << str << endl;
	//str[3] = 0;

	//char str[] = "Hello";
	//cout << str << endl;
	//cout << sizeof(str) << endl;
	
	const int n = 256;
	char str[n] = {};
	cout << "Введите строку: "; 
	//cin >> str;
	SetConsoleCP(1251);
	cin.getline(str, n);
	SetConsoleCP(866);
	cout << "размер строки : " << StringLength(str) << endl;
	cout << to_upper(str) << endl;
	cout << to_lower(str) << endl;
	
}
int StringLength(const char* str)
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}
char* to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')str[i] -= ' ';
		if (str[i] >= 'а' && str[i] <= 'я')str[i] -= ' ';
	}
	return str;
}
char* to_lower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')str[i] += ' ';
		if (str[i] >= 'А' && str[i] <= 'Я')str[i] += ' ';
	}
	return str;
}
void shrink(char str[])
{
	for (int i = 0; i < str[i]; i++)
	{
		if ((str[i] == ' ') && (str[i + 1] == ' '))
		{
			//str[i + 1]
			//for (j = i; j = (str[i] != ' '); j++)str[i + 1]
		}
	}
}