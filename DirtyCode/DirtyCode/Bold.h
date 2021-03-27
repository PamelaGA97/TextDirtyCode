#ifndef BOLD_H 
#define BOLD_H
#include "Html.h"

class Bold : public HtmlText
{
private:
	HtmlText* htmlText;
public:
	Bold(HtmlText* t);
	void print();
};


#endif