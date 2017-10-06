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
//������� ����������� ����� BitString, ������� ������ ���� ����������� �� String,
//������� ������ ������� ����� � �������� ���� : 0 � 1. � ������ ������ ���� �����������,
//����������� ��������� �� ���������� ������ ����� � ������.
//����� ToInt()const - ������� ������ ���������� � ���� int ��������,
//������� �������� ������ ������ � ���� 0 � 1. ��������� ���������� cin � cout.