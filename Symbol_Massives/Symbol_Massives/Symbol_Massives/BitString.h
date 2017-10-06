#pragma once
#include"String.h"
class BitString:
	public String
{
	char* Bit = nullptr;
public:
	BitString();
	~BitString();
	BitString(const char*);
	int ToInt()const;
	friend std::istream& operator>>(std::istream&is, BitString&);
	friend std::ostream& operator<<(std::ostream&os, const BitString&);
};
//Создать производный класс BitString, который должен быть наследником от String,
//который должен хранить число в бинарном виде : 0 и 1. В классе должен быть конструктор,
//принимающий указатель на символьный массив нулей и единиц.
//Метод ToInt()const - который должен возвращать в виде int значение,
//которое хранится внутри строки в виде 0 и 1. Операторы перегрузки cin и cout.