#include "Bold.h"
using namespace std;

Bold::Bold(HtmlText* t)
{
	htmlText = t;
}

void Bold::print()
{
	cout << "<b>" << endl;
	htmlText->print();
	cout << "</b>" << endl;
}