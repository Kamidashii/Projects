#include "stdafx.h"
#include "Journal.h"


Journal::Journal(const char*name) :Book(name){}
Journal::Journal(const char*name, const char*author) : Book(name, author) {}
Journal::Journal(const char*name, const char* author, int cost) : Book(name, author, cost) {}
Journal::Journal(const char*name, const char*author, int cost, int pages) : Book(name, author, cost, pages) {}
Journal::Journal(const Journal&A):Book((const Book&)A){}  
Journal::Journal(Journal&&A) : Book((Book&&)A) {}
Journal& Journal::operator=(const Journal&A) 
{
	Book::operator=((Book&)A);
	return *this;
}
Journal& Journal::operator=(Journal&&A)
{
	Book::operator=((Book&&)A);
	return *this;
}
Journal::~Journal()
{

}
void Journal::Show()
{
	std::cout << "Journal" << std::endl;
	this->Book::Show();
}