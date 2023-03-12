#pragma once
#include <windows.h>
#include <iostream>
#include <iomanip>
#include <exception>
using namespace std;
enum ConsoleColor { Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray, LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White };
void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
void GotoXY(int X, int Y)
{
	HANDLE hConsole;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}
#include <stdio.h>
/*0 � ������
1 � �����
2 � �������
3 � �������
4 � �������
5 � �������
6 � ������
7 � �����
8 � �����
9 � ����� - �����
A � ������ - �������
B � ������ - �������
� � ������ - �������
E � ������ - ������
F � ���� - �����
system("color F0");*/  // ��������� ������ ���� � ������� ������
class Client
{
	string surname, first_name, patronymic, address;
	long long phone_numb;
public:
	Client() {};
	void data()
	{
		SetColor(6, 0);
		cout << "�������: ";
		cin >> surname;
		cout << "���: ";
		cin >> first_name;
		cout << "��������: ";
		cin >> patronymic;
		cout << "�����: ";
		cin >> address;
		cout << "�������: ";
		cin >> phone_numb;
		cout << surname << " " << first_name << " " << patronymic << " " << address << " " << phone_numb << endl;
	}
};