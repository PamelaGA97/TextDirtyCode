#ifndef ITALIC_H 
#define ITALIC_H
#include "Html.h"
class Italic : public HtmlText
{
private:
	HtmlText* htmlText;
public:
	Italic(HtmlText* t);
	void print();
};

#endif