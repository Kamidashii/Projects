#include "stdafx.h"
#include "String.h"


String::String()
{
}
String::String(const char *p)
{
	this->size = strlen(p);
	this->mas = new char[this->size];
	strcpy_s(this->mas, strlen(p) * sizeof(char)+1 , p);
}
String::String(int size, char s)
{
	this->size = size;
	this->mas = new char[size];

	for (int i = 0;i < size;i++)
	{
		this->mas[i] = s;
	}
}
String::~String()
{
	delete[]this->mas;
	this->mas = nullptr;
	size = 0;
}
String::String(const String& a)
{
	this->size = strlen(a.mas);
	this->mas = new char[strlen(a.mas)];
	strcpy_s(this->mas, size * sizeof(char)+1, a.mas);
}
const String& String:: operator +(String a)
{
	
	String amount;
	amount.mas = new char[strlen(this->mas) + strlen(a.mas) + 2];
	strcpy_s(amount.mas, strlen(this->mas) + strlen(a.mas) + 1, this->mas);
	strcat(amount.mas, a.mas);
	return amount;
}
String String::operator +=(String a)
{
	String amount;
	amount.mas = new char[strlen(this->mas)+strlen(a.mas)+2];
	strcpy_s(amount.mas, strlen(this->mas) + strlen(a.mas)+1, this->mas);
	strcat(amount.mas, a.mas);
	return amount;
}
bool String::operator ==(String& a)const
{
	if (strcmp(this->mas, a.mas) == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool String::operator !=(String a)const
{
	if (strcmp(this->mas, a.mas)==0)
	{
		return 0;
	}
	else
		return 1;
}
std::istream& operator >> (std::istream& is, const String& a)
{
	is >> a.mas;
	return is;
}
std::ostream& operator<<(std::ostream& os, const String& a)
{
	os << a.mas;
	return os;
}
//Методы:
// -Cstr, который должен возвращать указать на приватный//
//	 динамический символьный массив.
//	 - Length, который должен возвращать размер символьного динамического//
//	 массива
//	 - Find, который принимает в параметрах символ который необходимо//
//	 найти и возвращает индекс найденного символа, либо - 1 если символ не был найден.
 char* String::Cstr()const
{
	return this->mas;
}
int String::Length()const
{
	int l = 0;
	l = this->size;
	return l;
}
int String::Find(char s)const
{
	char *tmp = nullptr;
	tmp = strchr(this->mas, s);
	if (tmp == 0)
	{
		return -1;
	}
	else
		return *tmp;
}
String& String::operator=(String&&a)
{
	delete[]this->mas;
	this->mas = nullptr;
	this->mas = new char[strlen(a.mas)];
	strcpy_s(mas, strlen(a.mas) * sizeof(char)+1, a.mas);
	a.mas = nullptr;
	return *this;
}