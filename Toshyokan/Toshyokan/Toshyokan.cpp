// Toshyokan.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include"Book.h"
#include"Journal.h"
int main()
{
	int amount=0;
	int sorttype=1;
	//Journal A("Manga");
	//A.SetAuthor("Hayao Miyadzaki");
	//A.SetCost(300);
	//A.SetPages(700);
	//Journal B = A;
	//Journal C;
	//C = B;
	//Journal R = std::move(C);
	//Journal K;
	//K = std::move(R);
	/*std::cout<<K.GetName();
	std::cout<<K.GetAuthor();
	std::cout<<K.GetCost();
	std::cout<<K.GetPages();*/
	/*K.Show();*/
	std::cout << "Write amount of books and journals" << std::endl;
	std::cin >> amount;
	Book*mas = new Book[amount];
	for (int i = 0;i < amount;i++)
	{
		std::cout << "Enter name of the book,author,cost,pages" << std::endl;
		std::cin >> mas[i];
	}
	while(sorttype!=0)
	{ 
	std::cout << "Choose a type of sort for your toshyokan(1-by book's name, 2-by author's name, 3-by cost, 4-by pages, 0-for exit" << std::endl;
	std::cin >> sorttype;
	switch (sorttype)
	{
	case 1:
		Book::SortName(amount, mas);
		for (int i = 0;i < amount;i++)
		{
			mas[i].Show();
		}
		break;
	case 2:Book::SortAuthor(amount, mas);
		for (int i = 0;i < amount;i++)
		{
			mas[i].Show();
		}
		break;
	case 3:Book::SortCost(amount, mas);
		for (int i = 0;i < amount;i++)
		{
			mas[i].Show();
		}
		break;
	case 4:Book::SortPages(amount, mas);
		for (int i = 0;i < amount;i++)
		{
			mas[i].Show();
		}
		break;
	}
	}
	
//		В main предложит пользователю ввести количество книг и журналов вместе взятые.
//Создать динамический массив указателей на базовый класс, предложить пользователю заполнить
//массив книгами и журналами и выбрать вариант сортировки массива по :
//	-Названию
//		- Автору
//		- Цене
//		- Количеству страниц
//
//		После сортировки вывести на консоль весь массив.
    return 0;
}

