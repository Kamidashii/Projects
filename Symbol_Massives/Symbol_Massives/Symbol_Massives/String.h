#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class String
{
	int size = 0;
	char *mas;
	/*” этого класса должны быть конструкторы :*/
	//-по умолчанию
	//- принимающий в параметрах строку в стиле —и
	//- принимающий в параметрах размер будущей строки и символ,
	//
	//которым необходимо заполнить массив.
	//


	//ќператоры :
	//	-индексации
	//	- +
	//	-+=
	//	-cout
	//	- cin
	//	- ==
	//	-!=


	//ћетоды:
	//	-Cstr, который должен возвращать указать на приватный
	//
	//		динамический символьный массив.
	//		- Length, который должен возвращать размер символьного динамического
	//
	//		массива
	//		- Find, который принимает в параметрах символ который необходимо
	//
	//		найти и возвращает индекс найденного символа, либо - 1 если символ не был найден.
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

