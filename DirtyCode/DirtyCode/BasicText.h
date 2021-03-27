#ifndef BASICTEXT_H 
#define BASICTEXT_H
#include "Html.h"

class BasicText : public HtmlText
{
private:
	std::string text;
public:
	BasicText(std::string t);
	void print();
};

#endif