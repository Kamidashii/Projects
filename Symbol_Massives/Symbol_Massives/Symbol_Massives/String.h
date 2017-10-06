#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class String
{
	int size = 0;
	char *mas;
	/*� ����� ������ ������ ���� ������������ :*/
	//-�� ���������
	//- ����������� � ���������� ������ � ����� ��
	//- ����������� � ���������� ������ ������� ������ � ������,
	//
	//������� ���������� ��������� ������.
	//


	//��������� :
	//	-����������
	//	- +
	//	-+=
	//	-cout
	//	- cin
	//	- ==
	//	-!=


	//������:
	//	-Cstr, ������� ������ ���������� ������� �� ���������
	//
	//		������������ ���������� ������.
	//		- Length, ������� ������ ���������� ������ ����������� �������������
	//
	//		�������
	//		- Find, ������� ��������� � ���������� ������ ������� ����������
	//
	//		����� � ���������� ������ ���������� �������, ���� - 1 ���� ������ �� ��� ������.
public:
	String();
	String(const char*p);
	String(int size, char s);
	~String();
	String(const String&a);
	String& operator=(String&&);
	const String& operator +(String a);
	String operator +=(String a);
	bool operator ==(String& a)const;
	bool operator !=(String a)const;
	friend std::istream& operator >> (std::istream& is, const String& a);
	friend std::ostream& operator<<(std::ostream& os, const String& a);
	char* Cstr()const;
	int Length()const;
	int Find(char s)const;
};

