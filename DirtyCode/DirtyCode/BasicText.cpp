#include "BasicText.h"
using namespace std;

BasicText::BasicText(string t)
{
	text = t;
}
void BasicText::print()
{
	cout << text << endl;
}