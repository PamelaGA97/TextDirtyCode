#include "Italic.h"
using namespace std;

Italic::Italic(HtmlText* t)
{
	htmlText = t;
}
void Italic::print()
{
	cout << "<i>" << endl;
	htmlText->print();
	cout << "</i>" << endl;
}