#include "stdafx.h"
#include "BitString.h"

BitString::BitString()
{

}

BitString::~BitString()
{
}

BitString::BitString(const char*mas)
{
	this->Bit = new char[strlen(mas) + 1];
	strcpy_s(Bit,strlen(mas)+1,mas);
}

int BitString::ToInt()const
{
	int count = 0;
	int res = 0; //int result
	int sum = 1;
	count = strlen(this->Bit);
	for (int i = count;i >0;--i)
	{
		sum = 1;
		if (this->Bit[i] == '1')
		{
			for (int j = 0;j < i;j++)
			{
				sum *= 2;
			}
			res += sum;
		}
	}
	return ++res;
}
std::istream& operator>>(std::istream&is, BitString&a)
{
	char bin[100];
	std::cout << "Write a number in bin system" << std::endl;
	is >> bin;
	delete[]a.Bit;
	a.Bit = new char[strlen(bin) + 1];
	strcpy_s(a.Bit, strlen(bin)+1, bin);
	return is;
}
std::ostream& operator<<(std::ostream&os, const BitString&a)
{
	os << "Number in bin system " << a.Bit << std::endl;
	os << "Number in dec system " << a.ToInt() << std::endl;
	return os;
}