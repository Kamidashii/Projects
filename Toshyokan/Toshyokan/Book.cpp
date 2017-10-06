#include "stdafx.h"
#include "Book.h"
#include<iostream>

Book::Book(const char*name) :Book(name, "", 0, 0){}
Book::Book(const char*name,const char*author):Book(name,author,0,0){}
Book::Book(const char*name,const char*author,int cost):Book(name,author,cost,0){}
Book::Book(const char*name, const char*author, int cost, int pages) : Name(new char[strlen(name) + 1]), Author(new char[strlen(author) + 1]), Cost(cost), Pages(pages)
{
	strcpy_s(Name, strlen(name) + 1, name);
	strcpy_s(Author, strlen(author) + 1, author);
}

Book::~Book()
{
	std::cout << "Deconstruct" << std::endl;
	delete[]this->Name;
	this->Name = nullptr;
	delete[]this->Author;
	this->Author = nullptr;
	this->Cost = 0;
	this->Pages = 0;
}
Book::Book(const Book&A)
{
	this->Name = new char[strlen(A.Name) + 1];
	strcpy_s(this->Name, strlen(A.Name) + 1, A.Name);
	this->Author = new char[strlen(A.Author) + 1];
	strcpy_s(this->Author, strlen(A.Author) + 1, A.Author);
	this->Cost = A.Cost;
	this->Pages = A.Pages;
}
Book::Book(Book&&A)
{
	this->Name = new char[strlen(A.Name) + 1];
	strcpy_s(this->Name, strlen(A.Name) + 1, A.Name);
	this->Author = new char[strlen(A.Author) + 1];
	strcpy_s(this->Author, strlen(A.Author) + 1, A.Author);
	this->Cost = A.Cost;
	this->Pages = A.Pages;
	A.Name = nullptr;
	A.Author = nullptr;
	A.Cost = 0;
	A.Pages = 0;
}
Book& Book::operator=(const Book&A)
{
	delete[]this->Name;
	delete[]this->Author;
	this->Name = new char[strlen(A.Name) + 1];
	strcpy_s(Name, strlen(A.Name) + 1, A.Name);
	this->Author = new char[strlen(A.Author) + 1];
	strcpy_s(this->Author, strlen(A.Author) + 1, A.Author);
	this->Cost = A.Cost;
	this->Pages = A.Pages;
	return *this;
}
Book& Book::operator=(Book&&A)
{
	delete[]this->Name;
	delete[]this->Author;
	this->Name = new char[strlen(A.Name) + 1];
	strcpy_s(Name, strlen(A.Name) + 1, A.Name);
	this->Author = new char[strlen(A.Author) + 1];
	strcpy_s(this->Author, strlen(A.Author) + 1, A.Author);
	this->Cost = A.Cost;
	this->Pages = A.Pages;
	A.Name=nullptr;
	A.Author=nullptr;
	A.Cost = 0;
	A.Pages = 0;
	return *this;
}
void Book::SetName(const char*name)
{
	delete[]this->Name;
	this->Name = new char[strlen(name) + 1];
	strcpy_s(this->Name, strlen(name) + 1, name);
}
void Book::SetAuthor(const char*author)
{
	delete[]this->Author;
	this->Author = new char[strlen(author) + 1];
	strcpy_s(this->Author, strlen(author) + 1, author);
}
void Book::SetCost(int cost)
{
	this->Cost = cost;
}
void Book::SetPages(int pages)
{
	this->Pages = pages;
}
const char* Book::GetName()const
{
	return this->Name;
}
const char* Book::GetAuthor()const
{
	return this->Author;
}
int Book::GetCost()const
{
	return this->Cost;
}
int Book::GetPages()const
{
	return this->Pages;
}
void Book::Show()
{
	std::cout <<"Name "<< this->GetName() << std::endl;
	std::cout <<"Author "<<this->GetAuthor() << std::endl;
	std::cout <<"Cost "<< this->GetCost() << std::endl;
	std::cout <<"Pages "<< this->GetPages() << std::endl;
	std::cout << std::endl;
}
std::istream& operator>>(std::istream&is, Book&A)
{
	char name[300];
	is >> name;
	delete[]A.Name;
	A.Name = new char[strlen(name) + 1];
	strcpy_s(A.Name, strlen(name) + 1, name);
	is >> name;
	A.Author = new char[strlen(name) + 1];
	strcpy_s(A.Author, strlen(name) + 1, name);
	is >> A.Cost;
	is >> A.Pages;
	return is;
}
void Book::SortName(int amount, Book*&A)
{
	for (int i = 1;i < amount;i++)
	{
		for (int j = i;j > 0;j--)
		{
			int length = 0;
			if (strlen(A[j].Name) > strlen(A[j - 1].Name)) //find length of book's name
			{
				length = strlen(A[j - 1].Name);
			}
			else
			{
				length = strlen(A[j].Name);
			}
			for (int k = 0;k < length;k++) //compare the name's letters
			{
				if (A[j-1].Name[k] > A[j].Name[k])
				{
						Book tmp;
						tmp = A[j - 1];
						A[j - 1] = (A[j]);
						A[j] = tmp;
						break;
				}
			}
		}
	}
}
void Book::SortAuthor(int amount,Book*&A)
{
	for (int i = 1;i < amount;i++)
	{
		for (int j = i;j > 0;j--)
		{
			int length = 0;
			if (strlen(A[j].Author) > strlen(A[j - 1].Author)) //find length of book's name
			{
				length = strlen(A[j - 1].Author);
			}
			else
			{
				length = strlen(A[j].Author);
			}
			for (int k = 0;k < length;k++) //compare the name's letters
			{
				if (A[j-1].Author[k] > A[j].Author[k])
				{
					Book tmp;
					tmp = A[j - 1];
					A[j - 1] = (A[j]);
					A[j] = tmp;
					break;
				}
			}
		}
	}
}
void Book::SortCost(int amount,Book*&A)
{
	for (int i = 1;i < amount;i++)
	{
		for (int j = i;j > 0;j--)
		{
			if (A[j-1].Cost > A[j].Cost)
			{
				Book tmp;
				tmp = A[j - 1];
				A[j - 1] = (A[j]);
				A[j] = (tmp);
			}
		}
	}
}
void Book::SortPages(int amount, Book*&A)
{
	for (int i = 1;i < amount;i++)
	{
		for (int j = i;j > 0;j--)
		{
			if (A[j-1].Pages > A[j].Pages)
			{
				Book tmp;
				tmp = A[j-1];
				A[j-1] = (A[j]);
				A[j] = (tmp);
			}
		}
	}
}