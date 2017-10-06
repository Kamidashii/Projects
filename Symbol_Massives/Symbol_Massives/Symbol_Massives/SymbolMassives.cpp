// SymbolMassives.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "String.h"
#include"BitString.h"
//void menu(String subj1);
//void metods(String subj1);
int main()
{
	char bin[100];
	BitString A;
	std::cin >> A;
	std::cout<<A<<std::endl;
//	int maschoose = 0; //type of massive. Choose a construct
//	int size = 0; //size of massive
//	char symbol; //symbol for filling a massive
//	char *Str = new char[100]; //string for copy in to a class parametr
//	std::cout << "Hello, please choose a construct(1-just copy a string that you write or 2-enter size and symbol that fill this string" << std::endl;
//	std::cin >> maschoose;
//	while (maschoose != 1 && maschoose != 2)
//	{
//		std::cout << "Write 1 or 2!" << std::endl;
//		std::cin >> maschoose;
//	}
//	if (maschoose == 1)
//	{
//		std::cout << "Enter a string" << std::endl;
//		std::cin.ignore();
//		std::cin.getline(Str,100);
//		String subj(Str);
//		metods(subj);
//		menu(subj);
//	}
//	else if (maschoose == 2)
//	{
//		std::cout << "Enter size of you massive" << std::endl;
//		std::cin >> size;
//		std::cout << "Write a symbol" << std::endl;
//		std::cin >> symbol;
//		String subj(size, symbol);
//		menu(subj);
//	}
//
	return 0;
}
//
//void menu(String subj1)
//{
//	int menu = 1; //parametr for choose a type of menu.
//	char *Str=new char[100];
//	std::cout << "Choose operation with strings(1(if you want to fold you string and another string and write it to new string)\t2(if you want add another string into your string\t3(if you want to compare you string and another string)\t4(if you want to campare strings(!=)\n if you want to break this menu write 0" << std::endl;
//	std::cin >> menu;
//	switch (menu)
//	{
//	case 1:
//	{
//		std::cout << "Enter string" << std::endl;
//		std::cin >> Str;
//		String Str1(Str);
//		std::cout << (subj1 += Str1) << std::endl;
//	}
//	break;
//	case 2:
//	{
//		std::cout << "Enter string" << std::endl;
//		std::cin >> Str;
//		String Str1(Str);
//		subj1 + Str1;
//	}
//	break;
//	case 3:
//	{
//		std::cout << "Write a string for compare" << std::endl;
//		std::cin >> Str;
//		String Str1(Str);
//		std::cout << (Str1 == subj1)<<std::endl;
//		std::cout << " \n1-the same\nother the different" << std::endl;
//	}
//		break;
//	case 4:
//	{
//		std::cout << "Write a string for compare" << std::endl;
//		std::cin >> Str;
//		String Str1(Str);
//		std::cout << (Str1 != subj1)<<std::endl;
//		std::cout << " \n1-the same\nother the different" << std::endl;
//	}
//		break;
//	case 0:
//		break;
//}
//}
//void metods(String subj1)
//{
//	int answer = 1;
//	std::cout << "Write 1(if you want to take a private dynamic massive pointer)\t2(if you want to take a massive size\t3(if you want to take a element's index\n0(if you want stop it)"<<std::endl;
//	std::cin >> answer;
//	char s;
//	switch (answer)
//	{
//	case 1:
//		std::cout<<subj1.Cstr() << std::endl;;
//		break;
//	case 2:
//		std::cout<<subj1.Length() << std::endl;;
//		break;
//	case 3:
//		std::cout << "Enter a element that we'll find and return a pointer to you" << std::endl;
//		std::cin >> s;
//		std::cout<<subj1.Find(s) << std::endl;;
//		break;
//	case 0:
//		break;
//	}
//}