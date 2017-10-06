#pragma once
class Book
{
	/*-Название*/
		//		- Автор
		//		- Цена
		//		- Количество страниц
		//		Предусмотреть для этих полей конструкторы и методы.
	char* Name = nullptr;
	char* Author = nullptr;
	int Cost = 0;
	int Pages = 0;
public:
	Book()=default;
	Book(const char*);
	Book(const char*, const char*);
	Book(const char*, const char*, int);
	Book(const char*, const char*, int, int);
	Book(const Book&);
	Book(Book&&);
	Book& operator=(const Book&);
	Book& operator=(Book&&);
	~Book();
	void SetName(const char*);
	void SetAuthor(const char*);
	void SetCost(int);
	void SetPages(int);
	const char* GetName()const;
	const char* GetAuthor()const;
	int GetCost()const;
	int GetPages()const;
	void Show();
	friend std::istream& operator>>(std::istream&is, Book&);
	static void SortName(int,Book*&);
	static void SortAuthor(int,Book*&);
	static void SortCost(int,Book*&);
	static void SortPages(int,Book*&);
};

