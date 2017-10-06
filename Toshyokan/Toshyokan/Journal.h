#pragma once
#include"Book.h"
class Journal
	:public Book
{
public:
	Journal()=default;
	Journal(const char*);
	Journal(const char*,const char*);
	Journal(const char*, const char*, int);
	Journal(const char*, const char*, int, int);
	Journal(const Journal&);
	Journal(Journal&&);
	Journal& operator=(const Journal&);
	Journal& operator=(Journal&&);
	~Journal();
	void Show();
};
